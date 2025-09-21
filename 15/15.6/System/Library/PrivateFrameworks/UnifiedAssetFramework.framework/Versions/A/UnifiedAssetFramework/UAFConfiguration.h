@interface UAFConfiguration : NSObject

+ (char)assetRootSupported;
+ (char)autoAssetFeatureEnabled:(id)a0;
+ (char)isValid:(id)a0 fileType:(id)a1 fileVersions:(id)a2 error:(id *)a3;
+ (char)isValidValue:(id)a0 key:(id)a1 kind:(Class)a2 required:(char)a3 error:(id *)a4;
+ (char)trialFeatureEnabled:(id)a0;

@end
