@interface SearchUIDefaultBrowserAppIconImage : SearchUIAppIconImage

+ (void)invalidateDefaultBrowserBundleIdentifier;
+ (id)defaultBrowserBundleIdentifier;

- (id)loadImageWithScale:(double)a0 isDarkStyle:(BOOL)a1;
- (id)initWithVariant:(unsigned long long)a0;
- (BOOL)shouldInvalidateAppIconForChangedBundleIdentifier:(id)a0;

@end
