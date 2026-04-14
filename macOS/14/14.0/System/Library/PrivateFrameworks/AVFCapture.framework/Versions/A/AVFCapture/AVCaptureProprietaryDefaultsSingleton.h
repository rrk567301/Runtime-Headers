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
    id /* block */ _frameSenderEndpointsChangedHandler;
    NSMutableDictionary *_defaultChangedHandlersForObserversForKeys;
    NSMutableArray *_keyObservationsThatFailedToRegisterWithServer;
}

+ (void)initialize;
+ (id)objectForKey:(id)a0;
+ (void)setObject:(id)a0 forKey:(id)a1;
+ (id)proprietaryDefaultsDomainForAuditToken:(struct { unsigned int x0[8]; })a0;
+ (void)addObserver:(id)a0 forKey:(id)a1 callHandlerForInitialValue:(BOOL)a2 defaultChangedHandler:(id /* block */)a3;
+ (id)cameraHistoryDownplayOverrideList;
+ (id)camerasIneligibleToParticpateInOverridingList;
+ (id)proprietaryDefaultsDomainForClient;
+ (id)proprietaryDefaultsSingleton;
+ (void)removeObserver:(id)a0 forKey:(id)a1;
+ (int)retryPriorFailedKeyObservationRegistrations;
+ (int)setObserveFrameSenderServerEndpoints:(BOOL)a0 endpointsChangedHandler:(id /* block */)a1;
+ (void)updateCameraHistory:(id)a0 withCameraInfo:(id)a1 maxLength:(unsigned long long)a2 updateCameraHistoryDownplayOverrideList:(BOOL)a3 cameraCanBeInOverrideList:(BOOL)a4;
+ (void)updateCameraOverrideHistory:(id)a0 withCameraInfo:(id)a1 setEligibility:(BOOL)a2;
+ (void)updateCameraOverrideHistory:(id)a0 withCameraInfo:(id)a1 setOverride:(BOOL)a2;

- (void)dealloc;
- (id)init;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)proprietaryDefaultsDomainForAuditToken:(struct { unsigned int x0[8]; })a0;
- (void)_handleDefaultChangedNotificationForKey:(id)a0 newValue:(id)a1 callHandlersAsync:(BOOL)a2;
- (void)_handleFrameSenderEndpointsChanged:(id)a0 callHandlerAsync:(BOOL)a1;
- (int)_registerWithServerToObserveKey:(id)a0;
- (void)_runBlockOnProprietaryDefaultsSourceQueue:(id /* block */)a0;
- (void)_updateProprietaryDefaultsSource:(BOOL)a0;
- (void)addObserver:(id)a0 forKey:(id)a1 callHandlerForInitialValue:(BOOL)a2 defaultChangedHandler:(id /* block */)a3;
- (id)cameraHistoryDownplayOverrideList;
- (id)camerasIneligibleToParticpateInOverridingList;
- (void)removeObserver:(id)a0 forKey:(id)a1;
- (int)retryPriorFailedKeyObservationRegistrations;
- (int)setObserveFrameSenderServerEndpoints:(BOOL)a0 endpointsChangedHandler:(id /* block */)a1;
- (void)updateCameraHistory:(id)a0 withCameraInfo:(id)a1 maxLength:(unsigned long long)a2 updateCameraHistoryDownplayOverrideList:(BOOL)a3 cameraCanBeInOverrideList:(BOOL)a4;
- (void)updateCameraOverrideHistory:(id)a0 withCameraInfo:(id)a1 setEligibility:(BOOL)a2;
- (void)updateCameraOverrideHistory:(id)a0 withCameraInfo:(id)a1 setOverride:(BOOL)a2;

@end
