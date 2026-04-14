@class NSString;

@interface SearchUIAppIconImage : SearchUIImage

@property (nonatomic) unsigned long long variant;
@property (retain, nonatomic) NSString *bundleIdentifier;

+ (id)appIconForBundleIdentifier:(id)a0 variant:(unsigned long long)a1;
+ (struct CGSize { double x0; double x1; })sizeForVariant:(unsigned long long)a0;
+ (unsigned long long)bestVariantForSize:(struct CGSize { double x0; double x1; })a0;
+ (id)appIconForResult:(id)a0 variant:(unsigned long long)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (id)initWithBundleIdentifier:(id)a0 variant:(unsigned long long)a1;
- (id)loadImageWithScale:(double)a0 isDarkStyle:(BOOL)a1;
- (BOOL)shouldInvalidateAppIconForChangedBundleIdentifier:(id)a0;
- (int)defaultCornerRoundingStyle;
- (void)appIconWillChange:(id)a0;
- (void)invalidateAppIcon;

@end
