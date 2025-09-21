@class NSUUID, NSObject, LACAnalyticsSession;
@protocol OS_dispatch_queue;

@interface LACAnalyticsSessionXPCHost : NSObject <LACAnalyticsSessionXPC> {
    NSObject<OS_dispatch_queue> *_workQueue;
    BOOL _connected;
}

@property (readonly, nonatomic) NSUUID *contextUUID;
@property (readonly, nonatomic) LACAnalyticsSession *session;

- (void).cxx_destruct;
- (BOOL)_checkQueueAndSessionWithAction:(id)a0 replyOnFailure:(id /* block */)a1;
- (void)authenticationAction:(long long)a0 failing:(BOOL)a1 reply:(id /* block */)a2;
- (void)authenticationAttemptFailedForEvent:(long long)a0 reply:(id /* block */)a1;
- (void)authenticationStartedForEvent:(long long)a0 reply:(id /* block */)a1;
- (void)authenticationSuccessfulForEvent:(long long)a0 reply:(id /* block */)a1;
- (void)finishWithReply:(id /* block */)a0;
- (id)initWithSession:(id)a0 contextUUID:(id)a1 connected:(BOOL)a2 workQueue:(id)a3;
- (void)updateContextUUID:(id)a0 reply:(id /* block */)a1;

@end
