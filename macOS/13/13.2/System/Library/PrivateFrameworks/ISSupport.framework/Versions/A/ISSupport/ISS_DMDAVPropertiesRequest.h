@interface ISS_DMDAVPropertiesRequest : ISS_DAVRequest

+ (id)propPatchWithSession:(id)a0 URI:(id)a1 updatingProps:(id)a2 inNameSpace:(id)a3 withContext:(id)a4;
+ (id)propFindRequestWithSession:(id)a0 withDepth:(id)a1 URI:(id)a2 lookingForProps:(id)a3;

- (void)_initForPropFindWithDepth:(id)a0 lookingForProps:(id)a1;
- (id)initPropPatchWithSession:(id)a0 URI:(id)a1 updatingProps:(id)a2 inNameSpace:(id)a3 withContext:(id)a4;
- (id)initPropFindWithSession:(id)a0 withDepth:(id)a1 URI:(id)a2 lookingForProps:(id)a3;
- (void)_initForPropPatchUpdatingProps:(id)a0 inNameSpace:(id)a1 withContext:(id)a2;

@end
