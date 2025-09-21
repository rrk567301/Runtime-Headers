@class NSObject, SKGJobContext, SpotlightGraph;
@protocol OS_dispatch_queue;

@interface SpotlightKnowledge : NSObject {
    SpotlightGraph *_spotlightGraph;
    SKGJobContext *_spotlightContext;
    NSObject<OS_dispatch_queue> *_testingGraphQueue;
}

+ (void)initialize;
+ (BOOL)processLegacyPipelinesReportWithCancelBlock:(id /* block */)a0;
+ (void)runWithJobContext:(id)a0 group:(id)a1 delegate:(id)a2;
+ (void)runWithJobContext:(id)a0 queue:(id)a1 group:(id)a2 progressBlock:(id /* block */)a3 checkpointBlock:(id /* block */)a4 completeBlock:(id /* block */)a5 cancelBlock:(id /* block */)a6 deferBlock:(id /* block */)a7;

- (void).cxx_destruct;
- (id)timerWithBlock:(id /* block */)a0;
- (BOOL)loadGraphWithGroup:(id)a0 cancelBlock:(id /* block */)a1;
- (BOOL)addProcessedItem:(id)a0 cancelBlock:(id /* block */)a1;
- (BOOL)addProcessedPerson:(id)a0 group:(id)a1 cancelBlock:(id /* block */)a2;
- (BOOL)analyzeGraphWithCancelBlock:(id /* block */)a0;
- (BOOL)canProcessItemAttributes:(id)a0 bundleIdentifier:(id)a1 protectionClass:(id)a2;
- (id)coreSpotlightIndexWithBundleIdentifier:(id)a0 protectionClass:(id)a1;
- (id)coreSpotlightItemWithAttributes:(id)a0 referenceIdentifier:(id)a1 bundleIdentifier:(id)a2;
- (BOOL)flushGraphWithGroup:(id)a0 cancelBlock:(id /* block */)a1;
- (BOOL)graphNeedsAnalysis;
- (id)initWithJobContext:(id)a0;
- (id)peopleAttributesWithProcessedItem:(id)a0;
- (BOOL)processAttributesWithJobContext:(id)a0 group:(id)a1 cancelBlock:(id /* block */)a2;
- (BOOL)processCSArchivesWithGroup:(id)a0 protectionClasses:(id)a1 shouldRemove:(BOOL)a2 archiverNextPathBlock:(id /* block */)a3 processedPathBlock:(id /* block */)a4 processedItemsBlock:(id /* block */)a5 errorLogBlock:(id /* block */)a6 cancelBlock:(id /* block */)a7;
- (BOOL)processCSJournalsWithGroup:(id)a0 protectionClasses:(id)a1 includeEmbeddings:(BOOL)a2 includeKeyphrases:(BOOL)a3 shouldRemove:(BOOL)a4 readerNextPathBlock:(id /* block */)a5 deletedReferencesBlock:(id /* block */)a6 processedPathBlock:(id /* block */)a7 processedItemsBlock:(id /* block */)a8 errorLogBlock:(id /* block */)a9 cancelBlock:(id /* block */)a10;
- (BOOL)processDeletesWithJobContext:(id)a0 group:(id)a1 cancelBlock:(id /* block */)a2;
- (BOOL)processDocumentUnderstandingReportWithJobContext:(id)a0 cancelBlock:(id /* block */)a1;
- (BOOL)processEmbeddingsReportWithJobContext:(id)a0 progressBlock:(id /* block */)a1 checkpointBlock:(id /* block */)a2 cancelBlock:(id /* block */)a3;
- (BOOL)processGraphWithGroup:(id)a0 cancelBlock:(id /* block */)a1;
- (BOOL)processPeopleWithGroup:(id)a0 cancelBlock:(id /* block */)a1;
- (BOOL)processSuggestedEventsReportWithJobContext:(id)a0 cancelBlock:(id /* block */)a1;
- (BOOL)processTextWithJobContext:(id)a0 group:(id)a1 cancelBlock:(id /* block */)a2;
- (BOOL)removeGraphEntitiesWithCancelBlock:(id /* block */)a0;
- (BOOL)removeGraphPeopleWithCancelBlock:(id /* block */)a0;
- (BOOL)removeReferences:(id)a0 bundleIdentifier:(id)a1 cancelBlock:(id /* block */)a2;
- (void)runWithGroup:(id)a0 delegate:(id)a1;
- (void)runWithQueue:(id)a0 group:(id)a1 progressBlock:(id /* block */)a2 checkpointBlock:(id /* block */)a3 completeBlock:(id /* block */)a4 cancelBlock:(id /* block */)a5 deferBlock:(id /* block */)a6;
- (BOOL)scoreGraphWithCancelBlock:(id /* block */)a0;
- (void)sendAnalytics;
- (id)spotlightContext;
- (id)spotlightGraph;
- (BOOL)spotlightGraphAvailable;
- (void)unloadGraphWithGroup:(id)a0 cancelBlock:(id /* block */)a1;
- (void)updateCoreSpotlightWithItems:(id)a0 index:(id)a1 group:(id)a2 cancelBlock:(id /* block */)a3;
- (BOOL)updateSpotlightContactsWithJobContext:(id)a0 group:(id)a1 cancelBlock:(id /* block */)a2;

@end
