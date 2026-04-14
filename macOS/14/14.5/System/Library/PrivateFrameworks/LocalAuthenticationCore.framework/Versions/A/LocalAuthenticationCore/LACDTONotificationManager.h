@class NSObject;
@protocol OS_dispatch_queue, LACDTONotificationFactory;

@interface LACDTONotificationManager : NSObject {
    NSObject<OS_dispatch_queue> *_replyQueue;
    id<LACDTONotificationFactory> _notificationFactory;
}

- (void).cxx_destruct;
- (id)_securityDelayEndedManager;
- (void)cancelPreviousSecurityDelayFinishedNotificationForPendingEvaluation:(id)a0 completion:(id /* block */)a1;
- (id)initWithReplyQueue:(id)a0;
- (id)initWithReplyQueue:(id)a0 notificationFactory:(id)a1;
- (void)scheduleSecurityDelayFinishedNotificationForPendingEvaluation:(id)a0 after:(double)a1 maxAge:(double)a2 completion:(id /* block */)a3;

@end
