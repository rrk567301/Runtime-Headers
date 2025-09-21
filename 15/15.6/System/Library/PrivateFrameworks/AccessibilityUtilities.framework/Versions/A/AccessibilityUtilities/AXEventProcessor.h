@class NSString, NSThread, NSArray, NSMutableArray;

@interface AXEventProcessor : NSObject {
    char _shouldRunHIDReceiveThreadRunloop;
}

@property (retain, nonatomic) NSString *HIDEventTapIdentifier;
@property (nonatomic) int HIDEventTapPriority;
@property (retain, nonatomic) NSThread *HIDEventReceiveThread;
@property (nonatomic, getter=isHandlingHIDEvents) char handlingHIDEvents;
@property (retain, nonatomic) NSMutableArray *hidActualEventTapEnabledReasons;
@property (retain, nonatomic) NSString *systemEventTapIdentifier;
@property (nonatomic) int systemEventTapPriority;
@property (nonatomic, getter=isHandlingSystemEvents) char handlingSystemEvents;
@property (retain, nonatomic) NSMutableArray *systemActualEventTapEnabledReasons;
@property (nonatomic) char shouldNotifyUserEventOccurred;
@property (copy, nonatomic) id /* block */ HIDEventHandler;
@property (nonatomic) unsigned long long HIDEventFilterMask;
@property (copy, nonatomic) id /* block */ failedToHandleEventInTime;
@property (readonly, nonatomic) NSArray *hidEventTapEnabledReasons;
@property (copy, nonatomic) id /* block */ systemEventHandler;
@property (nonatomic) char ignoreAllSystemEvents;
@property (nonatomic) char ignoreEventsForContinuitySession;
@property (readonly, weak, nonatomic) NSArray *systemEventTapEnabledReasons;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)cleanup;
- (void)_installHIDEventFilter;
- (void)_installSystemEventFilter;
- (void)_runHIDEventReceiveThread;
- (void)_threadStop;
- (void)_uninstallHIDEventFilter;
- (void)_uninstallSystemEventFilter;
- (void)beginHandlingHIDEventsForReason:(id)a0;
- (void)beginHandlingSystemEventsForReason:(id)a0;
- (void)endHandlingHIDEventsForReason:(id)a0;
- (void)endHandlingSystemEventsForReason:(id)a0;
- (id)initWithHIDTapIdentifier:(id)a0 HIDEventTapPriority:(int)a1 systemEventTapIdentifier:(id)a2 systemEventTapPriority:(int)a3;
- (void)raiseHIDEventTapPriorityToMaximum;
- (void)raiseSystemEventTapPriorityToMaximum;
- (void)restoreHIDEventTapPriorityToDefault;
- (void)restoreSystemEventTapPriorityToDefault;

@end
