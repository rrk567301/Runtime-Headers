@class NSDate, PGManager, NSString, PGGraphUpdateJetsamIndicator, PGPhotoChangeToGraphChangeConverter, PGLibraryChangeListener, PGGraphUpdateManagerTargetTokenState, NSMutableSet, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, PGGraphUpdateHealthRecording;

@interface PGGraphUpdateManager : NSObject <PGLibraryChangeConsumer>

@property (retain, nonatomic) PGLibraryChangeListener *libraryChangeListener;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateQueue;
@property (retain, nonatomic) PGPhotoChangeToGraphChangeConverter *changeConverter;
@property (nonatomic) unsigned char processingState;
@property (retain, nonatomic) NSMutableArray *pendingChanges;
@property (nonatomic, getter=isListening) char listening;
@property (nonatomic) char stopRequested;
@property (retain, nonatomic) PGGraphUpdateManagerTargetTokenState *targetTokenState;
@property (readonly, nonatomic) NSMutableSet *listeners;
@property (readonly, nonatomic) PGGraphUpdateJetsamIndicator *jetsamIndicator;
@property (readonly, nonatomic) id<PGGraphUpdateHealthRecording> updateHealthRecorder;
@property (readonly, nonatomic) NSDate *dateSinceMajorUpgrade;
@property (readonly, nonatomic) char isConsistencyUpdate;
@property (readonly, nonatomic) PGManager *manager;
@property long long executionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)_startListening;
- (char)startListening;
- (void)stopListening;
- (void)removeListener:(id)a0;
- (void)addListener:(id)a0;
- (id)initWithGraphManager:(id)a0;
- (void)performFullRebuildWithProgressBlock:(id /* block */)a0 completionBlock:(id /* block */)a1;
- (char)_pauseListening;
- (void)_processRebuild;
- (id)_graphUpdateForPhotoChanges:(id)a0;
- (void)_notifyListeners:(id)a0 notificationType:(unsigned char)a1;
- (void)_notifyProgress:(double)a0;
- (void)_onEncounteredTargetToken;
- (void)_onFinishedProcessingChangesWithTokens:(id)a0;
- (void)_onStopRequestedWasListening:(char)a0;
- (char)_performEnrichmentWithGraphUpdateInventory:(id)a0 enrichmentContext:(unsigned long long)a1 progressBlock:(id /* block */)a2 error:(id *)a3;
- (void)_performRebuildWithGraphIngestRecipe:(id)a0 progressBlock:(id /* block */)a1 completionBlock:(id /* block */)a2;
- (void)_processPendingChanges;
- (void)_recordInformationFromDatabaseChange:(id)a0;
- (void)_recordInformationFromGraphChanges:(id)a0;
- (void)_recordNumberOfDaysSinceMajorOSUpgradeIfNeeded;
- (void)_signalGraphIsConsistentWithTokens:(id)a0;
- (id)_tokensForChanges:(id)a0;
- (void)_triggerFullRebuildDuringLiveUpdate:(char)a0 graphIngestRecipe:(id)a1 progressBlock:(id /* block */)a2 keepExistingGraph:(char)a3 completionBlock:(id /* block */)a4;
- (void)_triggerUpdateForGraphUpdate:(id)a0;
- (void)incrementalChangeNotAvailable;
- (void)libraryChangesAvailable:(id)a0;

@end
