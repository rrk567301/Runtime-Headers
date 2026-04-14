@interface Safari.ClamshellStateObserver : NSObject {
    void /* unknown type, empty encoding */ rootDomain;
    void /* unknown type, empty encoding */ notificationPort;
    void /* unknown type, empty encoding */ serviceConnection;
    void /* unknown type, empty encoding */ kAppleClamshellStateKey;
    void /* unknown type, empty encoding */ clamshellStateChangeCallback;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)initWithClamshellStateChangeCallback:(id /* block */)a0;

@end
