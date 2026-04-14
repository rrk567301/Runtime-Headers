@class NSString, CKDContainerServerInfo;

@interface CKDContainerSpecificInfoURLRequest : CKDURLRequest

@property (copy, nonatomic) CKDContainerServerInfo *containerServerInfo;
@property (nonatomic) BOOL requireUserIDs;
@property (copy, nonatomic) NSString *containerIdentifier;

- (void).cxx_destruct;
- (id)url;
- (long long)partitionType;
- (long long)serverType;
- (BOOL)allowsAnonymousAccount;
- (BOOL)hasRequestBody;
- (void)requestDidParseJSONObject:(id)a0;
- (BOOL)requiresConfiguration;
- (BOOL)requiresDeviceID;
- (BOOL)allowsAuthedAccount;
- (BOOL)usesCloudKitAuthToken;
- (BOOL)usesiCloudAuthToken;
- (id)initWithOperation:(id)a0 containerIdentifier:(id)a1;

@end
