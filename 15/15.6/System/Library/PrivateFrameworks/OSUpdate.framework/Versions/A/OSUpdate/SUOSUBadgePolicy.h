@class NSArray, NSMutableDictionary, SUOSUUpdateController;

@interface SUOSUBadgePolicy : NSObject

@property (retain) NSMutableDictionary *downloadStateByProductKey;
@property (retain) SUOSUUpdateController *updateController;
@property (retain) NSArray *msuProducts;
@property (retain) NSArray *legacyProductKeys;
@property (retain) NSArray *externalProducts;
@property (retain) NSArray *seenProductKeys;
@property (retain) NSArray *adminDeferredProductKeys;
@property char installTonightArmed;
@property char doesBackgroundDownload;

+ (id)currentPolicy;

- (id)init;
- (void).cxx_destruct;
- (char)shouldBadge;
- (void)_loadCurrentPolicy;
- (id)_primaryMSUProduct;
- (id)_productKeysToConsider;
- (id)_recommendedLegacyUpdates;

@end
