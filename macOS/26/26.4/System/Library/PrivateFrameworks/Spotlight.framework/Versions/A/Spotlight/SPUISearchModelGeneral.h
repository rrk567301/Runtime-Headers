@class NSObject, SPClientSession;
@protocol OS_dispatch_queue;

@interface SPUISearchModelGeneral : SPUISearchModel

@property (retain) SPClientSession *session;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;

- (BOOL)infinitePatience;
- (void)activate;
- (void)deactivate;
- (void)updateWithQueryContext:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setInfinitePatience:(BOOL)a0;

@end
