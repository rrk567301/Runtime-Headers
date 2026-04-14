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

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithHandler:(id)a0;
- (void)_invalidateTimer;
- (void)_timerDidFire;
- (void)applicationDidChangeActive:(id)a0;
- (void)scheduleTimer;
- (void)_performFlush;
- (void)_updateApplicationIsActive:(BOOL)a0;
- (void)cancelTimer;
- (void)disableFlushing;
- (void)enableFlushing;
- (void)flushImmediately;

@end
