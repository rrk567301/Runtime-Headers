@class NSString, NSNumber, NSImageSymbolConfiguration;

@interface NSCustomResource : NSObject <NSCoding> {
    NSString *className;
    NSString *resourceName;
    NSString *resourceCatalogName;
    NSNumber *imageIsTemplate;
    NSImageSymbolConfiguration *imageSymbolConfiguration;
}

@property (copy) NSString *className;
@property (copy) NSString *resourceName;
@property (copy) NSString *resourceCatalogName;
@property (copy) NSNumber *imageIsTemplate;
@property (copy) NSImageSymbolConfiguration *imageSymbolConfiguration;

+ (void)initialize;
+ (void)pushBundleForImageSearch:(id)a0;
+ (void)popBundleForImageSearch;
+ (id)bundleForCurrentNib;
+ (id)bundleForImageSearch;

- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)awakeAfterUsingCoder:(id)a0;
- (id)loadImageWithName:(id)a0 symbolCatalogName:(id)a1 symbolConfiguration:(id)a2 isTemplateValue:(id)a3;
- (id)_loadImageWithName:(id)a0 symbolCatalogName:(id)a1 symbolConfiguration:(id)a2 isTemplateValue:(id)a3;
- (id)loadSoundWithName:(id)a0;
- (id)loadCIImageWithName:(id)a0;
- (id)loadImageWithName:(id)a0;
- (id)loadImageWithName:(id)a0 symbolCatalogName:(id)a1;

@end
