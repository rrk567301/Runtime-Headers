@class NSXPCConnection, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ASMInertialOdometryServices : NSObject <NSSecureCoding> {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSMutableDictionary *_inertialOdometryAvailabilityMap;
    NSXPCConnection *_xpcCnx;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int clientID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ inertialOdometryAvailabilityHandler;
@property (copy, nonatomic) id /* block */ inertialOdometryDataReceivedHandler;

- (id)_ensureXPCStarted;
- (void)encodeWithCoder:(id)a0;
- (void)_interrupted;
- (void)_invalidated;
- (void).cxx_destruct;
- (void)invalidate;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isSystemContext;
- (void)unsubscribeFromInertialOdometryAvailabilityChangeWithBtAddress:(id)a0;
- (void)subscribeToInertialOdometryData;
- (void)_clearInertialOdometryAvailabilityMap;
- (void)_recordInertialOdometryAvailability:(char)a0 forPeripheral:(id)a1;
- (void)inertialOdometryAvailabilityChanged:(char)a0 forPeripheral:(id)a1;
- (void)inertialOdometryDataReceived:(id)a0;
- (char)isInertialOdometryAvailableForPeripheral:(id)a0;
- (void)modifyPeripheralInertialOdometryWithBtAddress:(id)a0 config:(id)a1 completion:(id /* block */)a2;
- (void)modifyPeripheralInertialOdometryWithIdentifier:(id)a0 config:(id)a1 completion:(id /* block */)a2;
- (void)subscribeToInertialOdometryAvailabilityChangeWithBtAddress:(id)a0;
- (void)subscribeToInertialOdometryAvailabilityChangeWithIdentifier:(id)a0;
- (void)unsubscribeFromInertialOdometryAvailabilityChangeWithIdentifier:(id)a0;
- (void)unsubscribeFromInertialOdometryData;

@end
