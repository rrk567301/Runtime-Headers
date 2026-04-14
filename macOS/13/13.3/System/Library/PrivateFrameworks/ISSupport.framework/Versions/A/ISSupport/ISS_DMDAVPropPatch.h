@interface ISS_DMDAVPropPatch : ISS_DMDAVPropertiesRequest

+ (id)propPatchWithSession:(id)a0 URI:(id)a1 updatingProps:(id)a2 token:(id)a3 inNameSpace:(id)a4 withContext:(id)a5;

- (void)finalizeOperation;
- (id)initPropPatchWithSession:(id)a0 URI:(id)a1 updatingProps:(id)a2 token:(id)a3 inNameSpace:(id)a4 withContext:(id)a5;

@end
