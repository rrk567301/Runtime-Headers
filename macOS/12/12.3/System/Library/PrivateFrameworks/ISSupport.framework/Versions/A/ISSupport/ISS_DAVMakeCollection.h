@interface ISS_DAVMakeCollection : ISS_DAVRequest

+ (id)makeCollectionRequestWithURL:(id)a0;
+ (id)makeCollectionRequestWithSession:(id)a0 path:(id)a1;

- (void)finalizeOperation;
- (id)initMakeCollectionWithURL:(id)a0;
- (id)initMakeCollectionWithSession:(id)a0 path:(id)a1;

@end
