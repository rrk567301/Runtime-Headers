@interface PKPassLiveRenderedArmedStateImageSet : PKPassLiveRenderedImageSet

+ (unsigned int)currentVersion;
+ (char)shouldCache;
+ (id)archiveName;
+ (long long)imageSetType;

- (id)initWithDisplayProfile:(id)a0 fileURL:(id)a1 screenScale:(double)a2 suffix:(id)a3;

@end
