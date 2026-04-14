@class ACAccount;

@interface AAFMIPAuthenticateRequest : AARequest {
    ACAccount *_account;
}

+ (Class)responseClass;

- (id)urlRequest;
- (id)urlString;
- (id)initWithAccount:(id)a0;
- (void).cxx_destruct;

@end
