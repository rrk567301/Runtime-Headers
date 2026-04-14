@class NSString, BSDispatchTimer;

@interface BSWallclockTimer : NSObject <BSTimerScheduleQuerying, BSCancellable, BSInvalidatable> {
    BSDispatchTimer *_timer;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic, getter=isScheduled) BOOL scheduled;
@property (readonly, nonatomic) double timeRemaining;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void)cancel;
- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)scheduleForDate:(id)a0 leewayInterval:(double)a1 queue:(id)a2 handler:(id /* block */)a3;

@end
