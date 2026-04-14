@class NSXPCConnection, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HMServiceClient : NSObject <NSSecureCoding> {
    BOOL _activateCalled;
    id /* block */ _activateCompletion;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSMutableDictionary *_recordMap;
    NSXPCConnection *_xpcCnx;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int clientID;
@property (nonatomic) unsigned int internalFlags;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ deviceRecordChangedHandler;
@property (copy, nonatomic) id /* block */ deviceDiagnosticRecordFoundHandler;

- (id)description;
- (id)init;
- (void)_activate;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (void)_invalidated;
- (void)_interrupted;
- (void)activateWithCompletion:(id /* block */)a0;
- (id)_ensureXPCStarted;
- (void)_reportError:(id)a0;
- (BOOL)isSystemContext;
- (id)fetchHearingModeDeviceRecordForIdentifier:(id)a0;
- (void)modifyDeviceConfig:(id)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (void)clientHMDeviceDiagnosticRecordFound:(id)a0;
- (void)clientHMDeviceRecordChanged:(id)a0;
- (void)clientHMDeviceRecordLost:(id)a0;
- (void)triggerOnDemandDiagnosticCheckForDeviceIdentifier:(id)a0 completion:(id /* block */)a1;

@end
