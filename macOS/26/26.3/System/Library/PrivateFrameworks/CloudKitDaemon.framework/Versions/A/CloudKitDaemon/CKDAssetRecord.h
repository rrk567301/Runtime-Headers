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

- (BOOL)isPackageSectionRecord;
- (void)addMMCSItem:(id)a0;
- (void)addMMCSSectionItem:(id)a0;
- (id)CKPropertiesDescription;
- (id)allRegularAndSectionAndRereferenceItems;
- (BOOL)isEmpty;
- (id)allRereferenceMMCSPackageItems;
- (id)description;
- (id)allMMCSAndSectionItems;
- (void)addRereferencedMMCSPackageItem:(id)a0;
- (id)allRegularAndSectionAndRereferenceItemsWithRecordKey:(id)a0;
- (id)firstMMCSSectionItemError;
- (BOOL)isAssetRecord;
- (id)firstMMCSItemError;
- (void).cxx_destruct;
- (BOOL)isEmptyOfRereferencesAssets;
- (id)allRecordKeys;
- (id)initWithRecordType:(id)a0 recordID:(id)a1;

@end
