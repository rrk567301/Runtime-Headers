@class NSArray, NSMutableDictionary, SUOSUUpdateController, NSDictionary;

@interface SUOSUBadgePolicy : NSObject

@property (retain) NSMutableDictionary *downloadStateByProductKey;
@property (retain) SUOSUUpdateController *updateController;
@property (retain) NSArray *msuProducts;
@property (retain) NSArray *legacyProductKeys;
@property (retain) NSArray *externalProducts;
@property (retain) NSArray *seenProductKeys;
@property (retain) NSArray *adminDeferredProductKeys;
@property (retain) NSDictionary *firstOfferDatesByProductKey;
@property BOOL installTonightArmed;
@property BOOL doesBackgroundDownload;
@property BOOL splatEnabled;

+ (id)currentPolicy;

- (id)init;
- (void).cxx_destruct;
- (void)_loadCurrentPolicy;
- (id)_primaryMSUProduct;
- (id)_productKeysToConsider;
- (id)_recommendedLegacyUpdates;
- (BOOL)shouldBadge:(unsigned long long *)a0;

@end
