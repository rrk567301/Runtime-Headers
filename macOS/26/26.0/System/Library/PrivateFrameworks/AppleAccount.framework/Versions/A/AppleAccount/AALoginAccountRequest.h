@class NSString, ACAccount, NSDictionary;

@interface AALoginAccountRequest : AARequest {
    ACAccount *_account;
    NSDictionary *_delegatesInfo;
}

@property (copy, nonatomic) NSString *serverInfo;

+ (Class)responseClass;

- (id)urlString;
- (id)urlRequest;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 delegates:(id)a1;

@end
