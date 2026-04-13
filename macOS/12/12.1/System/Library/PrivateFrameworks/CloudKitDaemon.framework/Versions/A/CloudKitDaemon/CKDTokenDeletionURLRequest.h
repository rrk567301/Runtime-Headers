@class NSData, NSString;

@interface CKDTokenDeletionURLRequest : CKDURLRequest

@property (retain, nonatomic) NSData *apsToken;
@property (retain, nonatomic) NSString *apsEnvironmentString;
@property (retain, nonatomic) NSString *bundleID;

- (void).cxx_destruct;
- (id)sourceApplicationSecondaryIdentifier;
- (id)applicationBundleIdentifierForContainerAccess;
- (id)requestOperationClasses;
- (BOOL)requiresTokenRegistration;
- (id)applicationBundleIdentifierForNetworkAttribution;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)initWithOperation:(id)a0 apsToken:(id)a1 apsEnvironmentString:(id)a2 bundleID:(id)a3;

@end
