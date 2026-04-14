@class NSString, NSDictionary, NSMutableSet, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, ACCExternalAccessoryProviderProtocol;

@interface ACCExternalAccessoryProvider : NSObject <ACCExternalAccessoryXPCClientProtocol>

@property (retain) NSXPCConnection *serverConnection;
@property int clientCapabilities;
@property (retain) NSDictionary *eaClientRegistrationInfo;
@property (retain) NSMutableSet *currentlyConnectedAccessories;
@property (retain) NSObject<OS_dispatch_queue> *connectionQueue;
@property BOOL isClientRegistered;
@property (weak, nonatomic) id<ACCExternalAccessoryProviderProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)accessoryDictionaryForLogging:(id)a0;

- (void)destinationInformation:(id)a0 forUUID:(id)a1;
- (void)handleIncomingNotification:(id)a0 withPayload:(id)a1 aboutAccessory:(id)a2;
- (void)_constructClientRegistrationInfo;
- (void)sendGPRMCDataStatus:(BOOL)a0 ValueV:(BOOL)a1 ValueX:(BOOL)a2 forAccessoryUUID:(id)a3;
- (id)_findAccessoryForPrimaryUUID:(id)a0;
- (void)startLocationInformationForAccessoryUUID:(id)a0;
- (void)_removeAllAccessories;
- (void)closeExternalAccessorySession:(id)a0;
- (void)resumeEASessionData:(id)a0;
- (void)_removeAccessoryForPrimaryUUID:(id)a0;
- (void)openSocketForAccessoryToApp:(id)a0;
- (void)createExternalAccessorySessionForProtocol:(id)a0 accessoryUUID:(id)a1 withEASessionReply:(id /* block */)a2;
- (void)connectToServer:(BOOL)a0;
- (void)accessoryCloseExternalAccessorySession:(id)a0;
- (void)openSocketForAppToAccessory:(id)a0;
- (BOOL)hasEAEntitlement;
- (void)_handleConnectionInvalidation;
- (void)stopLocationInformationForAccessoryUUID:(id)a0;
- (void)_handleConnectionInterruption;
- (void)sendOutgoingExternalAccessoryData:(id)a0 forEASessionIdentifier:(id)a1 withReply:(id /* block */)a2;
- (void)enqueueLocationNMEASentence:(id)a0 forUUID:(id)a1 withTimestamps:(id)a2;
- (void)handleIncomingExternalAccessoryData:(id)a0 forEASessionIdentifier:(id)a1 withReply:(id /* block */)a2;
- (void).cxx_destruct;
- (void)requestAccessoryWifiCredentials:(id)a0;
- (BOOL)hasEAProtocols;
- (void)sendNMEAFilterList:(id)a0 forAccessoryUUID:(id)a1;
- (void)sendWiredCarPlayAvailable:(id)a0 usbIdentifier:(id)a1 wirelessAvailable:(id)a2 bluetoothIdentifier:(id)a3 forUUID:(id)a4;
- (void)dealloc;
- (id)currentVehicleInfo:(id)a0;
- (id)_safeSynchronousRemoteObject;
- (id)initWithDelegate:(id)a0 capabilities:(int)a1;
- (void)updateAccessoryInfo:(id)a0 forUUID:(id)a1;
- (id)_safeRemoteObject;
- (void)startDestinationSharingForUUID:(id)a0 options:(unsigned long long)a1;
- (BOOL)hasEASandbox;
- (void)stopDestinationSharingForUUID:(id)a0;
- (void)ExternalAccessoryArrived:(id)a0;
- (void)ExternalAccessoryLeft:(id)a0;
- (void)vehicleStatusUpdate:(id)a0 forUUID:(id)a1;
- (void)destinationSharingStatus:(BOOL)a0 forDestinationUUID:(id)a1 supportedParams:(id)a2 forUUID:(id)a3;
- (void)sendDeviceIdentifierNotification:(id)a0 usbIdentifier:(id)a1 forUUID:(id)a2;

@end
