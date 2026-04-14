@interface LACDTONotificationManager : NSObject

- (id)_ratchetCoolOffNotificationManager;
- (void)cancelPreviousSecurityDelayFinishedNotificationForPendingEvaluation:(id)a0 completion:(id /* block */)a1;
- (void)scheduleSecurityDelayFinishedNotificationForPendingEvaluation:(id)a0 after:(double)a1 maxAge:(double)a2 completion:(id /* block */)a3;

@end
