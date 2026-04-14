@class NSString, CHRecognitionSession, CHRecognitionSessionResult, NSObject;
@protocol OS_dispatch_queue, CHStrokeProviderVersion, CHQueryDelegate;

@interface CHQuery : NSObject <CHRecognitionSessionObserver> {
    NSObject<OS_dispatch_queue> *_processingQueue;
    CHRecognitionSessionResult *_currentProcessingSessionResult;
    double _lastProcessedTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (readonly, nonatomic) NSString *debugName;
@property (nonatomic) BOOL _queryActive;
@property (copy) id<CHStrokeProviderVersion> lastProcessedStrokeProviderVersion;
@property (weak, nonatomic) id<CHQueryDelegate> delegate;
@property (readonly, nonatomic) CHRecognitionSession *recognitionSession;
@property (nonatomic) double preferredUpdatesInterval;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)pause;
- (void)start;
- (void)q_updateQueryResult;
- (id)initWithRecognitionSession:(id)a0;
- (void)recognitionSessionDidUpdateRecognitionResult:(id)a0;
- (double)preferredRecognitionResultUpdatesInterval;
- (void)waitForPendingUpdates;
- (void)_updateForRecognitionSessionResultChangeIfNeeded;
- (void)q_setNeedsQueryResultUpdating;
- (void)q_queryResultDidChange;
- (id)q_sessionResult;

@end
