@class NSString, CKDContainerServerInfo;

@interface CKDContainerSpecificInfoURLRequest : CKDURLRequest

@property (copy, nonatomic) CKDContainerServerInfo *containerServerInfo;
@property (nonatomic) BOOL requireUserIDs;
@property (copy, nonatomic) NSString *containerIdentifier;

- (void).cxx_destruct;
- (id)url;
- (long long)partitionType;
- (long long)serverType;
- (BOOL)usesiCloudAuthToken;
- (BOOL)usesCloudKitAuthToken;
- (void)requestDidParseJSONObject:(id)a0;
- (BOOL)allowsAnonymousAccount;
- (BOOL)requiresConfiguration;
- (BOOL)allowsAuthedAccount;
- (BOOL)requiresDeviceID;
- (BOOL)hasRequestBody;
- (id)initWithOperation:(id)a0 containerIdentifier:(id)a1;

@end
