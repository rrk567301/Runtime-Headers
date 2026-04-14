@interface ISS_DMDAVCreate : ISS_DAVRequest

+ (id)dmCreateRequestWithSession:(id)a0 data:(id)a1 props:(id)a2 URI:(id)a3;
+ (id)dmCreateRequestWithSession:(id)a0 file:(id)a1 props:(id)a2 URI:(id)a3;

- (void)finalizeOperation;
- (void)addPropHeaders:(id)a0;
- (id)dmCreateWithSession:(id)a0 data:(id)a1 props:(id)a2 URI:(id)a3;

@end
