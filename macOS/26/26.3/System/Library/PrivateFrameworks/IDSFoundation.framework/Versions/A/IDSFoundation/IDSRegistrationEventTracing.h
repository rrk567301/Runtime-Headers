@interface IDSRegistrationEventTracing : NSObject {
    void /* unknown type, empty encoding */ debugLogger;
    void /* unknown type, empty encoding */ coreAnalyticsPublisher;
    void /* unknown type, empty encoding */ logPublisher;
    void /* unknown type, empty encoding */ filePublishersByService;
    void /* unknown type, empty encoding */ registrationOperations;
    void /* unknown type, empty encoding */ pnrOperations;
    void /* unknown type, empty encoding */ ktDataFetchOperations;
}

@property (class, nonatomic, readonly) IDSRegistrationEventTracing *sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)beginEvent:(id)a0 identifier:(id)a1;
- (void)endEvent:(id)a0 identifier:(id)a1 error:(id)a2;
- (id)fetchLastRegistrationStatesForServices:(id)a0 summary:(BOOL)a1;
- (BOOL)isRegistrationOpenWithGuid:(id)a0;
- (void)trackIDSMessageWithIdentifier:(id)a0 messageType:(long long)a1 operation:(id)a2;

@end
