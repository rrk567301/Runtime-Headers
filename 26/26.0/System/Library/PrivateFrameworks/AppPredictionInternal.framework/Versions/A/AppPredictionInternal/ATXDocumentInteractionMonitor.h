@class BPSSink, BMBiomeScheduler, _ATXAppLaunchHistogramManager, NSObject;
@protocol OS_dispatch_queue;

@interface ATXDocumentInteractionMonitor : NSObject {
    _ATXAppLaunchHistogramManager *_appLaunchHistogramManager;
    NSObject<OS_dispatch_queue> *_queue;
    BMBiomeScheduler *_docInteractionScheduler;
    BPSSink *_docInteractionSink;
    BOOL _canceled;
}

- (void)dealloc;
- (void)cancel;
- (id)initWithAppLaunchHistogramManager:(id)a0;
- (void)activate;
- (void).cxx_destruct;
- (id)_convertScoredDocumentsVectorToKeyArray:(void *)a0 maxItems:(unsigned long long)a1;
- (id)_getATXDocumentInteractionFromBMEvent:(id)a0;
- (unsigned long long)_getItemOutcomeGivenEventKey:(id)a0 predictedItemKey:(id)a1 sessionOutcome:(unsigned long long)a2;
- (unsigned long long)_getSessionOutcomeGivenEventKey:(id)a0 predictedDocuments:(id)a1;
- (void)_harvestDocumentPredictionDataForDocumentOpen:(id)a0 context:(id)a1;
- (void)_listenToDocumentStream;
- (void)_updateDocumentInteractionHistogramsForEvent:(id)a0 context:(id)a1;

@end
