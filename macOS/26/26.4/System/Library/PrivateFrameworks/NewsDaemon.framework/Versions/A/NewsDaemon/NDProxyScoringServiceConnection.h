@interface NDProxyScoringServiceConnection : NSObject {
    void /* unknown type, empty encoding */ xpcConnection;
    void /* unknown type, empty encoding */ xpcConnectionInterest;
    void /* unknown type, empty encoding */ xpcConnectionLock;
}

@property (class, nonatomic, readonly) NDProxyScoringServiceConnection *sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)popInterest;
- (void)pushInterest;

@end
