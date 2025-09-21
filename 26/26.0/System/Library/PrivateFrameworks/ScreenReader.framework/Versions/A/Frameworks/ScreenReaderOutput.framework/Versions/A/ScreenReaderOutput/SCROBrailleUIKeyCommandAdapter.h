@interface SCROBrailleUIKeyCommandAdapter : NSObject {
    void /* unknown type, empty encoding */ lastSelectLeftPressTime;
    void /* unknown type, empty encoding */ isSelectLeftDoublePressed;
    void /* unknown type, empty encoding */ lastSelectRightPressTime;
    void /* unknown type, empty encoding */ isSelectRightDoublePressed;
}

- (id)init;
- (void).cxx_destruct;
- (id)eventForCommand:(id)a0;
- (BOOL)isBrailleUIDeleteCommand:(id)a0;
- (BOOL)isBrailleUIReturnCommand:(id)a0;
- (BOOL)isBrailleUIStartCommand:(id)a0;

@end
