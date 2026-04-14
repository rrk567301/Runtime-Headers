@class NSURL, NSMutableSet, NSMutableDictionary;

@interface KHThemeManagerSelectiveFileSystemSource : KHThemeManagerFileSystemSource {
    NSMutableSet *_knownThemeURLs;
    NSMutableDictionary *_bundles;
}

@property (retain, nonatomic) NSURL *sourceURL;

+ (id)sharedSelectiveFileSystemSource;

- (void).cxx_destruct;
- (void)removeAll;
- (id)initWithSourceURL:(id)a0 manager:(id)a1;
- (id)_themeProvidersMatchingProductCodes:(id)a0 error:(id *)a1;
- (BOOL)sourceIsAvailable;
- (id)_knownThemeURLs;
- (id)knownThemeURLs;
- (void)addThemeURL:(id)a0;
- (void)removeThemeURL:(id)a0;

@end
