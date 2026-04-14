@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MatterControllerFactory : NSObject

@property (readonly) struct CHIPPersistentStorageDelegateBridge { void /* function */ **x0; id x1; id x2; } *storageDelegateBridge;
@property (readonly) struct GroupDataProvider { void /* function */ **x0; unsigned short x1; unsigned short x2; struct GroupListener *x3; } *groupData;
@property (readonly) NSObject<OS_dispatch_queue> *chipWorkQueue;
@property (readonly) struct DeviceControllerFactory { unsigned short x0; struct DeviceControllerSystemState *x1; struct PersistentStorageDelegate *x2; BOOL x3; } *controllerFactory;
@property (readonly) struct CHIPPersistentStorageDelegateBridge { void /* function */ **x0; id x1; id x2; } *persistentStorageDelegateBridge;
@property (readonly) struct CHIPAttestationTrustStoreBridge { void /* function */ **x0; id x1; } *attestationTrustStoreBridge;
@property (readonly) void *groupStorageDelegate;
@property (readonly) void *groupDataProvider;
@property (readonly) NSMutableArray *controllers;
@property (readonly, nonatomic) BOOL isRunning;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)shutdown;
- (BOOL)startup:(id)a0;
- (BOOL)checkForInitError:(BOOL)a0 logMsg:(id)a1;
- (void)cleanupInitObjects;
- (void)cleanupStartupObjects;
- (id)createController;
- (void)controllerShuttingDown:(id)a0;
- (id)startControllerOnExistingFabric:(id)a0;
- (id)startControllerOnNewFabric:(id)a0;

@end
