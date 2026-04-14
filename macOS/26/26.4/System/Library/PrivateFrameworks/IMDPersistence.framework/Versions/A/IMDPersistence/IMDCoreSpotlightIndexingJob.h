@class NSArray, CSDonationProgress, NSData, IMSpotlightClientState;

@interface IMDCoreSpotlightIndexingJob : IMDCoreSpotlightBaseIndexingJob

@property (nonatomic) unsigned long long deferredIndexingDepth;
@property (retain, nonatomic) NSArray *immediateSearchableItems;
@property (retain, nonatomic) NSArray *deferredSearchableItems;
@property (retain, nonatomic) CSDonationProgress *donationProgress;
@property (nonatomic) BOOL suppressClientStateManagerPrewarm;
@property (retain, nonatomic) NSData *previousClientStateData;
@property (retain, nonatomic) NSData *updatedClientStateData;
@property (retain, nonatomic) NSArray *searchableItems;
@property (retain, nonatomic) NSArray *rejectedItems;
@property (retain, nonatomic) NSArray *deletedItemIdentifiers;
@property (retain, nonatomic) IMSpotlightClientState *updatedClientState;

+ (id)_previousItems;
+ (id)_previousItemsLock;
+ (id)_redactedSearchableItemFromItem:(id)a0;
+ (void)_setPreviousItems:(id)a0;

- (void).cxx_destruct;
- (void)runWithCompletion:(id /* block */)a0;
- (void)_finishIndexing;
- (void)_beginIndexing;
- (void)_calculateDeferredSearchableItems;
- (BOOL)_consumeTapToRadarForClientStateMismatch;
- (void)_deleteItemsFromSpotlight;
- (void)_detectedClientStateMismatchWithError:(id)a0 completionBlock:(id /* block */)a1;
- (void)_detectedClientStateMismatchWithError:(id)a0 spotlightClientState:(id)a1 completionBlock:(id /* block */)a2;
- (void)_donateToSuggestions;
- (BOOL)_exceededRebuildCooldown;
- (void)_indexToSpotlight;
- (id)_itemsForClientStateTracing;
- (id)_lastDonationProgressRebuildDate;
- (void)_loadAndUpdateClientStateWithCompletionBlock:(id /* block */)a0;
- (id)_loadClientStateFromDefaults;
- (void)_loadClientStateWithCompletionBlock:(id /* block */)a0;
- (void)_loadDonationProgress;
- (id)_loadNewClientState;
- (void)_prewarmClientStateManagerWithCompletion:(id /* block */)a0;
- (double)_rebuildCooldownInterval;
- (void)_setLastDonationProgressRebuildDate:(id)a0;
- (BOOL)_shouldLoadDonationProgress;
- (BOOL)_shouldRebuildDonationProgress;
- (BOOL)_shouldTriggerTapToRadarForClientStateMismatch;
- (BOOL)_shouldWithdrawRejectionsFromSpotlight;
- (void)_startJob;
- (void)_stashItemsForClientStateTracing;
- (void)_withdrawRejectionsFromSpotlight;

@end
