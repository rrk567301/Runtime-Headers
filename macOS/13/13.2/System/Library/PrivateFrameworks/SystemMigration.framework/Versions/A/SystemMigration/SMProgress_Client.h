@class SMSystem_Client, NSString, NSXPCConnection, NSXPCInterface, NSObject;
@protocol MigrationProgressEventsListener, SMDProgressProtocol;

@interface SMProgress_Client : NSObject <MigrationProgressEventsListener, SMSystemScannerClient, SMSystemScannerClientChangesProtocol>

@property (retain) NSXPCInterface *daemonInterface;
@property (retain) NSXPCInterface *exportedInterface;
@property (retain) NSXPCConnection *daemonConnection;
@property (retain) id<SMDProgressProtocol> daemonProxy;
@property (retain) SMSystem_Client *sourceSystem;
@property (retain) id sourceSystemID;
@property unsigned long long requestedClientScannerState;
@property BOOL toAnotherMac;
@property (retain) id observationContext;
@property BOOL hostingWirelessAP;
@property BOOL connectedToWirelessAP;
@property BOOL stoppedObserving;
@property (weak) NSObject<MigrationProgressEventsListener> *delegate;
@property (readonly) NSString *fasterInterfaceRecommendation;
@property (readonly) unsigned long long effectiveConnectionMethod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingFasterInterfaceRecommendation;
+ (id)progressEventsListenerInterface;
+ (id)keyPathsForValuesAffectingEffectiveConnectionMethod;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)stopObserving;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithDelegate:(id)a0;
- (void)tearDown;
- (void)connectToDaemon;
- (void)cancelCurrentRequest;
- (void)systemScannerAddedSystem:(id)a0;
- (void)systemScannerRemovedSystem:(id)a0;
- (void)systemScannerSystemChanged:(id)a0 onSystem:(id)a1;
- (void)cleanupAnyZombieTimeMachineDirectories;
- (void)getAllEstablishedConnections:(id *)a0;
- (void)getAllPossibleConnections:(id *)a0;
- (void)acknowledgeCompletedRequest;
- (void)userDeclinedSoftAP;
- (void)engineStartedWithRequestUUID:(id)a0 migrationType:(unsigned long long)a1;
- (void)engineProcessingText:(id)a0;
- (void)enginePercentDone:(id)a0;
- (void)engineMinutesRemaining:(id)a0 transferRate:(id)a1;
- (void)engineProgressUpdate:(id)a0;
- (void)migrationRequestCompletedState:(unsigned long long)a0 advancingTo:(unsigned long long)a1 withErrorsAndWarnings:(id)a2;
- (void)engineStatus:(id)a0 arguments:(id)a1;
- (BOOL)hasIncompatibleApps;
- (void)engineWillBecomeNonCancellable;
- (void)engineDidBecomeCancellable;
- (void)engineSetToAnotherMac:(BOOL)a0;
- (void)engineStateChanged:(unsigned long long)a0;
- (void)sourceMacInterfaceTypeChanged:(id)a0 type:(unsigned long long)a1 appropriateIcon:(unsigned long long)a2;
- (void)wirelessAccessPointCreated:(id)a0 password:(id)a1;
- (void)wirelessAccessPointDestroyed;
- (void)associatedWithWirelessNetwork:(BOOL)a0;
- (void)attemptingWirelessNetworkSwitch:(BOOL)a0 manual:(BOOL)a1;
- (BOOL)copiedUsers;
- (id)verifyAndCreateIAUserWithPassword:(id)a0;
- (BOOL)isEngineDoneWithRequestState:(unsigned long long *)a0 withErrorsAndWarnings:(id *)a1;
- (void)tryToObtainSourceSystem;
- (void)currentEngineState:(unsigned long long *)a0 requestType:(unsigned long long *)a1 andRequestState:(unsigned long long *)a2;
- (id)currentIncompatibleApps;
- (void)networkInterfacesAvailable:(id *)a0 currentInterface:(unsigned long long *)a1;

@end
