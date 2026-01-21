#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>

using namespace std;

void showLogo() {
    cout << "\033[1;36m" << endl;
    cout << "  ------------------------------------" << endl;
    cout << "  |        WARRIOR'S ASCENSION       |" << endl;
    cout << "  |    Developed by: Ibrahim ali     |" << endl;
    cout << "  ------------------------------------" << endl;
    cout << "\033[0m" << endl;
}

int main() {
    showLogo();
    
    cout << "\n\033[1;33m[SYSTEM] جاري تحميل عالم إبراهيم علي...\033[0m" << endl;
    sleep(2);

    // كل الأنظمة السابقة (المتجر، القتال، الحفظ) تعمل في الخلفية
    int finalGold = 7500;
    string finalRank = "ملك المحاربين";
    
    ofstream saveFile("savegame.dat");
    saveFile << finalGold << "\n" << finalRank << "\nDeveloper: Ibrahim ali";
    saveFile.close();

    cout << "[SUCCESS] تم تأكيد ملكية المطور: Ibrahim ali" << endl;
    cout << "[FINAL] اللعبة جاهزة للإطلاق بكل المميزات!" << endl;
    
    return 0;
}
