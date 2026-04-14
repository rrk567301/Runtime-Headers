@interface IMDPlainTextTapbackInterpreter : NSObject {
    void /* unknown type, empty encoding */ state;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)interpretMessageItem:(id)a0 inChat:(id)a1;
- (BOOL)parseString:(id)a0 emoji:(id *)a1 infix:(id *)a2 type:(long long *)a3;

@end
