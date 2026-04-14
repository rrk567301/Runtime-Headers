@class NSString, ACAccount;

@interface AAUpdateProvisioningRequest : AARequest

@property (retain, nonatomic) ACAccount *account;
@property (copy, nonatomic) NSString *authToken;
@property (copy, nonatomic) NSString *serverInfo;

+ (Class)responseClass;

- (id)urlString;
- (id)initWithAccount:(id)a0;
- (id)urlCredential;
- (id)urlRequest;
- (id)initWithAccount:(id)a0 token:(id)a1;
- (id)initWithURLString:(id)a0 account:(id)a1;
- (void).cxx_destruct;

@end
