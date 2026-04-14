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
+ (void)setObject:(id)a0 forKey:(id)a1;
+ (void)setObject:(id)a0 forWildcardKey:(id)a1;
+ (id)camerasIneligibleToParticpateInOverridingList;
+ (id)proprietaryDefaultsSingleton;
+ (void)updateCameraHistory:(id)a0 withCameraInfo:(id)a1 maxLength:(unsigned long long)a2 updateCameraHistoryDownplayOverrideList:(BOOL)a3 cameraCanBeInOverrideList:(BOOL)a4;
+ (id)objectsForWildcardKey:(id)a0;
+ (id)cameraHistoryDownplayOverrideList;
+ (id)proprietaryDefaultsDomainForAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)proprietaryDefaultsDomainForClient;
+ (void)updateCameraOverrideHistory:(id)a0 withCameraInfo:(id)a1 setOverride:(BOOL)a2;
+ (void)runBlockOnProprietaryDefaultsSourceQueueAsync:(id /* block */)a0;
+ (int)setObserveFrameSenderServerEndpoints:(BOOL)a0 endpointsChangedHandler:(id /* block */)a1;
+ (void)addObserver:(id)a0 forKey:(id)a1 callHandlerForInitialValue:(BOOL)a2 defaultChangedHandler:(id /* block */)a3;
+ (id)objectForKey:(id)a0;
+ (void)updateCameraOverrideHistory:(id)a0 withCameraInfo:(id)a1 setEligibility:(BOOL)a2;
+ (struct __CVBuffer { } *)imageForKey:(id)a0 fillWidth:(int)a1 fillHeight:(int)a2;
+ (int)retryPriorFailedKeyObservationRegistrations;
+ (void)removeObserver:(id)a0 forKey:(id)a1;

- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forWildcardKey:(id)a1;
- (id)camerasIneligibleToParticpateInOverridingList;
- (void)updateCameraHistory:(id)a0 withCameraInfo:(id)a1 maxLength:(unsigned long long)a2 updateCameraHistoryDownplayOverrideList:(BOOL)a3 cameraCanBeInOverrideList:(BOOL)a4;
- (id)objectsForWildcardKey:(id)a0;
- (id)cameraHistoryDownplayOverrideList;
- (id)proprietaryDefaultsDomainForAuditToken:(struct { unsigned int x0[8]; })a0;
- (void)_runBlockOnProprietaryDefaultsSourceQueueSync:(id /* block */)a0;
- (void)updateCameraOverrideHistory:(id)a0 withCameraInfo:(id)a1 setOverride:(BOOL)a2;
- (int)setObserveFrameSenderServerEndpoints:(BOOL)a0 endpointsChangedHandler:(id /* block */)a1;
- (void)_runBlockOnProprietaryDefaultsSourceQueueAsync:(id /* block */)a0;
- (void)addObserver:(id)a0 forKey:(id)a1 callHandlerForInitialValue:(BOOL)a2 defaultChangedHandler:(id /* block */)a3;
- (int)_registerWithServerToObserveKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)updateCameraOverrideHistory:(id)a0 withCameraInfo:(id)a1 setEligibility:(BOOL)a2;
- (void)_updateProprietaryDefaultsSource:(BOOL)a0;
- (id)init;
- (void)_handleDefaultChangedNotificationForKey:(id)a0 newValue:(id)a1 handlersForKeyObservers:(id)a2 callHandlersAsync:(BOOL)a3;
- (void)_handleFrameSenderEndpointsChanged:(id)a0 callHandlerAsync:(BOOL)a1;
- (struct __CVBuffer { } *)imageForKey:(id)a0 fillWidth:(int)a1 fillHeight:(int)a2;
- (int)retryPriorFailedKeyObservationRegistrations;
- (void)removeObserver:(id)a0 forKey:(id)a1;
- (void)unobserveChangesForKey:(id)a0;
- (void)dealloc;

@end
