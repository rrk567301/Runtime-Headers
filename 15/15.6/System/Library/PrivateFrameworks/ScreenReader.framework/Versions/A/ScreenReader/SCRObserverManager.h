@class NSMutableDictionary, SCRObserverTargetCache, NSLock;

@interface SCRObserverManager : NSObject {
    NSLock *_observerLock;
    struct __CFDictionary { } *_applicationLocks;
    struct __CFDictionary { } *_applicationAXObservers;
    NSLock *_observerIDToAppLock;
    struct __CFDictionary { } *_observerIDToApp;
    SCRObserverTargetCache *_targetCache;
    _Atomic unsigned long long _observerID;
}

@property (class, readonly) SCRObserverManager *sharedManager;

@property (nonatomic) struct __CFDictionary { } *applicationObserverGroupSets;
@property (retain, nonatomic) NSMutableDictionary *_lastProcessedLayoutChangeNotificationTimestampForObserverIDs;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)status;
- (char)removeAllObserversForApplication:(id)a0;
- (char)_removeApplication:(id)a0;
- (id)_applicationForObserverID:(unsigned long long)a0;
- (void)_fireDelayedObserver:(id)a0;
- (void)_fireObserverID:(id)a0 forApplication:(id)a1 withAXElementRef:(struct __AXUIElement { } *)a2 userInfo:(id)a3;
- (void)_fireObserverID:(id)a0 forApplication:(id)a1 withAXElementRef:(struct __AXUIElement { } *)a2 userInfo:(id)a3 isTimerFire:(char)a4;
- (void)_fireObserverID:(unsigned long long)a0 forNotification:(id)a1 withAXElementRef:(struct __AXUIElement { } *)a2 userInfo:(id)a3;
- (char)_removeObserversForApplication:(id)a0 withObserverTarget:(id)a1 force:(char)a2;
- (char)addObserver:(id)a0 selector:(SEL)a1 name:(struct __CFString { } *)a2 uiElement:(id)a3 application:(id)a4 cancelMask:(unsigned int)a5;
- (char)registerSCRApplication:(id)a0;
- (char)removeObserversForApplication:(id)a0 withObserverTarget:(id)a1;
- (char)removeObserversForApplication:(id)a0 withObserverTarget:(id)a1 name:(struct __CFString { } *)a2 uiElement:(id)a3;
- (char)removeObserversForObserverTargetForced:(id)a0;
- (char)setThrottleTime:(int)a0 forApplication:(id)a1 name:(struct __CFString { } *)a2 uiElement:(id)a3;
- (char)unregisterSCRApplication:(id)a0;

@end
