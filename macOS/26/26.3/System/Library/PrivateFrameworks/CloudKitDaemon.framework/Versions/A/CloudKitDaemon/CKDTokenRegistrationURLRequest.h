@class NSData, NSString;

@interface CKDTokenRegistrationURLRequest : CKDURLRequest

@property (retain, nonatomic) NSData *apsToken;
@property (retain, nonatomic) NSString *apsEnvironmentString;
@property (retain, nonatomic) NSString *bundleID;
@property (nonatomic) BOOL skipBundleIDCheck;

- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (id)generateRequestOperations;
- (id)applicationBundleIdentifierForContainerAccess;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)sourceApplicationSecondaryIdentifier;
- (id)requestOperationClasses;
- (id)applicationBundleIdentifierForNetworkAttribution;
- (void).cxx_destruct;
- (id)initWithOperation:(id)a0 apsToken:(id)a1 apsEnvironmentString:(id)a2 bundleID:(id)a3 skipBundleIDCheck:(BOOL)a4;
- (BOOL)requiresTokenRegistration;

@end
