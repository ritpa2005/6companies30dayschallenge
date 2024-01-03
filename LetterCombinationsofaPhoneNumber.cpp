    vector<string> letterCombinations(string digits) {
        vector<string> vv;
        int n= digits.length();
        if(n==0) return {};
        for(int i=0;i<n;i++){
            int m= vv.size();
            switch(digits[i]){
                case '2':
                if(m==0){
                    vv.push_back("a");
                    vv.push_back("b");
                    vv.push_back("c");
                }else{
                for(int j=0;j<m;++j){
                    vv.push_back(vv[0]+'a');
                    vv.push_back(vv[0]+'b');
                    vv.push_back(vv[0]+'c');
                    vv.erase(vv.begin());
                }
                }
                break;
                case '3':
                if(m==0){
                    vv.push_back("d");
                    vv.push_back("e");
                    vv.push_back("f");
                }else{
                for(int j=0;j<m;++j){
                    vv.push_back(vv[0]+'d');
                    vv.push_back(vv[0]+'e');
                    vv.push_back(vv[0]+'f');
                    vv.erase(vv.begin());
                }
                }
                break;
                case '4':
                if(m==0){
                    vv.push_back("g");
                    vv.push_back("h");
                    vv.push_back("i");
                }else{
                for(int j=0;j<m;++j){
                    vv.push_back(vv[0]+'g');
                    vv.push_back(vv[0]+'h');
                    vv.push_back(vv[0]+'i');
                    vv.erase(vv.begin());
                }
                }
                break;
                case '5':
                if(m==0){
                    vv.push_back("j");
                    vv.push_back("k");
                    vv.push_back("l");
                }else{
                for(int j=0;j<m;++j){
                    vv.push_back(vv[0]+'j');
                    vv.push_back(vv[0]+'k');
                    vv.push_back(vv[0]+'l');
                    vv.erase(vv.begin());
                }
                }
                break;
                case '6':
                if(m==0){
                    vv.push_back("m");
                    vv.push_back("n");
                    vv.push_back("o");
                }else{
                for(int j=0;j<m;++j){
                    vv.push_back(vv[0]+'m');
                    vv.push_back(vv[0]+'n');
                    vv.push_back(vv[0]+'o');
                    vv.erase(vv.begin());
                }
                }
                break;
                case '7':
                if(m==0){
                    vv.push_back("p");
                    vv.push_back("q");
                    vv.push_back("r");
                    vv.push_back("s");
                }else{
                for(int j=0;j<m;++j){
                    vv.push_back(vv[0]+'p');
                    vv.push_back(vv[0]+'q');
                    vv.push_back(vv[0]+'r');
                    vv.push_back(vv[0]+'s');
                    vv.erase(vv.begin());
                }
                }
                break;
                case '8':
                if(m==0){
                    vv.push_back("t");
                    vv.push_back("u");
                    vv.push_back("v");
                }else{
                for(int j=0;j<m;++j){
                    vv.push_back(vv[0]+'t');
                    vv.push_back(vv[0]+'u');
                    vv.push_back(vv[0]+'v');
                    vv.erase(vv.begin());
                }
                }
                break;
                case '9':
                if(m==0){
                    vv.push_back("w");
                    vv.push_back("x");
                    vv.push_back("y");
                    vv.push_back("z");
                }else{
                for(int j=0;j<m;++j){
                    vv.push_back(vv[0]+'w');
                    vv.push_back(vv[0]+'x');
                    vv.push_back(vv[0]+'y');
                    vv.push_back(vv[0]+'z');
                    vv.erase(vv.begin());
                }
                }
                break;
            }
        }
        return vv;
    }
