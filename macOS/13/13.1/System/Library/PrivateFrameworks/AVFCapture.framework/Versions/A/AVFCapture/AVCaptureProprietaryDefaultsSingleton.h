@class NSMutableDictionary, CMIOProprietaryDefaultsSource, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AVCaptureProprietaryDefaultsSingleton : NSObject {
    char *_proprietaryDefaultsSourceQueueLabel;
    unsigned long long _proprietaryDefaultsSourceQueueLabelLength;
    NSObject<OS_dispatch_queue> *_proprietaryDefaultsSourceQueue;
    NSObject<OS_dispatch_queue> *_proprietaryDefaultChangeNotificationCallbackQueue;
    CMIOProprietaryDefaultsSource *_proprietaryDefaultsSource;
    NSObject<OS_dispatch_queue> *_cmioProprietaryDefaultsSourceReconnectionQueue;
    int _numberOfTimesConnectionHasBroken;
    BOOL _connectionWasInterrupted;
    NSMutableDictionary *_defaultChangedHandlersForObserversForKeys;
    NSMutableArray *_keyObservationsThatFailedToRegisterWithServer;
}

+ (void)initialize;
+ (id)objectForKey:(id)a0;
+ (void)setObject:(id)a0 forKey:(id)a1;
+ (id)proprietaryDefaultsSingleton;
+ (void)addObserver:(id)a0 forKey:(id)a1 callHandlerForInitialValue:(BOOL)a2 defaultChangedHandler:(id /* block */)a3;
+ (void)removeObserver:(id)a0 forKey:(id)a1;
+ (int)retryPriorFailedKeyObservationRegistrations;
+ (void)updateCameraHistory:(id)a0 withCameraInfo:(id)a1 maxLength:(unsigned long long)a2 updateCameraHistoryDownplayOverrideList:(BOOL)a3 cameraCanBeInOverrideList:(BOOL)a4;
+ (void)updateCameraOverrideHistory:(id)a0 withCameraInfo:(id)a1 setOverride:(BOOL)a2;
+ (id)cameraHistoryDownplayOverrideList;

- (void)dealloc;
- (id)init;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)addObserver:(id)a0 forKey:(id)a1 callHandlerForInitialValue:(BOOL)a2 defaultChangedHandler:(id /* block */)a3;
- (void)removeObserver:(id)a0 forKey:(id)a1;
- (int)retryPriorFailedKeyObservationRegistrations;
- (void)updateCameraHistory:(id)a0 withCameraInfo:(id)a1 maxLength:(unsigned long long)a2 updateCameraHistoryDownplayOverrideList:(BOOL)a3 cameraCanBeInOverrideList:(BOOL)a4;
- (void)updateCameraOverrideHistory:(id)a0 withCameraInfo:(id)a1 setOverride:(BOOL)a2;
- (id)cameraHistoryDownplayOverrideList;
- (int)_registerWithServerToObserveKey:(id)a0;
- (void)_updateProprietaryDefaultsSource:(BOOL)a0;
- (void)_handleDefaultChangedNotificationForKey:(id)a0 newValue:(id)a1 callHandlersAsync:(BOOL)a2;
- (void)_runBlockOnProprietaryDefaultsSourceQueue:(id /* block */)a0;

@end
