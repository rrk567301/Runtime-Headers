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

- (void)setLayoutForLastStalenessRotation:(id)a0 stackId:(id)a1 date:(id)a2;
- (void)_persistInternalStateImmediatelyOnSigterm;
- (void)coalescedPersistInternalState;
- (id)_blendingCacheIdToStackIdMap:(id)a0;
- (void)cleanupOldDataWithHomeScreenPages:(id)a0;
- (BOOL)lastStackRotationWasALongTimeAgoForStackId:(id)a0;
- (BOOL)stackWasCreatedALongTimeAgo:(id)a0;
- (id)dataFromDisk;
- (void).cxx_destruct;
- (BOOL)persistInternalState;
- (BOOL)lastStalenessRotationWasALongTimeAgoForStackId:(id)a0;
- (BOOL)lastUserScrollWasALongTimeAgoForStackId:(id)a0;
- (id)lastStackRotationEvent:(id)a0;
- (id)initTrackerInDirectory:(id)a0;
- (BOOL)loadInternalState;
- (BOOL)stackIsStale:(id)a0;
- (id)stackStateForStackId:(id)a0;
- (id)lastStackShownEvent:(id)a0;
- (void)updateStackRotationEvents;
- (BOOL)mostRecentRotationOfStackIsSystemInitiated:(id)a0;
- (void)updateStackRotationEventsByQueryingBiome;
- (id)jsonRepresentation;
- (id)stackCreationEvent:(id)a0;
- (id)init;
- (id)layoutForLastStalenessRotation:(id)a0;
- (id)lastThreeUserVisitDatesOfPage:(unsigned long long)a0;
- (id)lastUserScrollStackRotationEvent:(id)a0;
- (id)topWidgetUniqueIdOfStack:(id)a0;
- (void)handleSigterm;

@end
