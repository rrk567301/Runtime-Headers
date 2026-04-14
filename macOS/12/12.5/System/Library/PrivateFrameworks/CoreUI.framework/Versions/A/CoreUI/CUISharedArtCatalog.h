@class NSCache;

@interface CUISharedArtCatalog : CUICatalog {
    NSCache *_cachedImages;
}

+ (id)sharedInstance;
+ (BOOL)isImageAnIcon:(id)a0;
+ (unsigned int)iconCreatorCode:(id)a0;
+ (id)_duplicateNamesDict;
+ (id)iconNamesAndCreatorCodes;

- (BOOL)imageExistsWithName:(id)a0;
- (id)imageWithID:(long long)a0 scaleFactor:(double)a1;
- (id)imageWithName:(id)a0 scaleFactor:(double)a1 appearanceNames:(id)a2;
- (id)imageWithName:(id)a0 scaleFactor:(double)a1 displayGamut:(long long)a2 layoutDirection:(long long)a3 appearanceNames:(id)a4;
- (id)initWithName:(id)a0 fromBundle:(id)a1 error:(id *)a2;
- (id)_sharedArtNameFromImageID:(long long)a0;
- (BOOL)imageExistsWithName:(id)a0 scaleFactor:(double)a1;

@end
