@class NSObject, SPClientSession;
@protocol OS_dispatch_queue;

@interface SPUISearchModelGeneral : SPUISearchModel

@property (retain) SPClientSession *session;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;

- (void)deactivate;
- (void)activate;
- (BOOL)infinitePatience;
- (void).cxx_destruct;
- (void)setInfinitePatience:(BOOL)a0;
- (void)updateWithQueryContext:(id)a0;
- (id)init;

@end
