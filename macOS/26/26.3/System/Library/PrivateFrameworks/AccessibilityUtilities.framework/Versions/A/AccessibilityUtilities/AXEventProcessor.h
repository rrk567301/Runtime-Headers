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

- (void)raiseSystemEventTapPriorityToMaximum;
- (void)_uninstallSystemEventFilter;
- (void)restoreSystemEventTapPriorityToDefault;
- (id)init;
- (void)_threadStop;
- (void)beginHandlingSystemEventsForReason:(id)a0;
- (void)_uninstallHIDEventFilter;
- (void)_installHIDEventFilter;
- (void)raiseHIDEventTapPriorityToMaximum;
- (void)endHandlingHIDEventsForReason:(id)a0;
- (void)cleanup;
- (void)_runHIDEventReceiveThread;
- (void).cxx_destruct;
- (void)_installSystemEventFilter;
- (id)initWithHIDTapIdentifier:(id)a0 HIDEventTapPriority:(int)a1 systemEventTapIdentifier:(id)a2 systemEventTapPriority:(int)a3;
- (void)dealloc;
- (void)beginHandlingHIDEventsForReason:(id)a0;
- (void)endHandlingSystemEventsForReason:(id)a0;
- (id)initWithHIDTapIdentifier:(id)a0 HIDEventTapPriority:(int)a1 shouldMonitorHIDEventsOnly:(BOOL)a2 systemEventTapIdentifier:(id)a3 systemEventTapPriority:(int)a4;
- (void)restoreHIDEventTapPriorityToDefault;

@end
