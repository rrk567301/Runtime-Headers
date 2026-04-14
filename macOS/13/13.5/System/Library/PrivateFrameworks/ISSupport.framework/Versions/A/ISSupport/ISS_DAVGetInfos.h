@interface ISS_DAVGetInfos : ISS_DAVRequest

+ (id)getInfosRequestWithSession:(id)a0 path:(id)a1;
+ (id)getInfosRequestWithURL:(id)a0;

- (id)infos;
- (void)finalizeOperation;
- (id)initGetInfosWithSession:(id)a0 path:(id)a1;
- (id)initGetInfosWithURL:(id)a0;

@end
