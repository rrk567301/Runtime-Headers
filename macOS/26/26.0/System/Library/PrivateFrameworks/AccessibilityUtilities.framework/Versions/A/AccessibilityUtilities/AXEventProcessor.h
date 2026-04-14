@class NSString, NSThread, NSArray, NSMutableArray;

@interface AXEventProcessor : NSObject {
    BOOL _shouldRunHIDReceiveThreadRunloop;
}

@property (retain, nonatomic) NSString *HIDEventTapIdentifier;
@property (nonatomic) int HIDEventTapPriority;
@property (retain, nonatomic) NSThread *HIDEventReceiveThread;
@property (nonatomic, getter=isHandlingHIDEvents) BOOL handlingHIDEvents;
@property (retain, nonatomic) NSMutableArray *hidActualEventTapEnabledReasons;
@property (retain, nonatomic) NSString *systemEventTapIdentifier;
@property (nonatomic) int systemEventTapPriority;
@property (nonatomic, getter=isHandlingSystemEvents) BOOL handlingSystemEvents;
@property (retain, nonatomic) NSMutableArray *systemActualEventTapEnabledReasons;
@property (nonatomic) BOOL shouldMonitorHIDEventsOnly;
@property (nonatomic) BOOL shouldNotifyUserEventOccurred;
@property (copy, nonatomic) id /* block */ HIDEventHandler;
@property (nonatomic) unsigned long long HIDEventFilterMask;
@property (copy, nonatomic) id /* block */ failedToHandleEventInTime;
@property (readonly, nonatomic) NSArray *hidEventTapEnabledReasons;
@property (copy, nonatomic) id /* block */ systemEventHandler;
@property (nonatomic) BOOL ignoreAllSystemEvents;
@property (nonatomic) BOOL ignoreEventsForContinuitySession;
@property (readonly, weak, nonatomic) NSArray *systemEventTapEnabledReasons;

- (void)raiseHIDEventTapPriorityToMaximum;
- (void)cleanup;
- (void)endHandlingHIDEventsForReason:(id)a0;
- (void)dealloc;
- (void)_uninstallSystemEventFilter;
- (id)initWithHIDTapIdentifier:(id)a0 HIDEventTapPriority:(int)a1 systemEventTapIdentifier:(id)a2 systemEventTapPriority:(int)a3;
- (void)_threadStop;
- (id)init;
- (void)_installHIDEventFilter;
- (void)endHandlingSystemEventsForReason:(id)a0;
- (void)_uninstallHIDEventFilter;
- (void)beginHandlingSystemEventsForReason:(id)a0;
- (void)raiseSystemEventTapPriorityToMaximum;
- (id)initWithHIDTapIdentifier:(id)a0 HIDEventTapPriority:(int)a1 shouldMonitorHIDEventsOnly:(BOOL)a2 systemEventTapIdentifier:(id)a3 systemEventTapPriority:(int)a4;
- (void)beginHandlingHIDEventsForReason:(id)a0;
- (void)restoreSystemEventTapPriorityToDefault;
- (void)restoreHIDEventTapPriorityToDefault;
- (void).cxx_destruct;
- (void)_runHIDEventReceiveThread;
- (void)_installSystemEventFilter;

@end
