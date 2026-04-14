@class NSObject, SPClientSession;
@protocol OS_dispatch_queue;

@interface SPUISearchModelGeneral : SPUISearchModel

@property (retain) SPClientSession *session;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;

- (BOOL)infinitePatience;
- (void)setInfinitePatience:(BOOL)a0;
- (void)updateWithQueryContext:(id)a0;
- (id)init;
- (void)deactivate;
- (void)activate;
- (void).cxx_destruct;

@end
