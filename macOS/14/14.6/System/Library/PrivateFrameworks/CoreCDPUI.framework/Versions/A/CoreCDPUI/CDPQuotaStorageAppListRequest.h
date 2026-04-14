@class NSString, ACAccount;

@interface CDPQuotaStorageAppListRequest : AARequest {
    NSString *_urlStringFormat;
    BOOL _isWalrusEnabled;
}

@property (readonly, nonatomic) ACAccount *account;

- (void).cxx_destruct;
- (id)urlString;
- (id)urlRequest;
- (id)_acceptedLanguageString;
- (id)_urlStringFormatFromBag;
- (id)initWithAccount:(id)a0 isWalrusEnabled:(BOOL)a1;
- (BOOL)isUrlAvailable;

@end
