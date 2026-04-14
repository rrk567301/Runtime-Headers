@interface PICinematicVideoUtilities : NSObject

+ (id)cinematicMetadataFromAsset:(id)a0;
+ (unsigned long long)renderingVersionFromAsset:(id)a0 error:(out id *)a1;
+ (BOOL)assetIsCinematicVideo:(id)a0;
+ (BOOL)currentSystemCanRenderAsset:(id)a0;
+ (unsigned long long)currentSystemRenderingVersion;

@end
