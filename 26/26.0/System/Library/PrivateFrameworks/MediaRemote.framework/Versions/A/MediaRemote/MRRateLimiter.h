@class NSString, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface MRRateLimiter : NSObject {
    id /* block */ _block;
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSDate *_lastNotificationDate;
    BOOL _wasUpdatedDuringInterval;
}

@property (readonly, nonatomic) double interval;
@property (readonly, nonatomic) NSString *name;

- (void)_notify;
- (void)update;
- (id)initWithInterval:(double)a0 name:(id)a1 queue:(id)a2 block:(id /* block */)a3;
- (void).cxx_destruct;

@end
