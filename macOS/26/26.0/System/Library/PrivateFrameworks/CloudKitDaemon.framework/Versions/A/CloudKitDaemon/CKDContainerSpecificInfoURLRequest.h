@class NSString, CKDContainerServerInfo;

@interface CKDContainerSpecificInfoURLRequest : CKDURLRequest

@property (copy, nonatomic) CKDContainerServerInfo *containerServerInfo;
@property (nonatomic) BOOL requireUserIDs;
@property (copy, nonatomic) NSString *containerIdentifier;

- (BOOL)allowsAnonymousAccount;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (id)url;
- (long long)partitionType;
- (long long)serverType;
- (void).cxx_destruct;
- (BOOL)allowsAuthedAccount;
- (BOOL)hasRequestBody;
- (id)initWithOperation:(id)a0 containerIdentifier:(id)a1;
- (void)requestDidParseJSONObject:(id)a0;
- (BOOL)requiresConfiguration;
- (BOOL)requiresDeviceID;
- (BOOL)usesCloudKitAuthToken;
- (BOOL)usesiCloudAuthToken;

@end
