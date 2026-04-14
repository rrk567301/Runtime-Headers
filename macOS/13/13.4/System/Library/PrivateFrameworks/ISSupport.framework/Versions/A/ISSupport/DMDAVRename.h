@interface DMDAVRename : ISS_DAVRequest

+ (id)renameRequestWithSession:(id)a0 sourceURI:(id)a1 destinationURI:(id)a2 sourceToken:(id)a3 destinationToken:(id)a4;

- (void)finalizeOperation;
- (id)initRenameWithSession:(id)a0 sourceURI:(id)a1 destinationURI:(id)a2 sourceToken:(id)a3 destinationToken:(id)a4;

@end
