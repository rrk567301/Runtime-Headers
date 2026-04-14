@class NSMapTable, NSDate, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HMFMemoryMonitor : HMFObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) HMFMemoryMonitor *memoryMonitor;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *memoryPressureSource;
@property (nonatomic, getter=isMonitoring) BOOL monitoring;
@property (nonatomic) long long systemMemoryState;
@property (nonatomic) long long lastProcessMemoryState;
@property (retain, nonatomic) NSDate *lastProcessMemoryStateUpdateTime;
@property (readonly) NSMapTable *memoryObservancesByObserver;

- (void)start;
- (void)dealloc;
- (void)stop;
- (void)removeObserver:(id)a0;
- (id)init;
- (void)addObserver:(id)a0 debounceInterval:(double)a1 events:(id)a2;
- (void).cxx_destruct;

@end
