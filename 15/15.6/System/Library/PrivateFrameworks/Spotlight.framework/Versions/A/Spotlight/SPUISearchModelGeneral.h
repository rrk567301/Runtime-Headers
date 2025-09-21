@class NSObject, SPClientSession;
@protocol OS_dispatch_queue;

@interface SPUISearchModelGeneral : SPUISearchModel

@property (retain) SPClientSession *session;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;

- (id)init;
- (void).cxx_destruct;
- (void)activate;
- (void)deactivate;
- (char)infinitePatience;
- (void)setInfinitePatience:(char)a0;
- (void)updateWithQueryContext:(id)a0;

@end
