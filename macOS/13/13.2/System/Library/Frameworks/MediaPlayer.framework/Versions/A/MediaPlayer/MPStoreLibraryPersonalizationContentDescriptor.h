@class MPModelObject;

@interface MPStoreLibraryPersonalizationContentDescriptor : NSObject

@property (readonly, nonatomic) MPModelObject *model;
@property (readonly, nonatomic) long long personalizationStyle;

+ (id)lightweightPersonalizationPropertiesForModelClass:(Class)a0;
+ (id)_lightweightPersonalizationPropertiesForPlaybackPosition;
+ (id)_lightweightPersonalizationPropertiesForStoreAsset;
+ (id)_lightweightPersonalizationPropertiesForLyrics;

- (id)description;
- (void).cxx_destruct;
- (id)initWithModel:(id)a0 personalizationStyle:(long long)a1;

@end
