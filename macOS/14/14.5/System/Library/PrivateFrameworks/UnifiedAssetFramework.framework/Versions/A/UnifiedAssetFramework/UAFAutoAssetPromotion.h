@class NSString, NSMutableSet, NSMutableDictionary;

@interface UAFAutoAssetPromotion : NSObject

@property (retain, nonatomic) NSString *assetSetName;
@property (retain, nonatomic) NSString *buildVersion;
@property (retain, nonatomic) NSString *latestAtomicInstance;
@property (retain, nonatomic) NSMutableSet *latestPromotedSpecifiers;
@property (retain, nonatomic) NSMutableDictionary *latestProvisionalSpecifiers;
@property (retain, nonatomic) NSMutableDictionary *promotedSpecifiers;

+ (BOOL)clear;
+ (id)buildVersion;
+ (id)_loadPromotionWithAssetSetName:(id)a0;
+ (id)buildVersionFromLockReason:(id)a0;
+ (id)cacheDirURL;
+ (id)getFormReason:(id)a0 atomicInstance:(id)a1;
+ (id)getLockReason:(id)a0;
+ (id)loadPromotionWithAssetSetName:(id)a0;
+ (id)loadPromotionWithAssetSetName:(id)a0 latestAtomicInstance:(id)a1;
+ (id)lockPrefix;
+ (BOOL)lockReasonFromPromotion:(id)a0;
+ (BOOL)lockReasonValid:(id)a0;
+ (id)saveFileURL:(id)a0;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)clear;
- (BOOL)save:(id *)a0;
- (id)encodeToDictionary;
- (id)initWithAssetSetName:(id)a0;
- (id)instanceForSpecifier:(id)a0;
- (BOOL)markSpecifiersPromoted:(id)a0 assetType:(id)a1 autoAssetSet:(id)a2 atomicInstance:(id)a3 error:(id *)a4;
- (BOOL)markSpecifiersProvisional:(id)a0 atomicInstance:(id)a1 error:(id *)a2;

@end
