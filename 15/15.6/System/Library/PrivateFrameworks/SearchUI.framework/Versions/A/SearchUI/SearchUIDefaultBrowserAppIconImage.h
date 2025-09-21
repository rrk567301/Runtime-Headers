@interface SearchUIDefaultBrowserAppIconImage : SearchUIAppIconImage

+ (id)defaultBrowserBundleIdentifier;
+ (void)invalidateDefaultBrowserBundleIdentifier;

- (id)initWithVariant:(unsigned long long)a0;
- (id)loadImageWithScale:(double)a0 isDarkStyle:(char)a1;

@end
