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

- (id)allRecordKeys;
- (BOOL)isEmptyOfRereferencesAssets;
- (id)allMMCSAndSectionItems;
- (void)addRereferencedMMCSPackageItem:(id)a0;
- (id)allRereferenceMMCSPackageItems;
- (id)allRegularAndSectionAndRereferenceItemsWithRecordKey:(id)a0;
- (void)addMMCSItem:(id)a0;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (BOOL)isPackageSectionRecord;
- (id)CKPropertiesDescription;
- (void)addMMCSSectionItem:(id)a0;
- (BOOL)isAssetRecord;
- (id)firstMMCSItemError;
- (id)description;
- (id)firstMMCSSectionItemError;
- (id)initWithRecordType:(id)a0 recordID:(id)a1;
- (id)allRegularAndSectionAndRereferenceItems;

@end
