@class NSData, NSString;

@interface CKDTokenRegistrationURLRequest : CKDURLRequest

@property (retain, nonatomic) NSData *apsToken;
@property (retain, nonatomic) NSString *apsEnvironmentString;
@property (retain, nonatomic) NSString *bundleID;
@property (nonatomic) BOOL skipBundleIDCheck;

- (id)sourceApplicationSecondaryIdentifier;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)requestOperationClasses;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (id)generateRequestOperations;
- (id)applicationBundleIdentifierForContainerAccess;
- (void).cxx_destruct;
- (id)applicationBundleIdentifierForNetworkAttribution;
- (id)initWithOperation:(id)a0 apsToken:(id)a1 apsEnvironmentString:(id)a2 bundleID:(id)a3 skipBundleIDCheck:(BOOL)a4;
- (BOOL)requiresTokenRegistration;

@end
