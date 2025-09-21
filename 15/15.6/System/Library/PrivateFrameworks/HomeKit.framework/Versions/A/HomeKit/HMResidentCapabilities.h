@class NSString;

@interface HMResidentCapabilities : NSObject <HMResidentCapabilities>

@property (readonly, nonatomic) NSString *tag;
@property (readonly, nonatomic) struct _HMResidentCapabilitiesStruct { unsigned char supportsCameraRecording : 1; unsigned char supportsRouterManagement : 1; unsigned char supportsShortcutActions : 1; unsigned char supportsMediaActions : 1; unsigned char supportsCameraSignificantEventNotifications : 1; unsigned char supportsFirmwareUpdate : 1; unsigned char supportsResidentFirmwareUpdate : 1; unsigned char supportsCameraActivityZones : 1; unsigned char supportsFaceClassification : 1; unsigned char supportsNaturalLighting : 1; unsigned char supportsCameraRecordingReachabilityNotifications : 1; unsigned char supportsAnnounce : 1; unsigned char supportsWakeOnLAN : 1; unsigned char supportsLockNotificationContext : 1; unsigned char supportsWalletKey : 1; unsigned char supportsCameraPackageDetection : 1; unsigned char supportsAccessCodes : 1; unsigned char supportsCHIP : 1; unsigned char supportsThreadBorderRouter : 1; unsigned char supportsSiriEndpointSetup : 1; unsigned char supportsCustomMediaApplicationDestination : 1; unsigned char supportsUnifiedMediaNotifications : 1; unsigned char supportsHomeHub : 1; unsigned char supportsResidentFirstAccessoryCommunication : 1; unsigned char supportsThreadNetworkCredentialSharing : 1; unsigned char supportsMatterSharedAdminPairing : 1; unsigned char supportsEventLog : 1; unsigned char supportsMatterTTU : 1; unsigned char supportsDistributedExecutionOnPrimary : 1; unsigned char supportsResidentActionSetStateEvaluation : 1; unsigned char supportsUWB : 1; unsigned char supportsRestrictedGuest : 1; unsigned char supportsMatterOwnerCertFetch : 1; unsigned char supportsDistributedExecutionOnAppleMediaAccessories : 1; unsigned char supportsResidentSelection : 1; unsigned char supportsNativeMatter : 1; unsigned char supportsUWBUnlock : 1; unsigned char supportsNativeMatterPlugin : 1; } capabilities;
@property (readonly, nonatomic) char isResidentCapable;
@property (readonly, nonatomic) char supportsCameraRecording;
@property (readonly, nonatomic) char supportsRouterManagement;
@property (readonly, nonatomic) char supportsShortcutActions;
@property (readonly, nonatomic) char supportsMediaActions;
@property (readonly, nonatomic) char supportsCameraSignificantEventNotifications;
@property (readonly, nonatomic) char supportsFirmwareUpdate;
@property (readonly, nonatomic) char supportsResidentFirmwareUpdate;
@property (readonly, nonatomic) char supportsCameraActivityZones;
@property (readonly, nonatomic) char supportsFaceClassification;
@property (readonly, nonatomic) char supportsNaturalLighting;
@property (readonly, nonatomic) char supportsCameraRecordingReachabilityNotifications;
@property (readonly, nonatomic) char supportsAnnounce;
@property (readonly, nonatomic) char supportsWakeOnLAN;
@property (readonly, nonatomic) char supportsLockNotificationContext;
@property (readonly, nonatomic) char supportsWalletKey;
@property (readonly, nonatomic) char supportsCameraPackageDetection;
@property (readonly, nonatomic) char supportsAccessCodes;
@property (readonly, nonatomic) char supportsCHIP;
@property (readonly, nonatomic) char supportsThreadBorderRouter;
@property (readonly, nonatomic) char supportsSiriEndpointSetup;
@property (readonly, nonatomic) char supportsCustomMediaApplicationDestination;
@property (readonly, nonatomic) char supportsUnifiedMediaNotifications;
@property (readonly, nonatomic) char supportsHomeHub;
@property (readonly, nonatomic) char supportsResidentFirstAccessoryCommunication;
@property (readonly, nonatomic) char supportsThreadNetworkCredentialSharing;
@property (readonly, nonatomic) char supportsMatterSharedAdminPairing;
@property (readonly, nonatomic) char supportsEventLog;
@property (readonly, nonatomic) char supportsMatterTTU;
@property (readonly, nonatomic) char supportsDistributedExecutionOnPrimary;
@property (readonly, nonatomic) char supportsResidentActionSetStateEvaluation;
@property (readonly, nonatomic) char supportsUWB;
@property (readonly, nonatomic) char supportsRestrictedGuest;
@property (readonly, nonatomic) char supportsMatterOwnerCertFetch;
@property (readonly, nonatomic) char supportsDistributedExecutionOnAppleMediaAccessories;
@property (readonly, nonatomic) char supportsResidentSelection;
@property (readonly, nonatomic) char supportsNativeMatter;
@property (readonly, nonatomic) char supportsUWBUnlock;
@property (readonly, nonatomic) char supportsNativeMatterPlugin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithProtoCapabilities:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)initWithTagUUID:(id)a0 capabilities:(struct _HMResidentCapabilitiesStruct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 1; unsigned char x11 : 1; unsigned char x12 : 1; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; unsigned char x22 : 1; unsigned char x23 : 1; unsigned char x24 : 1; unsigned char x25 : 1; unsigned char x26 : 1; unsigned char x27 : 1; unsigned char x28 : 1; unsigned char x29 : 1; unsigned char x30 : 1; unsigned char x31 : 1; unsigned char x32 : 1; unsigned char x33 : 1; unsigned char x34 : 1; unsigned char x35 : 1; unsigned char x36 : 1; unsigned char x37 : 1; })a1;
- (char)isLocalEqual:(id)a0;
- (id)pbCapabilities;

@end
