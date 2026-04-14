@class NSPointerArray, NSObject;
@protocol OS_dispatch_queue;

@interface LACAnalyticsServiceXPCHost : NSObject <LACAnalyticsServiceXPC> {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSPointerArray *_sessions;
}

- (void).cxx_destruct;
- (id)initWithWorkQueue:(id)a0;
- (void)connectSessionForContext:(id)a0 reply:(id /* block */)a1;
- (id)sessionForContextUUID:(id)a0;
- (void)startSessionForContext:(id)a0 dialogID:(id)a1 bundleID:(id)a2 reply:(id /* block */)a3;

@end
