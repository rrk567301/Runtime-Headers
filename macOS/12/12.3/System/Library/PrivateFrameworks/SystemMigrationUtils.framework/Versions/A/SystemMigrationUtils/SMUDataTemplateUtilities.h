@interface SMUDataTemplateUtilities : NSObject

+ (BOOL)copyDataTemplateWithSystemVolumePath:(id)a0 dataVolumePath:(id)a1 instantiateFirmlinks:(BOOL)a2 withError:(id *)a3;
+ (BOOL)copyDataTemplateWithSystemVolumePath:(id)a0 dataVolumePath:(id)a1 instantiateFirmlinks:(BOOL)a2 progressBlock:(id /* block */)a3 withError:(id *)a4;
+ (BOOL)_installDataTemplateWithSystemTarget:(id)a0 dataTarget:(id)a1 progressBlock:(id /* block */)a2 error:(id *)a3;
+ (BOOL)_createFirmlinksWithSystemTarget:(id)a0 dataTarget:(id)a1 isAppleInternal:(BOOL)a2 error:(id *)a3;
+ (BOOL)_propagateUserTemplateAttributesWithSystemTarget:(id)a0 dataTarget:(id)a1;
+ (id)parseFirmlinkManifestForVolume:(id)a0 withError:(id *)a1;
+ (BOOL)_forceAttributesOfSrcPath:(id)a0 toDstPath:(id)a1;
+ (id)_templateSourceFolderForMountPoint:(id)a0;
+ (BOOL)_operation:(unsigned int)a0 withSource:(id)a1 destination:(id)a2 destinationFolderName:(id)a3 progressBlock:(id /* block */)a4 error:(id *)a5;
+ (id)_createBOMWithSystemTargetMountPoint:(id)a0 andTempBOMPath:(id)a1 error:(id *)a2;
+ (id)systemVersionForMountPoint:(id)a0;
+ (id)_receiptForVersionString:(id)a0 buildString:(id)a1 tempBOMPath:(id)a2;
+ (id)parseFirmlinkManifestForVolume:(id)a0 liveResolution:(BOOL)a1 withError:(id *)a2;
+ (unsigned long long)determineTemplateSyncBetween:(id)a0 and:(id)a1;
+ (BOOL)copyDataTemplateWithSystemVolumePath:(id)a0 dataVolumePath:(id)a1 withError:(id *)a2;
+ (BOOL)disableFirmlinksOnSystemTarget:(id)a0 withError:(id *)a1;

@end
