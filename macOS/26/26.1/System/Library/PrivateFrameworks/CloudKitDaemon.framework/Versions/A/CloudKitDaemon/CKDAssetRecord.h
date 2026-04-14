@class NSMutableDictionary, NSString, CKRecordID, NSArray, NSNumber;

@interface CKDAssetRecord : NSObject

@property (retain, nonatomic) NSMutableDictionary *itemsByRecordKey;
@property (retain, nonatomic) NSMutableDictionary *rereferencedItemsByRecordKey;
@property (retain, nonatomic) NSMutableDictionary *sectionItemsByRecordKey;
@property (retain, nonatomic) NSNumber *sizeUpperBoundNumber;
@property (retain, nonatomic) NSNumber *rerefSizeUpperBoundNumber;
@property (readonly, nonatomic) NSString *recordType;
@property (readonly, nonatomic) CKRecordID *recordID;
@property (readonly) unsigned int sizeUpperBound;
@property (readonly) unsigned int rerefSizeUpperBound;
@property (readonly, nonatomic) NSArray *allMMCSItems;
@property (readonly, nonatomic) NSArray *allMMCSSectionItems;

- (id)firstMMCSItemError;
- (id)initWithRecordType:(id)a0 recordID:(id)a1;
- (void)addRereferencedMMCSPackageItem:(id)a0;
- (id)CKPropertiesDescription;
- (void)addMMCSSectionItem:(id)a0;
- (void)addMMCSItem:(id)a0;
- (id)allMMCSAndSectionItems;
- (id)description;
- (id)allRegularAndSectionAndRereferenceItemsWithRecordKey:(id)a0;
- (id)allRereferenceMMCSPackageItems;
- (BOOL)isPackageSectionRecord;
- (void).cxx_destruct;
- (BOOL)isEmptyOfRereferencesAssets;
- (id)firstMMCSSectionItemError;
- (id)allRecordKeys;
- (BOOL)isEmpty;
- (BOOL)isAssetRecord;
- (id)allRegularAndSectionAndRereferenceItems;

@end
