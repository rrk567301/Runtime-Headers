@class NSString, NSDate;

@interface SWScheduledSystemWake : NSObject <BSInvalidatable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSDate *_lock_wakeDate;
    NSString *_lock_wakeIdentifier;
    long long _lock_leeway;
    char _lock_invalidated;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long leeway;
@property (readonly, nonatomic, getter=isScheduled) char scheduled;
@property (readonly, nonatomic) double wakeTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithIdentifier:(id)a0;
- (void)cancelWake;
- (void)scheduleWake:(double)a0 leeway:(long long)a1;

@end
