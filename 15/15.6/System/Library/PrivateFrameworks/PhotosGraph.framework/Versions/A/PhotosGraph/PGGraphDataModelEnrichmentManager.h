@class NSArray, PGManager, CLSCurationContext;
@protocol PGGraphDataModelEnrichmentManagerDelegate;

@interface PGGraphDataModelEnrichmentManager : NSObject

@property (class, readonly, nonatomic) NSArray *lightWeightEnrichmentProcessors;

@property (readonly, nonatomic) PGManager *manager;
@property (readonly, nonatomic) CLSCurationContext *curationContext;
@property (weak, nonatomic) id<PGGraphDataModelEnrichmentManagerDelegate> delegate;
@property (readonly, nonatomic) NSArray *enrichmentProcessors;
@property (readonly, nonatomic) unsigned long long enrichmentContext;
@property (nonatomic) char forceRun;

+ (id)_allEnrichmentProcessorsWithTailorOptions:(unsigned long long)a0;
+ (id)backgroundEnrichmentProcessors;
+ (id)enrichmentProcessorsForDataModelEnrichmentContext:(unsigned long long)a0;
+ (id)liveUpdateEnrichmentProcessors;

- (void).cxx_destruct;
- (char)enrichDataModelForHighlightUUIDs:(id)a0 withError:(id *)a1 progressBlock:(id /* block */)a2;
- (char)enrichDataModelWithError:(id *)a0 progressBlock:(id /* block */)a1;
- (char)enrichDataModelWithGraphUpdateInventory:(id)a0 error:(id *)a1 progressBlock:(id /* block */)a2;
- (id)initWithManager:(id)a0 enrichmentProcessors:(id)a1;
- (char)_enrichDataModelWithGraphUpdateInventory:(id)a0 error:(id *)a1 progressBlock:(id /* block */)a2;
- (id)initWithManager:(id)a0 enrichmentContext:(unsigned long long)a1;

@end
