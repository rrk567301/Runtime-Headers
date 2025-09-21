@class NSString, NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface IMTimer : NSObject {
    id _timer;
    id _target;
    NSString *_name;
    double _timeInterval;
    NSObject<OS_dispatch_queue> *_queue;
    SEL _selector;
    char _wakeDevice;
    char _useCurrentRunLoop;
}

@property (retain, nonatomic) id userInfo;
@property (readonly, retain, nonatomic) NSDate *fireDate;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)_initWithTimeInterval:(double)a0 name:(id)a1 shouldWake:(char)a2 target:(id)a3 selector:(SEL)a4 userInfo:(id)a5 useCurrentRunLoop:(char)a6 queue:(id)a7;
- (void)_reschedulePCPersistentTimer;
- (id)initWithTimeInterval:(double)a0 name:(id)a1 shouldWake:(char)a2 target:(id)a3 selector:(SEL)a4 userInfo:(id)a5;
- (id)initWithTimeInterval:(double)a0 name:(id)a1 shouldWake:(char)a2 target:(id)a3 selector:(SEL)a4 userInfo:(id)a5 queue:(id)a6;
- (id)initWithTimeInterval:(double)a0 name:(id)a1 shouldWake:(char)a2 target:(id)a3 selector:(SEL)a4 userInfo:(id)a5 useCurrentRunLoop:(char)a6;
- (void)setFireTimeInterval:(double)a0;

@end
