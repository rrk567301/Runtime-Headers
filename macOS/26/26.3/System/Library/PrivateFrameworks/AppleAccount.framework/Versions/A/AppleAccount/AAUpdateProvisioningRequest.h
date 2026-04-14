@class NSString, ACAccount;

@interface AAUpdateProvisioningRequest : AARequest

@property (retain, nonatomic) ACAccount *account;
@property (copy, nonatomic) NSString *authToken;
@property (copy, nonatomic) NSString *serverInfo;

+ (Class)responseClass;

- (id)urlRequest;
- (id)initWithAccount:(id)a0;
- (id)urlString;
- (void).cxx_destruct;
- (id)urlCredential;
- (id)initWithAccount:(id)a0 token:(id)a1;
- (id)initWithURLString:(id)a0 account:(id)a1;

@end
