@interface ISS_DMDAVGetProps : ISS_DAVRequest

+ (id)getPropsRequestWithSession:(id)a0 URI:(id)a1 properties:(id)a2;

- (void)finalizeOperation;
- (id)infos;
- (id)initGetPropsWithSession:(id)a0 URI:(id)a1 properties:(id)a2;

@end
