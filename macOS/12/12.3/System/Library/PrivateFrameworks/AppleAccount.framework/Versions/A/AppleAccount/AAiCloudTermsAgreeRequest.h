@class ACAccount;

@interface AAiCloudTermsAgreeRequest : AARequest

@property (retain, nonatomic) ACAccount *account;
@property (nonatomic) BOOL preferPassword;

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)urlRequest;
- (void)performRequestWithHandler:(id /* block */)a0;
- (id)initWithURLString:(id)a0 account:(id)a1;

@end
