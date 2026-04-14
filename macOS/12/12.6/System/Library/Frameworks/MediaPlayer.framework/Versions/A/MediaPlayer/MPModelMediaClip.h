@class NSArray, NSString;

@interface MPModelMediaClip : MPModelObject

@property (copy, nonatomic) id /* block */ previewArtworkCatalogBlock;
@property (copy, nonatomic) NSArray *staticAssets;
@property (copy, nonatomic) NSString *title;

+ (id)kind;
+ (id)__title_KEY;
+ (id)classesForSecureCoding;
+ (id)__previewArtworkCatalogBlock_KEY;
+ (id)__staticAssets_KEY;
+ (long long)genericObjectType;

- (id)humanDescription;
- (id)previewArtworkCatalog;

@end
