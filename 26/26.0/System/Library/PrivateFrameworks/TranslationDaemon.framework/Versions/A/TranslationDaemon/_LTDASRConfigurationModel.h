@class NSDictionary, NSArray;

@interface _LTDASRConfigurationModel : NSObject

@property (retain, nonatomic) NSDictionary *root;
@property (readonly, nonatomic) NSArray *localeIdentifiers;
@property (readonly, nonatomic) NSArray *locales;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)_defaultAssetType;
- (id)_taskHintMap;
- (id)assetTypeForTaskHint:(long long)a0 localeIdentifier:(id)a1;
- (id)assetTypesForLocaleIdentifier:(id)a0;
- (id)supportedLocaleIdentifiersForTaskHint:(long long)a0;

@end
