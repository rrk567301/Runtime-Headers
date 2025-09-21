@class CKDServerConfiguration;

@interface CKDGlobalConfigurationURLRequest : CKDURLRequest

@property (retain, nonatomic) CKDServerConfiguration *configuration;

- (void).cxx_destruct;
- (id)url;
- (long long)partitionType;
- (long long)serverType;
- (id)httpMethod;
- (id)additionalHeaderValues;
- (char)allowsAnonymousAccount;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (char)hasRequestBody;
- (void)requestDidParsePlistObject:(id)a0;
- (char)requiresConfiguration;
- (char)requiresDeviceID;

@end
