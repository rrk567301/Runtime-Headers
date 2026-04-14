@class NSString, NSDictionary, _PASSimpleCoalescingTimer, ATXSigtermListener, NSObject, _PASLock;
@protocol OS_os_transaction, OS_dispatch_queue;

@interface ATXStackStateTracker : NSObject <ATXSigtermObserver> {
    NSObject<OS_os_transaction> *_transaction;
    NSObject<OS_dispatch_queue> *_queue;
    _PASSimpleCoalescingTimer *_coalescedPersistInternalStateOperation;
    _PASLock *_internalStateLock;
    NSString *_path;
    ATXSigtermListener *_sigtermListener;
}

@property (retain, nonatomic) NSDictionary *currentSuggestionsWidgetLayouts;
@property (retain, nonatomic) NSDictionary *currentAppPredictionPanelLayouts;

+ (id)sharedInstance;

- (BOOL)loadInternalState;
- (BOOL)persistInternalState;
- (id)lastStackRotationEvent:(id)a0;
- (BOOL)mostRecentRotationOfStackIsSystemInitiated:(id)a0;
- (void)updateStackRotationEventsByQueryingBiome;
- (id)init;
- (id)_blendingCacheIdToStackIdMap:(id)a0;
- (void)cleanupOldDataWithHomeScreenPages:(id)a0;
- (void)handleSigterm;
- (BOOL)lastUserScrollWasALongTimeAgoForStackId:(id)a0;
- (void)coalescedPersistInternalState;
- (id)topWidgetUniqueIdOfStack:(id)a0;
- (id)initTrackerInDirectory:(id)a0;
- (void).cxx_destruct;
- (void)setLayoutForLastStalenessRotation:(id)a0 stackId:(id)a1 date:(id)a2;
- (void)updateStackRotationEvents;
- (id)stackStateForStackId:(id)a0;
- (BOOL)lastStalenessRotationWasALongTimeAgoForStackId:(id)a0;
- (id)layoutForLastStalenessRotation:(id)a0;
- (id)jsonRepresentation;
- (id)lastUserScrollStackRotationEvent:(id)a0;
- (void)_persistInternalStateImmediatelyOnSigterm;
- (id)stackCreationEvent:(id)a0;
- (id)dataFromDisk;
- (BOOL)stackIsStale:(id)a0;
- (BOOL)stackWasCreatedALongTimeAgo:(id)a0;
- (id)lastStackShownEvent:(id)a0;
- (BOOL)lastStackRotationWasALongTimeAgoForStackId:(id)a0;
- (id)lastThreeUserVisitDatesOfPage:(unsigned long long)a0;

@end
