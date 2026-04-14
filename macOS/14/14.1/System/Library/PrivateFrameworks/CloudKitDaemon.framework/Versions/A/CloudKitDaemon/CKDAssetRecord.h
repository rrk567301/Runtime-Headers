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
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)initWithRecordType:(id)a0 recordID:(id)a1;
- (id)CKPropertiesDescription;
- (void)addMMCSItem:(id)a0;
- (void)addMMCSSectionItem:(id)a0;
- (void)addRereferencedMMCSItem:(id)a0;
- (id)allMMCSAndSectionItems;
- (id)allRecordKeys;
- (id)allRegularAndSectionAndRereferenceItems;
- (id)allRegularAndSectionAndRereferenceItemsWithRecordKey:(id)a0;
- (id)allRereferenceMMCSItems;
- (id)firstMMCSItemError;
- (id)firstMMCSSectionItemError;
- (BOOL)isAssetRecord;
- (BOOL)isEmptyOfRereferencesAssets;
- (BOOL)isPackageSectionRecord;

@end
