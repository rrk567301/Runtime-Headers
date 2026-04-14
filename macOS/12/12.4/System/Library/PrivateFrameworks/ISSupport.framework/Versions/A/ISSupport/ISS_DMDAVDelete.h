@interface ISS_DMDAVDelete : ISS_DAVDelete

+ (id)deleteRequestWithSession:(id)a0 URI:(id)a1 token:(id)a2;

- (void)finalizeOperation;
- (id)initDeleteWithSession:(id)a0 URI:(id)a1 token:(id)a2;

@end
