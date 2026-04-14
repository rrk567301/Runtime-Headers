@interface PLPTPUtilities : NSObject

+ (id)pathForSidecar:(id)a0 onAsset:(id)a1;
+ (void)enumerateAvailableSidecarFilesOnAsset:(id)a0 usingBlock:(id /* block */)a1;
+ (void)enumerateAvailableSidecarFilesOnAsset:(id)a0 withFileManager:(id)a1 usingBlock:(id /* block */)a2;
+ (BOOL)shouldExpungeAsset:(id)a0;
+ (BOOL)shouldExpungeAsset:(id)a0 withFileManager:(id)a1;

@end
