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
@property (nonatomic) BOOL shouldSeparateHIDStreamsBySenderID;
@property (nonatomic) BOOL shouldNotifyUserEventOccurred;
@property (copy, nonatomic) id /* block */ HIDEventHandler;
@property (nonatomic) unsigned long long HIDEventFilterMask;
@property (copy, nonatomic) id /* block */ failedToHandleEventInTime;
@property (readonly, nonatomic) NSArray *hidEventTapEnabledReasons;
@property (copy, nonatomic) id /* block */ systemEventHandler;
@property (nonatomic) BOOL ignoreAllSystemEvents;
@property (nonatomic) BOOL ignoreEventsForContinuitySession;
@property (readonly, weak, nonatomic) NSArray *systemEventTapEnabledReasons;

- (void)cleanup;
- (id)initWithHIDTapIdentifier:(id)a0 HIDEventTapPriority:(int)a1 shouldMonitorHIDEventsOnly:(BOOL)a2 shouldSeparateHIDStreamsBySenderID:(BOOL)a3 systemEventTapIdentifier:(id)a4 systemEventTapPriority:(int)a5;
- (void)raiseSystemEventTapPriorityToMaximum;
- (void)_installSystemEventFilter;
- (void)_uninstallSystemEventFilter;
- (void)endHandlingSystemEventsForReason:(id)a0;
- (void)_uninstallHIDEventFilter;
- (void)restoreHIDEventTapPriorityToDefault;
- (void)_threadStop;
- (void).cxx_destruct;
- (void)raiseHIDEventTapPriorityToMaximum;
- (id)initWithHIDTapIdentifier:(id)a0 HIDEventTapPriority:(int)a1 shouldMonitorHIDEventsOnly:(BOOL)a2 systemEventTapIdentifier:(id)a3 systemEventTapPriority:(int)a4;
- (id)init;
- (id)initWithHIDTapIdentifier:(id)a0 HIDEventTapPriority:(int)a1 systemEventTapIdentifier:(id)a2 systemEventTapPriority:(int)a3;
- (void)beginHandlingSystemEventsForReason:(id)a0;
- (void)_installHIDEventFilter;
- (void)beginHandlingHIDEventsForReason:(id)a0;
- (void)endHandlingHIDEventsForReason:(id)a0;
- (void)dealloc;
- (void)restoreSystemEventTapPriorityToDefault;
- (void)_runHIDEventReceiveThread;

@end
