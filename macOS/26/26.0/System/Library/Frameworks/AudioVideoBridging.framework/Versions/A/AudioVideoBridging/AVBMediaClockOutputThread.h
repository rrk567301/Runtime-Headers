@class AVBMediaClockOutputStream;

@interface AVBMediaClockOutputThread : AVBMediaClockThread {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _streamLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _actionLock;
    AVBMediaClockOutputStream *_streams[8];
    id /* block */ _actions[8];
    unsigned long long _timestampAdjustment;
}

- (void)updateTiming;
- (BOOL)removeOutputStream:(id)a0;
- (id)init;
- (BOOL)addOutputStream:(id)a0;
- (void).cxx_destruct;
- (void)addOutputStream:(id)a0 schedulerBlock:(id /* block */)a1;
- (void)removeOutputStreamSchedulerBlock:(id)a0;
- (void)threadWorkFromTimeSyncTime:(unsigned long long)a0 toTimeSyncTime:(unsigned long long)a1;

@end
