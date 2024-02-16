#include <fstream>
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

struct Account {
    string name;
    string password;
};

struct Post {
    int upload_time;
    int update_time;
    string name;
    string title;
    string text;
};

stack<Post> posts_list;
vector<Account> accounts_list;

void load_account();
void load_post() {
    return;
}

void check_sign_in();
void sign_in();

void show_post() {
    return;
}

void add_post() {
    return;
}

int main() {
    load_post();
    load_account();

    string option = "show_post";

    check_sign_in();

    while (true) {
        if (option == "show_post") {
        } else if (option == "add_post") {
        }
        cin >> option;
    }
    return 0;
}

void load_account() {
    string data;
    Account account;

    ifstream load_accounts_data;
    load_accounts_data.open("accounts_data.txt");
    while (getline(load_accounts_data, data)) {
        account.name = data;
        getline(load_accounts_data, data);
        account.password = data;
        accounts_list.push_back(account);
    }
}

void check_sign_in() {
    bool check_login = false;
    if (!check_login) {
        cout << "您尚未登入，請先登入後再寫文章。" << endl;
        cout << "若尚無帳號，請先建立帳號。" << endl;
    }
    cout << "[1] 登入\n";
    cout << "[2] 註冊\n";
}

void sign_in() {
    string input_name, password;
    cout << "請輸入使用者名稱：";
    while (cin >> input_name) {
        bool check_name = false;
        for (int i = 0; i < accounts_list.size(); i++) {
            if (accounts_list[i].name == input_name) {
                check_name = true;
            }
        }
        if (check_name) {
            break;
        }
    }
    cout << "請輸入密碼：\n[/end] 結束\n";
    while (cin >> password) {
        char is_forget_password = false;
        for (int i = 0; i < accounts_list.size(); i++) {
            if (accounts_list[i].name == input_name && accounts_list[i].password != password) {
                cout << "密碼錯誤，請重新輸入。\n";
                break;
            }
        }
        cout << "忘記密碼？\n";
        cout << "[0] 並沒有\n";
        cout << "[1] 是的\n";
        cin >> is_forget_password;
        if (is_forget_password) {
            cout << "那你自己想辦法，我也不知道怎麼辦。\n";
        }
    }
}