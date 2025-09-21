@class NSObject;
@protocol OS_dispatch_queue;

@interface CMActivityAlarm : NSObject {
    char fIsValid;
    struct __CFRunLoop { } *fRunLoop;
    NSObject<OS_dispatch_queue> *fQueue;
    id /* block */ fHandler;
}

@property (nonatomic) double duration;
@property (nonatomic) unsigned int trigger;
@property (nonatomic) double activityDuration;

+ (char)activityAlarmAvailable;
+ (id)activityAlarmInfo;

- (void)dealloc;
- (char)isValid;
- (void)fire;
- (void)invalidate;
- (id)initWithTrigger:(unsigned int)a0 duration:(double)a1 onQueue:(id)a2 withHandler:(id /* block */)a3;
- (id)initWithTrigger:(unsigned int)a0 duration:(double)a1 onRunLoop:(struct __CFRunLoop { } *)a2 withHandler:(id /* block */)a3;

@end
