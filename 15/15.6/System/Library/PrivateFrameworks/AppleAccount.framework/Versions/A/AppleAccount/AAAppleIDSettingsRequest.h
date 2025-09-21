@class ACAccount, ACAccountStore;

@interface AAAppleIDSettingsRequest : AARequest {
    ACAccountStore *_store;
}

@property (readonly, nonatomic) ACAccount *grandSlamAccount;
@property (nonatomic) char forceGSToken;

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)urlRequest;
- (id)initWithGrandSlamAccount:(id)a0 accountStore:(id)a1;

@end
