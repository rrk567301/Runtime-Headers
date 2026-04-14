@interface AATrackingConsent : NSObject {
    void /* unknown type, empty encoding */ accessGroup;
    void /* unknown type, empty encoding */ consentEnforcement;
    void /* unknown type, empty encoding */ consented;
    void /* unknown type, empty encoding */ keychain;
}

@property (class, nonatomic, readonly) AATrackingConsent *shared;

@property (nonatomic, readonly) BOOL hasConsented;

- (void)allow;
- (void)push;
- (id)init;
- (void)pop;
- (void)deny;
- (id)initWithKeychainAccessGroup:(id)a0;
- (void).cxx_destruct;

@end
