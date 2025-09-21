@class NSSet, NSMutableDictionary, NSDictionary, NSArray;
@protocol _LTObservationFilteringConditions;

@interface _LTDLanguageAssetCache : NSObject <_LTObservationFilteringConditions> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSDictionary *_localeRanks;
    NSArray *_lastObservationsSorted;
    NSArray *_lastIndeterminateObservationsSorted;
    NSMutableDictionary *_observers;
}

@property (readonly, nonatomic) NSMutableDictionary *cache;
@property (readonly, nonatomic) NSSet *requiredAssetIdentifiers;
@property (nonatomic) unsigned long long readyFilterSet;
@property (weak, nonatomic) id<_LTObservationFilteringConditions> observationFilterConditions;
@property (readonly, nonatomic) BOOL isReadyForAllFilters;

+ (id)shared;
+ (id)_normalizeAndSortUpdatesFromObservations:(id)a0 toObservations:(id)a1;
+ (id)_normalizeUpdateFromObservation:(id)a0 toObservation:(id)a1;

- (void)reset;
- (id)init;
- (void)addObserver:(id)a0;
- (void).cxx_destruct;
- (id)assetForIdentifier:(id)a0;
- (id)_availableIdentifiers;
- (BOOL)_isReadyForObservers;
- (id)_readAllAssets;
- (void)applyAssetUpdates:(id)a0;
- (BOOL)applyProgressUpdateForAsset:(id)a0;
- (id)assetsFilteredUsing:(unsigned long long)a0;
- (BOOL)isReadyForFilter:(unsigned long long)a0;
- (void)markReadyForFilter:(unsigned long long)a0;
- (void)multicastObservers;
- (void)notify:(id)a0 ofObservations:(id)a1;
- (id)preheatWithLanguages:(id)a0;
- (void)removeObserverForID:(id)a0;
- (void)setInitialObservationsForIdentifiers:(id)a0;
- (void)setRequiredAssets:(id)a0 localeRanks:(id)a1;
- (id)supportedLocalesSubsetForTask:(long long)a0;

@end
