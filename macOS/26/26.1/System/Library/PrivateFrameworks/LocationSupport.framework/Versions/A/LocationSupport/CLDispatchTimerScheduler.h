@class CLTimer, NSObject;
@protocol OS_dispatch_source;

@interface CLDispatchTimerScheduler : NSObject <CLTimerScheduler>

@property (retain, nonatomic) NSObject<OS_dispatch_source> *source;
@property (weak, nonatomic) CLTimer *timer;

- (id)initWithDispatchSilo:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)reflectNextFireDelay:(double)a0 fireInterval:(double)a1;

@end
