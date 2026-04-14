@class NSString, ACAccount;

@interface CDPQuotaStorageAppListRequest : AARequest {
    NSString *_urlStringFormat;
}

@property (readonly, nonatomic) ACAccount *account;
@property (readonly, nonatomic) unsigned long long appList;
@property (readonly, nonatomic) BOOL contentSpecifiesE2EE;

- (id)urlRequest;
- (id)urlString;
- (void).cxx_destruct;
- (void)_setAppListHeaderForRequest:(id)a0;
- (void)_setContentTypeHeaderForRequest:(id)a0;
- (id)_urlStringFormatFromBag;
- (id)initWithAccount:(id)a0 appList:(unsigned long long)a1 contentSpecifiesE2EE:(BOOL)a2;
- (BOOL)isUrlAvailable;

@end
