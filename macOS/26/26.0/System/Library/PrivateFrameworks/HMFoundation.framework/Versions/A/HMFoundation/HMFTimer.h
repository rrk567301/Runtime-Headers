@class NSDate, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue, HMFTimerDelegate;

@interface HMFTimer : HMFObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned int _options;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_timerQueue;
    long long _leeway;
    long long _state;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (weak) id<HMFTimerDelegate> delegate;
@property (retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, nonatomic) double timeInterval;
@property (readonly, nonatomic) unsigned long long leeway;
@property (readonly, getter=isRunning) BOOL running;
@property (readonly, copy) NSDate *fireDate;

+ (id)shortDescription;

- (void)fire;
- (void)dealloc;
- (void)kick;
- (void)cancel;
- (void)setFireDate:(id)a0;
- (id)attributeDescriptions;
- (void)suspend;
- (void)resume;
- (id)init;
- (void)__fire;
- (void)__handleExpiration;
- (id)initWithTimeInterval:(double)a0 options:(unsigned int)a1;
- (void).cxx_destruct;

@end
