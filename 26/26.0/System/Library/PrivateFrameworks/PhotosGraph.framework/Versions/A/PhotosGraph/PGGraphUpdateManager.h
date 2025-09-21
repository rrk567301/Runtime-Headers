@class PGGraphUpdateJetsamIndicator, PGManager, NSObject;
@protocol OS_dispatch_queue;

@interface PGGraphUpdateManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateQueue;
@property (nonatomic) unsigned char processingState;
@property (nonatomic) BOOL stopRequested;
@property (readonly, nonatomic) PGGraphUpdateJetsamIndicator *jetsamIndicator;
@property (readonly, nonatomic) PGManager *manager;
@property long long executionContext;

- (id)description;
- (void).cxx_destruct;
- (id)initWithGraphManager:(id)a0;
- (void)performFullRebuildWithProgressBlock:(id /* block */)a0 completionBlock:(id /* block */)a1;
- (void)_processRebuild;
- (void)_onStopRequestedWasListening:(BOOL)a0;
- (BOOL)_performEnrichmentWithGraphUpdateInventory:(id)a0 enrichmentContext:(unsigned long long)a1 progressBlock:(id /* block */)a2 error:(id *)a3;
- (void)_performRebuildWithGraphIngestRecipe:(id)a0 progressBlock:(id /* block */)a1 completionBlock:(id /* block */)a2;
- (void)_triggerFullRebuildDuringLiveUpdate:(BOOL)a0 graphIngestRecipe:(id)a1 progressBlock:(id /* block */)a2 keepExistingGraph:(BOOL)a3 completionBlock:(id /* block */)a4;
- (void)_triggerUpdateForGraphUpdate:(id)a0;
- (BOOL)isConsistencyUpdate;

@end
