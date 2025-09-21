@class _OSLastLockPredictionClient, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface SUOSULastLockActionScheduler : NSObject

@property (readonly) _OSLastLockPredictionClient *client;
@property (copy) id /* block */ action;
@property (retain) NSObject<OS_dispatch_source> *requeryTimer;
@property (readonly) NSObject<OS_dispatch_queue> *queryQueue;
@property (readonly) unsigned long long queryIntervalInNanoseconds;

- (id)init;
- (void)disarm;
- (void).cxx_destruct;
- (BOOL)isArmed;
- (void)_queryPredictor;
- (void)_startPredicting;
- (void)armWithBlock:(id /* block */)a0;
- (id)initWithClient:(id)a0 queryIntervalInNanoseconds:(unsigned long long)a1;

@end
