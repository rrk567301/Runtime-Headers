@interface ADClientIdentifierProvider : NSObject {
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ identiferCache;
    void /* unknown type, empty encoding */ identifierRequester;
    void /* unknown type, empty encoding */ notificationReceiver;
}

- (void).cxx_destruct;
- (id)init;
- (void)notificationReceived;
- (id)getIdentifiersWithType:(long long)a0;

@end
