@class PHChangeHandlingDebugEvent, NSMutableArray;

@interface PHChangeHandlingDebugger : NSObject {
    unsigned long long _maxPreviousEvents;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    PHChangeHandlingDebugEvent *_lock_currentEvent;
    PHChangeHandlingDebugEvent *_lock_nextEvent;
    NSMutableArray *_lock_previousEvents;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _activeLock;
    BOOL _activeLock_isActive;
    double _activeLock_isActiveTimestamp;
}

- (id)init;
- (void).cxx_destruct;
- (id)stateCaptureDictionary;
- (id)beginProcessPendingChanges;
- (void)changeHandlingActiveStateDidChange:(BOOL)a0;
- (void)endProcessPendingChanges;
- (id)initWithMaxPreviousEvents:(unsigned long long)a0;

@end
