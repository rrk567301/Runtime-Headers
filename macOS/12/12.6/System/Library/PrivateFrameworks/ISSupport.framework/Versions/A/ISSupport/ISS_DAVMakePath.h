@interface ISS_DAVMakePath : ISS_DAVRequest

+ (id)makePathRequestWithURL:(id)a0;
+ (id)makePathRequestWithSession:(id)a0 path:(id)a1;

- (void)finalizeOperation;
- (id)dependenciesList;
- (id)initMakePathWithURL:(id)a0;
- (id)initMakePathWithSession:(id)a0 path:(id)a1;

@end
