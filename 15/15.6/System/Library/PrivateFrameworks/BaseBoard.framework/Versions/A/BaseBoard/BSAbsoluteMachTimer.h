@class NSString, BSDispatchTimer;

@interface BSAbsoluteMachTimer : NSObject <BSTimerScheduleQuerying, BSCancellable, BSInvalidatable> {
    BSDispatchTimer *_timer;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic, getter=isScheduled) char scheduled;
@property (readonly, nonatomic) double timeRemaining;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithIdentifier:(id)a0;
- (void)cancel;
- (void)scheduleRepeatingWithFireInterval:(double)a0 repeatInterval:(double)a1 leewayInterval:(double)a2 queue:(id)a3 handler:(id /* block */)a4;
- (void)scheduleWithFireInterval:(double)a0 leewayInterval:(double)a1 queue:(id)a2 handler:(id /* block */)a3;

@end
