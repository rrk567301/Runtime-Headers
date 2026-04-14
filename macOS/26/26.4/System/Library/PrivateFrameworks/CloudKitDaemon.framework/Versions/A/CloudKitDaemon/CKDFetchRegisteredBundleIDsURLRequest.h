@interface CKDFetchRegisteredBundleIDsURLRequest : CKDURLRequest

@property (copy, nonatomic) id /* block */ bundleIDsFetchedBlock;

- (id)sourceApplicationSecondaryIdentifier;
- (id)requestDidParseProtobufObject:(id)a0;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)requestOperationClasses;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (id)generateRequestOperations;
- (id)applicationBundleIdentifierForContainerAccess;
- (void).cxx_destruct;
- (BOOL)requiresTokenRegistration;

@end
