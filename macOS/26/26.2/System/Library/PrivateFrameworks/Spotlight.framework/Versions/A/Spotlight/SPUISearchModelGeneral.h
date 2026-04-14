@class NSObject, SPClientSession;
@protocol OS_dispatch_queue;

@interface SPUISearchModelGeneral : SPUISearchModel

@property (retain) SPClientSession *session;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;

- (BOOL)infinitePatience;
- (void)updateWithQueryContext:(id)a0;
- (void).cxx_destruct;
- (void)activate;
- (void)setInfinitePatience:(BOOL)a0;
- (id)init;
- (void)deactivate;

@end
