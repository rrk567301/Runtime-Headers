@interface CDPDUnlockObserver : NSObject <CDPDXPCEventListener> {
    void /* unknown type, empty encoding */ listeners;
    void /* unknown type, empty encoding */ context;
}

- (id)init;
- (void).cxx_destruct;
- (void)registerListener:(id)a0;
- (BOOL)currentDeviceIsUnlocked;
- (void)eventReceived:(const char *)a0 eventInfo:(id)a1;
- (void)eventReceived:(const char *)a0 eventValue:(unsigned long long)a1;

@end
