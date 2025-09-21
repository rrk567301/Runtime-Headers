@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HIDEventService : NSObject {
    struct { struct __IOHIDSession *session; unsigned int service; struct IOHIDServiceInterface **serviceInterface; struct IOHIDServiceInterface2 **serviceInterface2; struct IOCFPlugInInterfaceStruct **plugInInterface; struct __CFNumber *registryID; void *locationID; struct __CFArray *entitlements; struct __IOHIDServiceQueueContext *queueContext; NSObject<OS_dispatch_queue> *dispatchQueue; struct IONotificationPort *notificationPort; unsigned int notification; struct __CFSet *removalNotificationSet; struct __CFSet *propertyNotificationSet; struct __CFSet *requestTerminationNotificationSet; void *eventTarget; void *eventRefcon; void /* function */ *eventCallback; unsigned int lastLEDMask; unsigned int lastButtonMask; unsigned int currentReportInterval; unsigned int currentBatchInterval; unsigned int defaultReportInterval; unsigned int defaultBatchInterval; unsigned int primaryUsagePage; unsigned int primaryUsage; char transport[32]; unsigned int queueSize; int containsReportInterval; unsigned int state; unsigned int eventCount; unsigned long long eventMask; struct __CFDictionary *clientCacheDict; struct __CFArray *simpleFilters; struct __CFArray *filters; struct __CFSet *keyboardEventInProgress; unsigned long long nullEventMask; int displayIntegratedDigitizer; int builtIn; int inMomentumPhase; int inDigitizerPhase; unsigned char sensorControlOptions; int hidden; int registered; int protectedAccess; struct __CFDictionary *propertyCache; unsigned int propertyCacheHit; unsigned int propertyCacheMiss; unsigned long long activityLastTimestamp; struct { void *connection; void *target; void *refcon; struct IOHIDServiceVirtualCallbacksV2 *callbacks; } virtualService; void **connections; unsigned long long propertySetTime; unsigned long long propertyGetTime; unsigned long long elementSetTime; unsigned long long regID; struct __CFData *eventLog; unsigned long long *eventTypeCnt; id /* block */ pluginCancelHandler; id /* block */ filterCancelHandler; BOOL pendingPluginCancel; unsigned int pendingFilterCancels; NSObject<OS_dispatch_source> *cancelTimer; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } dataLock; void *hidAnalyticsEvent; void *hidAnalyticsDispatchEvent; struct { void *interface; struct __CFString *name; SEL getProperty; SEL setProperty; SEL eventMatching; SEL setEventDispatcher; SEL setCancelHandler; SEL activate; SEL cancel; SEL setDispatchQueue; SEL clientNotification; SEL copyEvent; SEL setOutputEvent; SEL setHIDEventService; } objc; } _service;
}

@property (readonly) unsigned long long serviceID;

- (void)dispatchEvent:(id)a0;
- (id)propertyForKey:(id)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (BOOL)conformsToUsagePage:(long long)a0 usage:(long long)a1;
- (id)eventStatistics;
- (id)eventMatching:(id)a0;
- (void)registerWithSystem;
- (BOOL)setProperty:(id)a0 forKey:(id)a1 and:(id)a2;
- (int)workIntervalCancel;
- (int)workIntervalFinish;
- (int)workIntervalStart:(unsigned long long)a0 deadline:(unsigned long long)a1 complexity:(unsigned long long)a2;
- (int)workIntervalUpdate:(unsigned long long)a0 complexity:(unsigned long long)a1;
- (unsigned long long)_cfTypeID;
- (void)dealloc;
- (id)description;

@end
