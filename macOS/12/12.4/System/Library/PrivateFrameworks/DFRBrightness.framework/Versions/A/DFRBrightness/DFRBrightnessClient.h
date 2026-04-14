@class BrightnessSystemClientInternal, NSMutableDictionary, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface DFRBrightnessClient : NSObject {
    struct __IOHIDEventSystemClient { } *_hidClient;
    struct __IOHIDServiceClient { } *_DFRService;
    NSObject<OS_os_log> *_logHandle;
    NSMutableDictionary *_propertyCache;
    NSObject<OS_dispatch_queue> *_scheduledQueue;
    NSObject<OS_dispatch_queue> *_hidQueue;
    id /* block */ _clientCallbackBlockDisplayState;
    id /* block */ _clientCallbackBlockHarmonyState;
    id /* block */ _displayStateNotificationHandler;
    int _displayStateNotificationToken;
    id /* block */ _coreBrightnessClientCallback;
    BrightnessSystemClientInternal *_coreBrightnessClient;
}

@property (readonly) long long displayState;
@property (readonly) long long harmonyState;

- (void)dealloc;
- (id)init;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (id)copyPropertyForKey:(id)a0;
- (void)scheduleWithDispatchQueue:(id)a0;
- (void)unscheduleWithDispatchQueue:(id)a0;
- (void)flushPropertyCache;
- (BOOL)turnOn;
- (BOOL)turnOnWithPeriod:(float)a0;
- (BOOL)turnOff;
- (BOOL)turnOffWithPeriod:(float)a0;
- (BOOL)dimToStep:(long long)a0;
- (BOOL)dimToStep:(long long)a0 withPeriod:(float)a1 andCoefficient:(float)a2;
- (long long)getDimmingStep;
- (BOOL)getBurninCounterValue:(unsigned long long *)a0;
- (BOOL)setBurninCounterValue:(unsigned long long)a0;
- (BOOL)registerDisplayStateUpdateCallbackWithBlock:(id /* block */)a0;
- (void)unregisterDisplayStateUpdateCallback;
- (int)getDFRDisplayID;
- (BOOL)updateState:(int)a0 withPeriod:(float)a1;
- (BOOL)_dimToStep:(id)a0 withPeriod:(id)a1 andCoefficient:(id)a2;
- (BOOL)addDFRService:(struct __IOHIDServiceClient { } *)a0;
- (BOOL)dimToStep:(long long)a0 withPeriod:(float)a1;
- (BOOL)dimToStep:(long long)a0 withCoefficient:(float)a1;
- (BOOL)setServiceProperty:(id)a0 forKey:(id)a1;
- (BOOL)initializeHID;
- (BOOL)registerHarmonyStateUpdateCallbackWithBlock:(id /* block */)a0;
- (void)unregisterHarmonyStateUpdateCallback;

@end
