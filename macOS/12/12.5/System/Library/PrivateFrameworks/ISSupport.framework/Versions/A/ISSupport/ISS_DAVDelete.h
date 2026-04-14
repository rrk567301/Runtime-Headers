@interface ISS_DAVDelete : ISS_DAVRequest

+ (id)deleteRequestWithURL:(id)a0;
+ (id)deleteRequestWithSession:(id)a0 path:(id)a1;

- (void)finalizeOperation;
- (id)dependenciesList;
- (id)initDeleteWithURL:(id)a0;
- (id)initDeleteWithSession:(id)a0 path:(id)a1;

@end
