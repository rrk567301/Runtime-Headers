@interface CKDFetchRegisteredBundleIDsURLRequest : CKDURLRequest

@property (copy, nonatomic) id /* block */ bundleIDsFetchedBlock;

- (void).cxx_destruct;
- (id)applicationBundleIdentifierForContainerAccess;
- (id)sourceApplicationSecondaryIdentifier;
- (id)applicationBundleIdentifierForNetworkAttribution;
- (id)generateRequestOperations;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)requestOperationClasses;
- (BOOL)requiresTokenRegistration;

@end
