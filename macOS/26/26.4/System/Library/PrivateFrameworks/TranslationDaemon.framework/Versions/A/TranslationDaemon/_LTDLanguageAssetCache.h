@class NSSet, NSMutableDictionary, NSString, NSDictionary, NSArray, _LTDLLMBasedTranslationStatus;
@protocol _LTObservationFilteringConditions;

@interface _LTDLanguageAssetCache : NSObject <_LTDLLMBasedTranslationStatusDelegate, _LTObservationFilteringConditions> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSDictionary *_localeRanks;
    NSArray *_lastObservationsSorted;
    NSArray *_lastIndeterminateObservationsSorted;
    NSMutableDictionary *_observers;
    _LTDLLMBasedTranslationStatus *_llmStatus;
}

@property (readonly, nonatomic) NSMutableDictionary *cache;
@property (readonly, nonatomic) NSSet *requiredAssetIdentifiers;
@property (nonatomic) unsigned long long readyFilterSet;
@property (weak, nonatomic) id<_LTObservationFilteringConditions> observationFilterConditions;
@property (readonly, nonatomic) BOOL isReadyForAllFilters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;
+ (id)_normalizeAndSortUpdatesFromObservations:(id)a0 toObservations:(id)a1;

- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)reset;
- (id)init;
- (id)assetForIdentifier:(id)a0;
- (id)_makeIndeterminateObservations:(id)a0;
- (id)_availableIdentifiers;
- (BOOL)_isReadyForObservers;
- (id)_mergeObservation:(id)a0 withObservation:(id)a1;
- (id)_readAllAssets;
- (void)applyAssetUpdates:(id)a0;
- (BOOL)applyProgressUpdateForAsset:(id)a0;
- (id)assetsFilteredUsing:(unsigned long long)a0;
- (BOOL)isReadyForFilter:(unsigned long long)a0;
- (void)llmStatusDidChange:(id)a0;
- (void)markReadyForFilter:(unsigned long long)a0;
- (void)multicastObservers;
- (void)notify:(id)a0 ofObservations:(id)a1;
- (id)preheatWithLanguages:(id)a0;
- (void)removeObserverForID:(id)a0;
- (void)setInitialObservationsForIdentifiers:(id)a0;
- (void)setRequiredAssets:(id)a0 localeRanks:(id)a1;
- (id)supportedLocalesSubsetForTask:(long long)a0;

@end
