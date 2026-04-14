@interface ADClientIdentifierProvider : NSObject {
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ identiferCache;
    void /* unknown type, empty encoding */ identifierRequester;
    void /* unknown type, empty encoding */ notificationReceiver;
}

- (id)init;
- (void).cxx_destruct;
- (void)notificationReceived;
- (id)getIdentifiersWithType:(long long)a0;

@end
