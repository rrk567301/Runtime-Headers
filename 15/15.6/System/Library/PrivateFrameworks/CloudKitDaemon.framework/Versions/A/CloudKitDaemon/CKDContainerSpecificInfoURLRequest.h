@class NSString, CKDContainerServerInfo;

@interface CKDContainerSpecificInfoURLRequest : CKDURLRequest

@property (copy, nonatomic) CKDContainerServerInfo *containerServerInfo;
@property (nonatomic) char requireUserIDs;
@property (copy, nonatomic) NSString *containerIdentifier;

- (void).cxx_destruct;
- (id)url;
- (long long)partitionType;
- (long long)serverType;
- (char)allowsAnonymousAccount;
- (char)allowsAuthedAccount;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (char)hasRequestBody;
- (id)initWithOperation:(id)a0 containerIdentifier:(id)a1;
- (void)requestDidParseJSONObject:(id)a0;
- (char)requiresConfiguration;
- (char)requiresDeviceID;
- (char)usesCloudKitAuthToken;
- (char)usesiCloudAuthToken;

@end
