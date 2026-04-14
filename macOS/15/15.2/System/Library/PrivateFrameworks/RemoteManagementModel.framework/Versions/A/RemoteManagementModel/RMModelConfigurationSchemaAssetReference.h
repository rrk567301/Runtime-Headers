@class NSArray, NSString;

@interface RMModelConfigurationSchemaAssetReference : NSObject

@property (readonly, copy, nonatomic) NSArray *assetTypes;
@property (readonly, copy, nonatomic) NSString *keyPath;

- (void).cxx_destruct;
- (id)initWithAssetTypes:(id)a0 keyPath:(id)a1;

@end
