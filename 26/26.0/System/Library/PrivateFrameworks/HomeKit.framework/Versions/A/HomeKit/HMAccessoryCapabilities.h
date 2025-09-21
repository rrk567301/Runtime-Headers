@class NSString;

@interface HMAccessoryCapabilities : NSObject <HMAccessoryCapabilities>

@property (readonly, nonatomic) NSString *tag;
@property (readonly, nonatomic) struct _HMAccessoryCapabilitiesStruct { unsigned char supportsKeychainSync : 1; unsigned char supportsDeviceSetup : 1; unsigned char supportsKeyTransferClient : 1; unsigned char supportsKeyTransferServer : 1; unsigned char supportsStandaloneMode : 1; unsigned char supportsCloudDataSync : 1; unsigned char supportsWholeHouseAudio : 1; unsigned char supportsAssistantAccessControl : 1; unsigned char supportsHomeInvitation : 1; unsigned char supportsTargetControl : 1; unsigned char supportsMultiUser : 1; unsigned char supportsHomeLevelLocationServiceSetting : 1; unsigned char supportsCompanionInitiatedRestart : 1; unsigned char supportsMusicAlarm : 1; unsigned char supportsAnnounce : 1; unsigned char supportsThirdPartyMusic : 1; unsigned char supportsPreferredMediaUser : 1; unsigned char supportsThreadBorderRouter : 1; unsigned char supportsDoorbellChime : 1; unsigned char supportsUserMediaSettings : 1; unsigned char supportsCoordinationDoorbellChime : 1; unsigned char supportsHomeHub : 1; unsigned char supportsAudioReturnChannel : 1; unsigned char supportsManagedConfigurationProfile : 1; unsigned char supportsMessagedHomePodSettings : 1; unsigned char supportsMediaActions : 1; unsigned char supportsRMVonAppleTV : 1; unsigned char supportsJustSiri : 1; unsigned char supportsInstallManagedConfigurationProfile : 1; unsigned char supportsCoordinationFreeDoorbellChime : 1; unsigned char supportsCompanionInitiatedObliterate : 1; unsigned char supportsLoreto : 1; unsigned char supportsTVOSUpdateManualUpdateAvailableNotification : 1; unsigned char supportsWiFiRepairV2 : 1; unsigned char supportsSoftwareUpdateV2 : 1; unsigned char supportsStereoOdeonTTSUBypassingPrimary : 1; unsigned char supportsNetworkDiagnostics : 1; unsigned char supportsCrossfadeAsAirPlaySource : 1; unsigned char clearsKeychainWhenRemovedFromHome : 1; } capabilities;
@property (readonly, nonatomic) BOOL supportsKeychainSync;
@property (readonly, nonatomic) BOOL supportsDeviceSetup;
@property (readonly, nonatomic) BOOL supportsKeyTransferClient;
@property (readonly, nonatomic) BOOL supportsKeyTransferServer;
@property (readonly, nonatomic) BOOL supportsStandaloneMode;
@property (readonly, nonatomic) BOOL supportsCloudDataSync;
@property (readonly, nonatomic) BOOL supportsWholeHouseAudio;
@property (readonly, nonatomic) BOOL supportsAssistantAccessControl;
@property (readonly, nonatomic) BOOL supportsHomeInvitation;
@property (readonly, nonatomic) BOOL supportsTargetControl;
@property (readonly, nonatomic) BOOL supportsMultiUser;
@property (readonly, nonatomic) BOOL supportsHomeLevelLocationServiceSetting;
@property (readonly, nonatomic) BOOL supportsCompanionInitiatedRestart;
@property (readonly, nonatomic) BOOL supportsMusicAlarm;
@property (readonly, nonatomic) BOOL supportsAnnounce;
@property (readonly, nonatomic) BOOL supportsThirdPartyMusic;
@property (readonly, nonatomic) BOOL supportsPreferredMediaUser;
@property (readonly, nonatomic) BOOL supportsThreadBorderRouter;
@property (readonly, nonatomic) BOOL supportsDoorbellChime;
@property (readonly, nonatomic) BOOL supportsUserMediaSettings;
@property (readonly, nonatomic) BOOL supportsCoordinationDoorbellChime;
@property (readonly, nonatomic) BOOL supportsHomeHub;
@property (readonly, nonatomic) BOOL supportsAudioReturnChannel;
@property (readonly, nonatomic) BOOL supportsManagedConfigurationProfile;
@property (readonly, nonatomic) BOOL supportsMessagedHomePodSettings;
@property (readonly, nonatomic) BOOL supportsMediaActions;
@property (readonly, nonatomic) BOOL supportsRMVonAppleTV;
@property (readonly, nonatomic) BOOL supportsJustSiri;
@property (readonly, nonatomic) BOOL supportsInstallManagedConfigurationProfile;
@property (readonly, nonatomic) BOOL supportsCoordinationFreeDoorbellChime;
@property (readonly, nonatomic) BOOL supportsCompanionInitiatedObliterate;
@property (readonly, nonatomic) BOOL supportsLoreto;
@property (readonly, nonatomic) BOOL supportsTVOSUpdateManualUpdateAvailableNotification;
@property (readonly, nonatomic) BOOL supportsWiFiRepairV2;
@property (readonly, nonatomic) BOOL supportsSoftwareUpdateV2;
@property (readonly, nonatomic) BOOL supportsStereoOdeonTTSUBypassingPrimary;
@property (readonly, nonatomic) BOOL supportsNetworkDiagnostics;
@property (readonly, nonatomic) BOOL supportsCrossfadeAsAirPlaySource;
@property (readonly, nonatomic) BOOL clearsKeychainWhenRemovedFromHome;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProtoData:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithProtoCapabilities:(id)a0;
- (id)initWithTagUUID:(id)a0 capabilities:(struct _HMAccessoryCapabilitiesStruct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 1; unsigned char x11 : 1; unsigned char x12 : 1; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; unsigned char x22 : 1; unsigned char x23 : 1; unsigned char x24 : 1; unsigned char x25 : 1; unsigned char x26 : 1; unsigned char x27 : 1; unsigned char x28 : 1; unsigned char x29 : 1; unsigned char x30 : 1; unsigned char x31 : 1; unsigned char x32 : 1; unsigned char x33 : 1; unsigned char x34 : 1; unsigned char x35 : 1; unsigned char x36 : 1; unsigned char x37 : 1; unsigned char x38 : 1; })a1;
- (BOOL)isLocalEqual:(id)a0;
- (id)pbCapabilities;

@end
