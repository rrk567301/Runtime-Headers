@class NSString, NSArray;

@interface RMModelAssetReference : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSArray *assetTypes;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 assetTypes:(id)a1;
- (char)isEqualToAssetReference:(id)a0;

@end
