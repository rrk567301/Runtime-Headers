@class CKDServerConfiguration;

@interface CKDGlobalConfigurationURLRequest : CKDURLRequest

@property (retain, nonatomic) CKDServerConfiguration *configuration;

- (id)httpMethod;
- (BOOL)allowsAnonymousAccount;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (id)url;
- (long long)partitionType;
- (long long)serverType;
- (void).cxx_destruct;
- (id)additionalHeaderValues;
- (BOOL)hasRequestBody;
- (void)requestDidParsePlistObject:(id)a0;
- (BOOL)requiresConfiguration;
- (BOOL)requiresDeviceID;

@end
