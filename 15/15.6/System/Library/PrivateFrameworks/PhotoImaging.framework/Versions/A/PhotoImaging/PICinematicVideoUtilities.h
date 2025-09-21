@interface PICinematicVideoUtilities : NSObject

+ (char)assetIsCinematicVideo:(id)a0;
+ (id)cinematicMetadataFromAsset:(id)a0;
+ (char)currentSystemCanRenderAsset:(id)a0;
+ (unsigned long long)currentSystemRenderingVersion;
+ (unsigned long long)renderingVersionFromAsset:(id)a0 error:(out id *)a1;

@end
