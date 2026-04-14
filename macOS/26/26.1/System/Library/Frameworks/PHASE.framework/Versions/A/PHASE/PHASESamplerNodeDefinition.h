@class NSString;

@interface PHASESamplerNodeDefinition : PHASEGeneratorNodeDefinition

@property (readonly, nonatomic) NSString *assetIdentifier;
@property (nonatomic) long long cullOption;
@property (nonatomic) long long playbackMode;

+ (id)new;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSoundAssetIdentifier:(id)a0 mixerDefinition:(id)a1;
- (id)initWithSoundAssetIdentifier:(id)a0 mixerDefinition:(id)a1 identifier:(id)a2;

@end
