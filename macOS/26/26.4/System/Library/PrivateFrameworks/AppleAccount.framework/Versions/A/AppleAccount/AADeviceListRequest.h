@class ACAccount;

@interface AADeviceListRequest : AARequest {
    ACAccount *_account;
}

+ (Class)responseClass;

- (id)initWithAccount:(id)a0;
- (id)urlString;
- (void).cxx_destruct;
- (id)urlRequest;

@end
