@class MTRDiagnosticLogsDownloader, NSArray, MTRServerEndpoint, MTRDeviceController, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, MTROTAProviderDelegate;

@interface MTRDeviceControllerFactory : NSObject {
    MTRServerEndpoint *_otaProviderEndpoint;
    struct unique_ptr<MTROTAProviderDelegateBridge, std::default_delete<MTROTAProviderDelegateBridge>> { struct __compressed_pair<MTROTAProviderDelegateBridge *, std::default_delete<MTROTAProviderDelegateBridge>> { struct MTROTAProviderDelegateBridge *__value_; } __ptr_; } _otaProviderDelegateBridge;
    BOOL _usingPerControllerStorage;
    MTRDeviceController *_controllerBeingStarted;
    MTRDeviceController *_controllerBeingShutDown;
    unsigned char _nextAvailableFabricIndex;
    NSMutableArray *_serverEndpoints;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _serverEndpointsLock;
}

@property (readonly) struct PersistentStorageDelegate { void /* function */ **x0; } *storageDelegate;
@property (readonly) struct GroupDataProvider { void /* function */ **x0; unsigned short x1; unsigned short x2; struct GroupListener *x3; } *groupData;
@property (readonly) NSObject<OS_dispatch_queue> *chipWorkQueue;
@property (readonly) struct DeviceControllerFactory { unsigned short x0; struct DeviceControllerSystemState *x1; struct PersistentStorageDelegate *x2; struct OperationalKeystore *x3; struct OperationalCertificateStore *x4; struct CertificateValidityPolicy *x5; struct SessionResumptionStorage *x6; BOOL x7; } *controllerFactory;
@property (readonly) struct PersistentStorageDelegate { void /* function */ **x0; } *persistentStorageDelegate;
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
@property (readonly, nonatomic) MTRDiagnosticLogsDownloader *diagnosticLogsDownloader;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly, nonatomic) NSArray *knownFabrics;

+ (void)initialize;
+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)checkIsRunning:(id *)a0;
- (void)_assertCurrentQueueIsNotMatterQueue;
- (struct ChipError { unsigned int x0; char *x1; unsigned int x2; })_initFabricTable:(void *)a0;
- (id)_startDeviceController:(id)a0 startupParams:(id)a1 fabricChecker:(id /* block */)a2 error:(id *)a3;
- (id)accessGrantsForFabricIndex:(unsigned char)a0 clusterPath:(id)a1;
- (BOOL)addServerEndpoint:(id)a0;
- (BOOL)checkForInitError:(BOOL)a0 logMsg:(id)a1;
- (void)cleanupInitObjects;
- (void)cleanupStartupObjects;
- (void)controllerShuttingDown:(id)a0;
- (id)createControllerOnExistingFabric:(id)a0 error:(id *)a1;
- (id)createControllerOnNewFabric:(id)a0 error:(id *)a1;
- (void)downloadLogFromNodeWithID:(id)a0 controller:(id)a1 type:(long long)a2 timeout:(double)a3 queue:(id)a4 completion:(id /* block */)a5;
- (BOOL)findMatchingFabric:(void *)a0 params:(id)a1 fabric:(const struct FabricInfo **)a2;
- (id)getRunningControllers;
- (id)initializeController:(id)a0 withParameters:(id)a1 error:(id *)a2;
- (id)maybeInitializeOTAProvider:(id)a0;
- (id)neededReadPrivilegeForClusterID:(id)a0 attributeID:(id)a1;
- (void)operationalInstanceAdded:(struct PeerId { unsigned long long x0; unsigned long long x1; } *)a0;
- (void)removeServerEndpoint:(id)a0;
- (void)resetOperationalAdvertising;
- (id)runningControllerForFabricIndex:(unsigned char)a0;
- (id)runningControllerForFabricIndex:(unsigned char)a0 includeControllerStartingUp:(BOOL)a1 includeControllerShuttingDown:(BOOL)a2;
- (BOOL)startControllerFactory:(id)a0 error:(id *)a1;
- (void)stopControllerFactory;

@end
