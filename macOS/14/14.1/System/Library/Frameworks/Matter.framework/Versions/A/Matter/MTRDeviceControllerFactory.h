@class MTRDeviceController, NSArray, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, MTROTAProviderDelegate;

@interface MTRDeviceControllerFactory : NSObject {
    BOOL _usingPerControllerStorage;
    MTRDeviceController *_controllerBeingStarted;
    MTRDeviceController *_controllerBeingShutDown;
    unsigned char _nextAvailableFabricIndex;
}

@property (readonly) struct PersistentStorageDelegate { void /* function */ **x0; } *storageDelegate;
@property (readonly) struct GroupDataProvider { void /* function */ **x0; unsigned short x1; unsigned short x2; struct GroupListener *x3; } *groupData;
@property (readonly) NSObject<OS_dispatch_queue> *chipWorkQueue;
@property (readonly) struct DeviceControllerFactory { unsigned short x0; struct DeviceControllerSystemState *x1; struct PersistentStorageDelegate *x2; struct OperationalKeystore *x3; struct OperationalCertificateStore *x4; struct CertificateValidityPolicy *x5; struct SessionResumptionStorage *x6; BOOL x7; } *controllerFactory;
@property (readonly) struct PersistentStorageDelegate { void /* function */ **x0; } *persistentStorageDelegate;
@property (readonly) struct MTROTAProviderDelegateBridge { void /* function */ **x0; } *otaProviderDelegateBridge;
@property (readonly) struct RawKeySessionKeystore { void /* function */ **x0; } *sessionKeystore;
@property (readonly) void *groupStorageDelegate;
@property (readonly) void *groupDataProvider;
@property (readonly) NSMutableArray *controllers;
@property (readonly) struct PersistentStorageOperationalKeystore { void /* function */ **x0; struct PersistentStorageDelegate *x1; unsigned char x2; struct P256Keypair *x3; BOOL x4; BOOL x5; } *keystore;
@property (readonly) void *opCertStore;
@property (readonly) struct MTROperationalBrowser { id x0; id x1; struct _DNSServiceRef_t *x2; BOOL x3; BOOL x4; } *operationalBrowser;
@property (readonly) NSArray *productAttestationAuthorityCertificates;
@property (readonly) NSArray *certificationDeclarationCertificates;
@property (readonly) BOOL advertiseOperational;
@property (readonly, nonatomic) struct IgnoreCertificateValidityPeriodPolicy { void /* function */ **x0; } *certificateValidityPolicy;
@property (readonly) struct MTRSessionResumptionStorageBridge { void /* function */ **x0; id x1; } *sessionResumptionStorage;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } controllersLock;
@property (readonly, nonatomic) id<MTROTAProviderDelegate> otaProviderDelegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *otaProviderDelegateQueue;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly, nonatomic) NSArray *knownFabrics;

+ (void)initialize;
+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)checkIsRunning:(id *)a0;
- (void)_assertCurrentQueueIsNotMatterQueue;
- (id)_createController:(id)a0 storageDelegateQueue:(id)a1 otaProviderDelegate:(id)a2 otaProviderDelegateQueue:(id)a3 uniqueIdentifier:(id)a4;
- (struct ChipError { unsigned int x0; char *x1; unsigned int x2; })_initFabricTable:(void *)a0;
- (id)_startDeviceController:(id)a0 fabricChecker:(id /* block */)a1 error:(id *)a2;
- (BOOL)checkForInitError:(BOOL)a0 logMsg:(id)a1;
- (void)cleanupInitObjects;
- (void)cleanupStartupObjects;
- (void)controllerShuttingDown:(id)a0;
- (id)createController:(id)a0 error:(id *)a1;
- (id)createControllerOnExistingFabric:(id)a0 error:(id *)a1;
- (id)createControllerOnNewFabric:(id)a0 error:(id *)a1;
- (BOOL)findMatchingFabric:(void *)a0 params:(id)a1 fabric:(const struct FabricInfo **)a2;
- (id)getRunningControllers;
- (id)maybeInitializeOTAProvider:(id)a0;
- (void)operationalInstanceAdded:(struct PeerId { unsigned long long x0; unsigned long long x1; } *)a0;
- (id)runningControllerForFabricIndex:(unsigned char)a0;
- (id)runningControllerForFabricIndex:(unsigned char)a0 includeControllerStartingUp:(BOOL)a1 includeControllerShuttingDown:(BOOL)a2;
- (BOOL)startControllerFactory:(id)a0 error:(id *)a1;
- (void)stopControllerFactory;

@end
