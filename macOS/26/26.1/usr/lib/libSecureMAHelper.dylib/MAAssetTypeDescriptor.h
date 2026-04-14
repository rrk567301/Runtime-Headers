@class NSString, NSArray, NSDictionary;

@interface MAAssetTypeDescriptor : NSObject {
    NSDictionary *_typeDescriptor;
}

@property (readonly, nonatomic) NSString *assetType;
@property (readonly, nonatomic) BOOL isSecure;
@property (readonly, nonatomic) BOOL shouldMakeDataVault;
@property (readonly, nonatomic) BOOL shouldRemoveV1Assets;
@property (readonly, nonatomic) NSArray *assetSpecifiers;
@property (readonly, nonatomic) NSDictionary *assetProperties;

+ (id)typeDescriptorsToRemoveV1Assets;
+ (id)descriptorForAssetType:(id)a0;
+ (id)typeDescriptorsToDataVault;

- (id)initWithAssetType:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)assetSpecifiers;
- (id)assetProperties;
- (BOOL)shouldMakeDataVault;
- (BOOL)shouldRemoveV1Assets;

@end
