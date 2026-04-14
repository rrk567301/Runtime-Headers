@class NSURL, NSDictionary, NSString;

@interface ISBundleResourceProvider : ISResourceProvider

@property (retain) NSURL *bundleURL;
@property (retain) NSDictionary *iconDictionary;
@property unsigned long long options;
@property (retain) NSString *templateType;

- (void).cxx_destruct;
- (id)symbol;
- (id)resourceNamed:(id)a0;
- (BOOL)_isAppleResource;
- (id)customRecipe;
- (id)iconResource;
- (unsigned long long)iconShape;
- (id)initWithBundle:(id)a0 options:(unsigned long long)a1;
- (id)initWithBundleURL:(id)a0 iconDictionary:(id)a1 options:(unsigned long long)a2;
- (BOOL)onlySupportsGraphicIcons;
- (void)resolveResources;
- (BOOL)supportsGraphicIcons;
- (id)templateIconResource;

@end
