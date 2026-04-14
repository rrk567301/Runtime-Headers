@interface ISS_DMDAVPutFrom : ISS_DAVRequest

- (void)finalizeOperation;
- (id)initPutFromWithSession:(id)a0 sourceURI:(id)a1 destinationURI:(id)a2 sourceToken:(id)a3 destinationToken:(id)a4;

@end
