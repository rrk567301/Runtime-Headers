@interface CRFDRMac5DeviceHandler : CRFDRMac4DeviceHandler

+ (id)getDeviceHandlerForProductType:(int)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)getClaimDataClassesAndInstancesWithPartSPC:(id)a0 withError:(id *)a1;
- (BOOL)getMakeDataClassesAndInstancesWithPartSPC:(id)a0 fdrRemote:(struct __AMFDR { } *)a1 makeClasses:(id *)a2 makeInstances:(id *)a3 makePropertiesDict:(id *)a4 fdrError:(id *)a5;
- (BOOL)getPatchDataClassesAndInstancesWithPartSPC:(id)a0 fdrRemote:(struct __AMFDR { } *)a1 patchClasses:(id *)a2 patchInstances:(id *)a3 patchValues:(id *)a4 error:(id *)a5;
- (id)getPatchInfoPerSPC;
- (BOOL)supportPatch;
- (BOOL)validateAndFilterPatchWithPartSPC:(id)a0 patchClasses:(id *)a1 patchInstances:(id *)a2 patchValues:(id *)a3 validClasses:(id)a4 validInstances:(id)a5 error:(id *)a6;

@end
