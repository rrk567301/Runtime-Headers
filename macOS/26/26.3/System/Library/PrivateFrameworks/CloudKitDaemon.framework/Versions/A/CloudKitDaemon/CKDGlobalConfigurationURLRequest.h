@class CKDServerConfiguration;

@interface CKDGlobalConfigurationURLRequest : CKDURLRequest

@property (retain, nonatomic) CKDServerConfiguration *configuration;

- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (BOOL)allowsAnonymousAccount;
- (id)additionalHeaderValues;
- (id)httpMethod;
- (long long)serverType;
- (long long)partitionType;
- (void).cxx_destruct;
- (id)url;
- (BOOL)hasRequestBody;
- (void)requestDidParsePlistObject:(id)a0;
- (BOOL)requiresConfiguration;
- (BOOL)requiresDeviceID;

@end
