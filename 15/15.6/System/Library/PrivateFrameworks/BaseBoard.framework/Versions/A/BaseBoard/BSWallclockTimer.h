@class NSString, BSDispatchTimer;

@interface BSWallclockTimer : NSObject <BSTimerScheduleQuerying, BSCancellable, BSInvalidatable> {
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
- (void)scheduleForDate:(id)a0 leewayInterval:(double)a1 queue:(id)a2 handler:(id /* block */)a3;

@end
