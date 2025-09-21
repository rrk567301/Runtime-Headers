@class NSString;

@interface AMSDeveloperSilentAuthToken : NSObject {
    void /* function */ token;
}

@property (nonatomic, readonly) NSString *token;
@property (nonatomic, readonly) unsigned long long consentStatus;
@property (nonatomic, readonly) BOOL hasConsented;

- (id)init;
- (void).cxx_destruct;
- (id)initWithConsentStatus:(unsigned long long)a0 token:(id)a1;

@end
