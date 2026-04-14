@class CKDAssetZoneKey, NSMutableDictionary, NSMutableOrderedSet;

@interface CKDAssetZone : NSObject

@property (retain, nonatomic) NSMutableOrderedSet *assetRecords;
@property (retain, nonatomic) NSMutableDictionary *assetRecordsByRecordID;
@property (retain, nonatomic) CKDAssetZoneKey *assetZoneKey;

- (void)addRereferencedMMCSPackageItem:(id)a0;
- (id)CKPropertiesDescription;
- (void)addMMCSSectionItem:(id)a0;
- (id)initWithAssetZoneKey:(id)a0;
- (void)addMMCSItem:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
