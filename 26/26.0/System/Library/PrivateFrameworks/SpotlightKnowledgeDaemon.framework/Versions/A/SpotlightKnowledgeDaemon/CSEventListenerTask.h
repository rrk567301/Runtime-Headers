@class NSString, NSDictionary, BGNonRepeatingSystemTask, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface CSEventListenerTask : NSObject {
    NSString *_name;
    NSString *_taskIdentifier;
    _Atomic BOOL _allowed;
    _Atomic int _jobCount;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _yieldLock;
    NSObject<OS_dispatch_queue> *_taskQueue;
    NSObject<OS_dispatch_group> *_workGroup;
    unsigned long long _wait;
    BGNonRepeatingSystemTask *_task;
    unsigned char _throttleOn;
    unsigned char _throttleOff;
    NSDictionary *_options;
    BOOL _needsThrottling;
}

@property (readonly, nonatomic) NSString *name;

- (void)end;
- (void)setup;
- (void)complete;
- (void)enter;
- (void)handle;
- (BOOL)allowed;
- (void)leave;
- (id)initWithConfig:(id)a0;
- (void)launch;
- (void).cxx_destruct;
- (BOOL)needsThrottling;
- (void)_throttling:(BOOL)a0;

@end
