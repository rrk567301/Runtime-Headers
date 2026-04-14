@interface ISS_DMDAVPost : ISS_DAVRequest

+ (id)postRequestWithSession:(id)a0 path:(id)a1 data:(id)a2;

- (id)data;
- (void)finalizeOperation;
- (id)initPostWithSession:(id)a0 path:(id)a1 data:(id)a2;

@end
