@interface CKDFetchRegisteredBundleIDsURLRequest : CKDURLRequest

@property (copy, nonatomic) id /* block */ bundleIDsFetchedBlock;

- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (id)generateRequestOperations;
- (id)applicationBundleIdentifierForContainerAccess;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)sourceApplicationSecondaryIdentifier;
- (id)requestOperationClasses;
- (void)requestDidParseNodeFailure:(id)a0;
- (void).cxx_destruct;
- (BOOL)requiresTokenRegistration;

@end
