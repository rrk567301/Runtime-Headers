@interface ISS_DMDAVCopy : ISS_DAVRequest

+ (id)copyRequestWithSession:(id)a0 sourceURI:(id)a1 destinationURI:(id)a2 token:(id)a3;

- (void)finalizeOperation;
- (id)initCopyWithSession:(id)a0 sourceURI:(id)a1 destinationURI:(id)a2 token:(id)a3;

@end
