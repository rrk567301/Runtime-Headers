@class NSString;

@interface AATrackingConsent : NSObject {
    void /* unknown type, empty encoding */ accessGroup;
    void /* unknown type, empty encoding */ consentEnforcement;
    void /* unknown type, empty encoding */ consented;
    void /* unknown type, empty encoding */ storage;
}

@property (class, nonatomic, readonly) NSString *userDefaultsConsentKey;
@property (class, nonatomic, readonly) AATrackingConsent *shared;

@property (nonatomic, readonly) BOOL hasConsented;

- (void)pop;
- (id)initWithKeychainAccessGroup:(id)a0;
- (id)initWithKeychainAccessGroup:(id)a0 initialPermission:(BOOL)a1;
- (void)allow;
- (void)deny;
- (void)push;
- (void).cxx_destruct;
- (id)init;

@end
