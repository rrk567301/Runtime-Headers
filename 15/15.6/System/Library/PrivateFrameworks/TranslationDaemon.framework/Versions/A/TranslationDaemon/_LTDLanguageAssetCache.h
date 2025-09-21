@class NSSet, NSMutableDictionary, NSArray;

@interface _LTDLanguageAssetCache : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSArray *_lastObservationsSorted;
    NSArray *_lastIndeterminateObservationsSorted;
    NSMutableDictionary *_observers;
}

@property (readonly, nonatomic) NSMutableDictionary *cache;
@property (readonly, nonatomic) NSSet *requiredAssetIdentifiers;
@property (nonatomic) unsigned long long readyFilterSet;
@property (readonly, nonatomic) char isReadyForAllFilters;

+ (id)shared;
+ (id)_normalizeAndSortUpdatesFromObservations:(id)a0 toObservations:(id)a1;
+ (id)_normalizeUpdateFromObservation:(id)a0 toObservation:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)reset;
- (id)assetForIdentifier:(id)a0;
- (id)_availableIdentifiers;
- (char)_isReadyForObservers;
- (void)_multicastObservers;
- (id)_readAllAssets;
- (void)applyAssetUpdates:(id)a0;
- (char)applyProgressUpdateForAsset:(id)a0;
- (id)assetsFilteredUsing:(unsigned long long)a0;
- (char)isReadyForFilter:(unsigned long long)a0;
- (void)markReadyForFilter:(unsigned long long)a0;
- (id)preheatWithLanguages:(id)a0;
- (void)removeObserverForID:(id)a0;
- (void)setRequiredAssets:(id)a0;

@end
