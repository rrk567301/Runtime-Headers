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
    char _connectionWasInterrupted;
    id /* block */ _frameSenderEndpointsChangedHandler;
    NSMutableDictionary *_defaultChangedHandlersForObserversForKeys;
    NSMutableArray *_keyObservationsThatFailedToRegisterWithServer;
}

+ (void)initialize;
+ (id)objectForKey:(id)a0;
+ (void)setObject:(id)a0 forKey:(id)a1;
+ (id)proprietaryDefaultsDomainForAuditToken:(struct { unsigned int x0[8]; })a0;
+ (void)addObserver:(id)a0 forKey:(id)a1 callHandlerForInitialValue:(char)a2 defaultChangedHandler:(id /* block */)a3;
+ (id)cameraHistoryDownplayOverrideList;
+ (id)camerasIneligibleToParticpateInOverridingList;
+ (struct __CVBuffer { } *)imageForKey:(id)a0 fillWidth:(int)a1 fillHeight:(int)a2;
+ (id)objectsForWildcardKey:(id)a0;
+ (id)proprietaryDefaultsDomainForClient;
+ (id)proprietaryDefaultsSingleton;
+ (void)removeObserver:(id)a0 forKey:(id)a1;
+ (int)retryPriorFailedKeyObservationRegistrations;
+ (void)runBlockOnProprietaryDefaultsSourceQueueAsync:(id /* block */)a0;
+ (void)setObject:(id)a0 forWildcardKey:(id)a1;
+ (int)setObserveFrameSenderServerEndpoints:(char)a0 endpointsChangedHandler:(id /* block */)a1;
+ (void)updateCameraHistory:(id)a0 withCameraInfo:(id)a1 maxLength:(unsigned long long)a2 updateCameraHistoryDownplayOverrideList:(char)a3 cameraCanBeInOverrideList:(char)a4;
+ (void)updateCameraOverrideHistory:(id)a0 withCameraInfo:(id)a1 setEligibility:(char)a2;
+ (void)updateCameraOverrideHistory:(id)a0 withCameraInfo:(id)a1 setOverride:(char)a2;

- (void)dealloc;
- (id)init;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)proprietaryDefaultsDomainForAuditToken:(struct { unsigned int x0[8]; })a0;
- (void)_handleDefaultChangedNotificationForKey:(id)a0 newValue:(id)a1 handlersForKeyObservers:(id)a2 callHandlersAsync:(char)a3;
- (void)_handleFrameSenderEndpointsChanged:(id)a0 callHandlerAsync:(char)a1;
- (int)_registerWithServerToObserveKey:(id)a0;
- (void)_runBlockOnProprietaryDefaultsSourceQueueAsync:(id /* block */)a0;
- (void)_runBlockOnProprietaryDefaultsSourceQueueSync:(id /* block */)a0;
- (void)_updateProprietaryDefaultsSource:(char)a0;
- (void)addObserver:(id)a0 forKey:(id)a1 callHandlerForInitialValue:(char)a2 defaultChangedHandler:(id /* block */)a3;
- (id)cameraHistoryDownplayOverrideList;
- (id)camerasIneligibleToParticpateInOverridingList;
- (struct __CVBuffer { } *)imageForKey:(id)a0 fillWidth:(int)a1 fillHeight:(int)a2;
- (id)objectsForWildcardKey:(id)a0;
- (void)removeObserver:(id)a0 forKey:(id)a1;
- (int)retryPriorFailedKeyObservationRegistrations;
- (void)setObject:(id)a0 forWildcardKey:(id)a1;
- (int)setObserveFrameSenderServerEndpoints:(char)a0 endpointsChangedHandler:(id /* block */)a1;
- (void)unobserveChangesForKey:(id)a0;
- (void)updateCameraHistory:(id)a0 withCameraInfo:(id)a1 maxLength:(unsigned long long)a2 updateCameraHistoryDownplayOverrideList:(char)a3 cameraCanBeInOverrideList:(char)a4;
- (void)updateCameraOverrideHistory:(id)a0 withCameraInfo:(id)a1 setEligibility:(char)a2;
- (void)updateCameraOverrideHistory:(id)a0 withCameraInfo:(id)a1 setOverride:(char)a2;

@end
