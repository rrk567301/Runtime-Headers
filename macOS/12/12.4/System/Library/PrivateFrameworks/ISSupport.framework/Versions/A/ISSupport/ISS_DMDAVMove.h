@interface ISS_DMDAVMove : ISS_DAVRequest

+ (id)moveRequestWithSession:(id)a0 sourceURI:(id)a1 destinationURI:(id)a2 sourceToken:(id)a3 destinationToken:(id)a4;

- (void)finalizeOperation;
- (id)initMoveWithSession:(id)a0 sourceURI:(id)a1 destinationURI:(id)a2 sourceToken:(id)a3 destinationToken:(id)a4;

@end
