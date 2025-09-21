@class AAController, NSString, NSMutableDictionary, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface AASensorService : NSObject <NSSecureCoding, AAServicesXPCClientInterface> {
    AAController *_aaController;
    BOOL _activateCalled;
    id /* block */ _activateCompletion;
    unsigned int _availableSensors;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSMutableDictionary *_ovadDataDict;
    NSMutableDictionary *_requestedSensorRates;
    unsigned int _subscribedSensors;
    id /* block */ _subscriptionErrorHandler;
    NSXPCConnection *_xpcCnx;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int clientID;
@property (copy, nonatomic) NSString *btAddress;
@property (nonatomic) double deviceDiscoveryTimeout;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ sensorAvailabilityUpdatedHandler;
@property (copy, nonatomic) id /* block */ sensorDataInfoUpdatedHandler;
@property (nonatomic) double subscriptionTimeout;

- (id)_ensureXPCStarted;
- (void)unsubscribeAll;
- (void)_interrupted;
- (void)invalidate;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_invalidated;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (void)_reportError:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)activate;
- (void).cxx_destruct;
- (void)_activate:(BOOL)a0;
- (BOOL)isSystemContext;
- (void)sensorServiceReportSensorInfo:(id)a0;
- (void)unsubscribeWithSensorDataFlags:(unsigned int)a0;
- (void)_activateXPC:(id /* block */)a0 reactivate:(BOOL)a1;
- (void)_broadcastAACPAvailabilities;
- (void)subscribeWithSensorDataFlags:(unsigned int)a0 completion:(id /* block */)a1;
- (void)subscribeWithSensorDataFlags:(unsigned int)a0 rate:(unsigned int)a1 completion:(id /* block */)a2;

@end
