@class CKDServerConfiguration;

@interface CKDGlobalConfigurationURLRequest : CKDURLRequest

@property (retain, nonatomic) CKDServerConfiguration *configuration;

- (void).cxx_destruct;
- (id)url;
- (long long)partitionType;
- (id)httpMethod;
- (id)additionalHeaderValues;
- (long long)serverType;
- (void)requestDidParsePlistObject:(id)a0;
- (BOOL)allowsAnonymousAccount;
- (BOOL)requiresConfiguration;
- (BOOL)requiresDeviceID;
- (BOOL)hasRequestBody;

@end
