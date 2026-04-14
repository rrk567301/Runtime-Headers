@interface ISS_DAVMakeCollection : ISS_DAVRequest

+ (id)makeCollectionRequestWithSession:(id)a0 path:(id)a1;
+ (id)makeCollectionRequestWithURL:(id)a0;

- (void)finalizeOperation;
- (id)initMakeCollectionWithSession:(id)a0 path:(id)a1;
- (id)initMakeCollectionWithURL:(id)a0;

@end
