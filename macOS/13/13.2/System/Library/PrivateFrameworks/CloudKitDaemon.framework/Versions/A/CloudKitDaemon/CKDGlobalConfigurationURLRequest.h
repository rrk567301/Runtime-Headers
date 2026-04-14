@class CKDServerConfiguration;

@interface CKDGlobalConfigurationURLRequest : CKDURLRequest

@property (retain, nonatomic) CKDServerConfiguration *configuration;

- (void).cxx_destruct;
- (id)url;
- (long long)partitionType;
- (id)httpMethod;
- (id)additionalHeaderValues;
- (long long)serverType;
- (BOOL)allowsAnonymousAccount;
- (BOOL)hasRequestBody;
- (void)requestDidParsePlistObject:(id)a0;
- (BOOL)requiresConfiguration;
- (BOOL)requiresDeviceID;

@end
