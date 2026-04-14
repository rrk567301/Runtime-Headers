@interface PKPassLiveRenderedArmedStateImageSet : PKPassLiveRenderedImageSet

+ (unsigned int)currentVersion;
+ (BOOL)shouldCache;
+ (long long)imageSetType;
+ (id)archiveName;

- (id)initWithDisplayProfile:(id)a0 fileURL:(id)a1 screenScale:(double)a2 suffix:(id)a3;

@end
