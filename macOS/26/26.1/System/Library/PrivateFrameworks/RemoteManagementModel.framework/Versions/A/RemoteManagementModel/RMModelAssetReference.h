@class NSString, NSArray;

@interface RMModelAssetReference : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSArray *assetTypes;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 assetTypes:(id)a1;
- (BOOL)isEqualToAssetReference:(id)a0;

@end
