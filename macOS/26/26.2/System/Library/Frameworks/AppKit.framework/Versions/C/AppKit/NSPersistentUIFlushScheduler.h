@protocol NSPersistentUIFlushHandler;

@interface NSPersistentUIFlushScheduler : NSObject {
    id<NSPersistentUIFlushHandler> _handler;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id /* block */ _hysteresisBlock;
    double _scheduledFlushDeadline;
    double _scheduledFlushDate;
    unsigned int _contiguousInactiveFlushCount;
    unsigned int _disableRestorableStateWritingCounter;
    BOOL _applicationIsActive;
}

- (id)initWithHandler:(id)a0;
- (void)cancelTimer;
- (void)enableFlushing;
- (void).cxx_destruct;
- (void)_invalidateTimer;
- (void)scheduleTimer;
- (void)dealloc;
- (void)disableFlushing;
- (void)_performFlush;
- (void)_timerDidFire;
- (void)_updateApplicationIsActive:(BOOL)a0;
- (void)applicationDidChangeActive:(id)a0;
- (void)flushImmediately;

@end
