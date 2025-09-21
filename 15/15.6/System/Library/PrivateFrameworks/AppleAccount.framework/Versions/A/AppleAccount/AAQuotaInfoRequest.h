@class ACAccount;

@interface AAQuotaInfoRequest : AARequest {
    char _isDetailedRequest;
}

@property (readonly, nonatomic) ACAccount *account;

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;
- (id)urlString;
- (id)urlRequest;
- (id)initDetailedRequestWithAccount:(id)a0;

@end
