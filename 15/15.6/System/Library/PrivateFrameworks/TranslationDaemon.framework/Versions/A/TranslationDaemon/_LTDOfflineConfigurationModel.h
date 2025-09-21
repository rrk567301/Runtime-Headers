@class NSDictionary, NSArray, NSString;

@interface _LTDOfflineConfigurationModel : NSObject

@property (readonly, nonatomic) NSDictionary *root;
@property (readonly, nonatomic) NSDictionary *languagePairConfigs;
@property (readonly, nonatomic) char hasCapabilityIdentifiers;
@property (readonly, nonatomic) long long pairAssetRequiredANECapability;
@property (readonly, nonatomic) NSArray *languagePairs;
@property (readonly, nonatomic) NSArray *languageIdentifiers;
@property (readonly, nonatomic) NSString *pairAssetConfigFile;
@property (readonly, nonatomic) NSArray *pairAssetList;

+ (char)isPassthroughLocalePairIdentifier:(id)a0;
+ (id)passthroughConfiguration;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)_offlinePairConfigurationWithIdentifier:(id)a0 capability:(long long)a1;
- (id)offlinePairConfigurationWithIdentifier:(id)a0;

@end
