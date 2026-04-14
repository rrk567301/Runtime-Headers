@interface ISS_DAVMakePath : ISS_DAVRequest

+ (id)makePathRequestWithSession:(id)a0 path:(id)a1;
+ (id)makePathRequestWithURL:(id)a0;

- (void)finalizeOperation;
- (id)dependenciesList;
- (id)initMakePathWithSession:(id)a0 path:(id)a1;
- (id)initMakePathWithURL:(id)a0;

@end
