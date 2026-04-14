@class ACAccount;

@interface AASetupAssistantTermsFetchRequest : AARequest {
    ACAccount *_account;
}

+ (Class)responseClass;

- (id)urlRequest;
- (id)initWithAccount:(id)a0;
- (id)urlString;
- (void).cxx_destruct;

@end
