@interface ISS_DAVGetInfos : ISS_DAVRequest

+ (id)getInfosRequestWithURL:(id)a0;
+ (id)getInfosRequestWithSession:(id)a0 path:(id)a1;

- (void)finalizeOperation;
- (id)infos;
- (id)initGetInfosWithURL:(id)a0;
- (id)initGetInfosWithSession:(id)a0 path:(id)a1;

@end
