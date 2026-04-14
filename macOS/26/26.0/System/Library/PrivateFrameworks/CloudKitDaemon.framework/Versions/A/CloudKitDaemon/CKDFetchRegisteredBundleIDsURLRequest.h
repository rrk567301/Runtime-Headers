@interface CKDFetchRegisteredBundleIDsURLRequest : CKDURLRequest

@property (copy, nonatomic) id /* block */ bundleIDsFetchedBlock;

- (id)applicationBundleIdentifierForContainerAccess;
- (id)requestOperationClasses;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)sourceApplicationSecondaryIdentifier;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)generateRequestOperations;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (void).cxx_destruct;
- (BOOL)requiresTokenRegistration;

@end
