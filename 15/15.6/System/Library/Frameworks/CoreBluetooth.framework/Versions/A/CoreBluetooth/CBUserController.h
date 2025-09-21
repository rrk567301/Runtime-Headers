@class NSXPCListenerEndpoint, NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface CBUserController : NSObject <CBStackUserController, CBActivatable, CBErrorReporting, CBInterruptable, CBUserControllerInterface> {
    char _activateCalled;
    id /* block */ _activateCompletion;
    char _invalidateCalled;
    char _invalidateDone;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
    NSXPCConnection *_xpcCnx;
}

@property (nonatomic) unsigned int clientID;
@property (retain, nonatomic) NSXPCListenerEndpoint *testListenerEndpoint;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)readPrefKeys:(id)a0 source:(unsigned int)a1 error:(id *)a2;
+ (char)writePrefKey:(id)a0 value:(id)a1 source:(unsigned int)a2 error:(id *)a3;

- (void)dealloc;
- (id)init;
- (void)_activate;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_invalidated;
- (void)activateWithCompletion:(id /* block */)a0;
- (char)_ensureXPCStarted;
- (void)_interrupted;
- (void)diagnosticShow:(id)a0 completion:(id /* block */)a1;
- (void)readPrefKeys:(id)a0 source:(unsigned int)a1 completion:(id /* block */)a2;
- (void)storeControllerInfo:(id)a0 completion:(id /* block */)a1;
- (void)_activateXPCStart:(char)a0;
- (void)appleAudioAccessoryLimitedLoggingWithCompletion:(id /* block */)a0;
- (void)deleteControllerInfoForDevice:(id)a0 completion:(id /* block */)a1;
- (void)getCloudPairedDevicesWithCompletionHandler:(id /* block */)a0;
- (void)getControllerInfoForDevice:(id)a0 completion:(id /* block */)a1;
- (void)getCurrentUserGivenNameWithCompletion:(id /* block */)a0;
- (void)getDistributedLoggingStatusWithCompletion:(id /* block */)a0;
- (void)recordEventWithDeviceIdentifier:(id)a0 initiator:(char)a1 starting:(char)a2 useCase:(unsigned int)a3;
- (void)recordEventWithStarting:(char)a0 useCase:(unsigned int)a1;
- (void)setAppleAudioAccessoryLimitedLogging:(char)a0 completion:(id /* block */)a1;
- (void)setDistributedLoggingStatus:(unsigned int)a0 completion:(id /* block */)a1;
- (void)writePrefKey:(id)a0 value:(id)a1 source:(unsigned int)a2 completion:(id /* block */)a3;

@end
