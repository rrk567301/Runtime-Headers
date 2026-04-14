@interface ISS_DMDAVGetProps : ISS_DAVRequest

+ (id)getPropsRequestWithSession:(id)a0 URI:(id)a1 properties:(id)a2;

- (id)infos;
- (void)finalizeOperation;
- (id)initGetPropsWithSession:(id)a0 URI:(id)a1 properties:(id)a2;

@end
