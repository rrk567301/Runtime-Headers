@class NSURL, NSString;

@interface SearchUIAppIconImage : SearchUIImage

@property (nonatomic) unsigned long long variant;
@property (retain, nonatomic) NSURL *url;
@property (retain) NSString *bundleIdentifier;
@property BOOL isOnenessApp;

+ (struct CGSize { double x0; double x1; })sizeForVariant:(unsigned long long)a0;
+ (id)appIconForBundleIdentifier:(id)a0 isOnenessApp:(BOOL)a1 variant:(unsigned long long)a2 contentType:(id)a3;
+ (id)appIconForBundleIdentifier:(id)a0 variant:(unsigned long long)a1;
+ (id)appIconForResult:(id)a0 variant:(unsigned long long)a1;
+ (id)appIconForURL:(id)a0 variant:(unsigned long long)a1;
+ (id)appIconImageForBundleIdentifier:(id)a0;
+ (unsigned long long)bestVariantForSize:(struct CGSize { double x0; double x1; })a0;
+ (id)imageForIcon:(id)a0 descriptor:(id)a1;

- (id)init;
- (id)uniqueIdentifier;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)imageFromSymbolName:(id)a0;
- (id)loadImageWithScale:(double)a0 isDarkStyle:(BOOL)a1;
- (int)defaultCornerRoundingStyle;
- (id)descriptorWithScale:(double)a0 isDarkStyle:(BOOL)a1;
- (id)initWithBundleIdentifier:(id)a0 isOnenessApp:(BOOL)a1 variant:(unsigned long long)a2 contentType:(id)a3;
- (BOOL)shouldInvalidateAppIconForChangedBundleIdentifier:(id)a0;

@end
