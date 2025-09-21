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

- (id)init;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (void)handleSigterm;
- (id)layoutForLastStalenessRotation:(id)a0;
- (id)_blendingCacheIdToStackIdMap:(id)a0;
- (void)_persistInternalStateImmediatelyOnSigterm;
- (void)cleanupOldDataWithHomeScreenPages:(id)a0;
- (void)coalescedPersistInternalState;
- (id)dataFromDisk;
- (id)initTrackerInDirectory:(id)a0;
- (id)lastStackRotationEvent:(id)a0;
- (char)lastStackRotationWasALongTimeAgoForStackId:(id)a0;
- (id)lastStackShownEvent:(id)a0;
- (char)lastStalenessRotationWasALongTimeAgoForStackId:(id)a0;
- (id)lastThreeUserVisitDatesOfPage:(unsigned long long)a0;
- (id)lastUserScrollStackRotationEvent:(id)a0;
- (char)lastUserScrollWasALongTimeAgoForStackId:(id)a0;
- (char)loadInternalState;
- (char)mostRecentRotationOfStackIsSystemInitiated:(id)a0;
- (char)persistInternalState;
- (void)setLayoutForLastStalenessRotation:(id)a0 stackId:(id)a1 date:(id)a2;
- (id)stackCreationEvent:(id)a0;
- (char)stackIsStale:(id)a0;
- (id)stackStateForStackId:(id)a0;
- (char)stackWasCreatedALongTimeAgo:(id)a0;
- (id)topWidgetUniqueIdOfStack:(id)a0;
- (void)updateStackRotationEvents;
- (void)updateStackRotationEventsByQueryingBiome;

@end
