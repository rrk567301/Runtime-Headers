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

- (id)initTrackerInDirectory:(id)a0;
- (BOOL)loadInternalState;
- (BOOL)persistInternalState;
- (id)dataFromDisk;
- (void)cleanupOldDataWithHomeScreenPages:(id)a0;
- (BOOL)lastUserScrollWasALongTimeAgoForStackId:(id)a0;
- (void)setLayoutForLastStalenessRotation:(id)a0 stackId:(id)a1 date:(id)a2;
- (void)updateStackRotationEvents;
- (BOOL)mostRecentRotationOfStackIsSystemInitiated:(id)a0;
- (BOOL)stackIsStale:(id)a0;
- (BOOL)lastStalenessRotationWasALongTimeAgoForStackId:(id)a0;
- (id)stackCreationEvent:(id)a0;
- (BOOL)stackWasCreatedALongTimeAgo:(id)a0;
- (void)updateStackRotationEventsByQueryingBiome;
- (id)jsonRepresentation;
- (void)coalescedPersistInternalState;
- (id)lastThreeUserVisitDatesOfPage:(unsigned long long)a0;
- (id)lastStackShownEvent:(id)a0;
- (id)lastUserScrollStackRotationEvent:(id)a0;
- (id)stackStateForStackId:(id)a0;
- (BOOL)lastStackRotationWasALongTimeAgoForStackId:(id)a0;
- (void).cxx_destruct;
- (id)lastStackRotationEvent:(id)a0;
- (id)layoutForLastStalenessRotation:(id)a0;
- (void)_persistInternalStateImmediatelyOnSigterm;
- (void)handleSigterm;
- (id)_blendingCacheIdToStackIdMap:(id)a0;
- (id)topWidgetUniqueIdOfStack:(id)a0;
- (id)init;

@end
