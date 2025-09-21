@interface CNCalculatesContactDiff : NSObject

+ (void)addMultiValueUpdateTo:(id)a0 forProperty:(id)a1 contact1:(id)a2 contact2:(id)a3;
+ (void)addSingleValueUpdateTo:(id)a0 forProperty:(id)a1 contact1:(id)a2 contact2:(id)a3;
+ (void)cleanOrphanedCropUpdates:(id)a0 withContact1:(id)a1 contact2:(id)a2;
+ (void)clearWallpaperURIInUpdates:(id)a0 forContact:(id)a1;
+ (id)diffContact:(id)a0 to:(id)a1 options:(id)a2 error:(id *)a3;
+ (id)imageMetadataLog;
+ (char)shouldSaveDuplicateProperty:(id)a0 value1:(id)a1 value2:(id)a2;

@end
