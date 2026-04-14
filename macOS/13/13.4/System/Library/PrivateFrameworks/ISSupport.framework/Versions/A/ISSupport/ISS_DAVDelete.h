@interface ISS_DAVDelete : ISS_DAVRequest

+ (id)deleteRequestWithSession:(id)a0 path:(id)a1;
+ (id)deleteRequestWithURL:(id)a0;

- (void)finalizeOperation;
- (id)dependenciesList;
- (id)initDeleteWithSession:(id)a0 path:(id)a1;
- (id)initDeleteWithURL:(id)a0;

@end
