@class PGSocialGroupAssetFilter, PGSceneAssetFilter, PGAudioAssetFilter, PGPeopleAssetFilter, PGCustomFoodieAssetFilter;

@interface PGAssetCollectionFeatureDefinition : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PGSceneAssetFilter *sceneAssetFilter;
@property (readonly, nonatomic) PGPeopleAssetFilter *peopleAssetFilter;
@property (readonly, nonatomic) PGSocialGroupAssetFilter *socialGroupAssetFilter;
@property (readonly, nonatomic) PGAudioAssetFilter *audioAssetFilter;
@property (readonly, nonatomic) PGCustomFoodieAssetFilter *customAssetFilter;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAssetFilterByName:(id)a0;

@end
