@class NSDictionary, NSMutableSet, NSMapTable;

@interface HMDHAPAccessoryParallelTask : HMDHAPAccessoryParallelTaskBase

@property (nonatomic) BOOL localTaskComplete;
@property (nonatomic) BOOL remoteTaskComplete;
@property (nonatomic) BOOL calledFinalCompletion;
@property (retain, nonatomic) NSMutableSet *requestsSentInMultipart;
@property (retain) NSDictionary *logEvents;
@property (retain, nonatomic) NSMapTable *localResponses;
@property (retain, nonatomic) NSMapTable *remoteResponses;

- (void)execute;
- (void).cxx_destruct;
- (id /* block */)completion;
- (id /* block */)_completionHandlerForRemote:(BOOL)a0;
- (void)_submitDeferredMetrics;
- (void)addCharacteristicResponses:(id)a0 isRemote:(BOOL)a1;
- (BOOL)bothTasksComplete;
- (void)finishTaskWithCharacteristicResponses:(id)a0 completion:(id /* block */)a1;
- (id)initWithContext:(id)a0 requests:(id)a1 delegateDevice:(id)a2 completion:(id /* block */)a3;

@end
