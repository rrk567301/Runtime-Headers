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

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)initWithRecordType:(id)a0 recordID:(id)a1;
- (id)CKPropertiesDescription;
- (void)addMMCSItem:(id)a0;
- (void)addRereferencedMMCSItem:(id)a0;
- (void)addMMCSSectionItem:(id)a0;
- (id)allRereferenceMMCSItems;
- (id)allRecordKeys;
- (id)allMMCSAndSectionItems;
- (id)allRegularAndSectionAndRereferenceItemsWithRecordKey:(id)a0;
- (id)allRegularAndSectionAndRereferenceItems;
- (id)firstMMCSItemError;
- (id)firstMMCSSectionItemError;
- (BOOL)isPackageSectionRecord;
- (BOOL)isAssetRecord;
- (BOOL)isEmptyOfRereferencesAssets;

@end
