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
- (BOOL)isEmpty;
- (void)addRereferencedMMCSPackageItem:(id)a0;
- (id)allRecordKeys;
- (id)CKPropertiesDescription;
- (BOOL)isEmptyOfRereferencesAssets;
- (id)initWithRecordType:(id)a0 recordID:(id)a1;
- (id)allMMCSAndSectionItems;
- (id)description;
- (void)addMMCSItem:(id)a0;
- (void)addMMCSSectionItem:(id)a0;
- (BOOL)isAssetRecord;
- (BOOL)isPackageSectionRecord;
- (id)allRegularAndSectionAndRereferenceItems;
- (id)firstMMCSSectionItemError;
- (id)allRegularAndSectionAndRereferenceItemsWithRecordKey:(id)a0;
- (void).cxx_destruct;
- (id)allRereferenceMMCSPackageItems;

@end
