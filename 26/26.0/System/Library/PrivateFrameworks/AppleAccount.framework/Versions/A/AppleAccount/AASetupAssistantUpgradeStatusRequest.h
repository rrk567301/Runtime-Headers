@class ACAccount;

@interface AASetupAssistantUpgradeStatusRequest : AARequest {
    ACAccount *_account;
}

+ (Class)responseClass;

- (id)urlString;
- (id)initWithAccount:(id)a0;
- (id)urlRequest;
- (void).cxx_destruct;

@end
