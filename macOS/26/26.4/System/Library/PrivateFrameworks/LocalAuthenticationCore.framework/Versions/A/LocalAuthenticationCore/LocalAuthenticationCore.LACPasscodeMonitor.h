@interface LocalAuthenticationCore.LACPasscodeMonitor : NSObject <LACKeyBagObserver> {
    void /* unknown type, empty encoding */ keyBag;
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ keyBagDisabled;
}

- (void).cxx_destruct;
- (id)init;
- (void)keybagStateDidChange:(id)a0;

@end
