@class ACAccount;

@interface AAAddEmailUIRequest : AARequest

@property (retain, nonatomic) ACAccount *account;

- (id)urlRequest;
- (id)initWithAccount:(id)a0;
- (id)urlString;
- (void).cxx_destruct;
- (id)initWithURLString:(id)a0 account:(id)a1;

@end
