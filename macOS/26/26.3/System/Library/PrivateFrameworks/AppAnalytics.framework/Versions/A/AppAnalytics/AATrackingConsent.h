@class NSString;

@interface AATrackingConsent : NSObject {
    void /* unknown type, empty encoding */ accessGroup;
    void /* unknown type, empty encoding */ consentEnforcement;
    void /* unknown type, empty encoding */ consented;
    void /* unknown type, empty encoding */ userDefaults;
    void /* unknown type, empty encoding */ userDefaultsObservationTask;
    void /* unknown type, empty encoding */ storage;
}

@property (class, nonatomic, readonly) NSString *userDefaultsConsentKey;
@property (class, nonatomic, readonly) AATrackingConsent *shared;

@property (nonatomic, readonly) BOOL hasConsented;

- (void)pop;
- (void)push;
- (id)init;
- (void)deny;
- (void)allow;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithKeychainAccessGroup:(id)a0 initialPermission:(BOOL)a1;
- (id)initWithKeychainAccessGroup:(id)a0;

@end
