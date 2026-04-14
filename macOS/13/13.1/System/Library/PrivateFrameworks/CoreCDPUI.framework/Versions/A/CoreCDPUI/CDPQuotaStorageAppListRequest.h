@class NSString, ACAccount;

@interface CDPQuotaStorageAppListRequest : AARequest {
    NSString *_urlStringFormat;
}

@property (readonly, nonatomic) ACAccount *account;

- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;
- (id)urlString;
- (id)urlRequest;
- (id)_urlStringFormatFromBag;
- (BOOL)isUrlAvailable;

@end
