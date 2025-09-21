@class NSString, NSSet, NSManagedObjectID;

@interface PLPTPAssetHandle : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSManagedObjectID *assetID;
@property (readonly, copy, nonatomic) NSManagedObjectID *sidecarID;
@property (readonly, nonatomic) char requiresConversion;
@property (readonly, nonatomic) NSString *auxiliaryResourceFilenameMarker;
@property (readonly, copy, nonatomic) NSSet *siblingAssetHandleTypes;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)assetHandleBySettingRequiresConversion;
- (id)assetHandleBySettingSiblingAssetHandleTypes:(id)a0;
- (char)hasSiblingAssetWithAssetHandleType:(long long)a0;
- (id)initWithType:(long long)a0 assetID:(id)a1 sidecarID:(id)a2 requiresConversion:(char)a3;
- (id)initWithType:(long long)a0 assetID:(id)a1 sidecarID:(id)a2 requiresConversion:(char)a3 siblingAssetHandleTypes:(id)a4;

@end
