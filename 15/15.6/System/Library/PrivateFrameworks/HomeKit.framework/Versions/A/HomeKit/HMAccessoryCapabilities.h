@class NSString;

@interface HMAccessoryCapabilities : NSObject <HMAccessoryCapabilities>

@property (readonly, nonatomic) NSString *tag;
@property (readonly, nonatomic) struct _HMAccessoryCapabilitiesStruct { unsigned char supportsKeychainSync : 1; unsigned char supportsDeviceSetup : 1; unsigned char supportsKeyTransferClient : 1; unsigned char supportsKeyTransferServer : 1; unsigned char supportsStandaloneMode : 1; unsigned char supportsCloudDataSync : 1; unsigned char supportsWholeHouseAudio : 1; unsigned char supportsAssistantAccessControl : 1; unsigned char supportsHomeInvitation : 1; unsigned char supportsTargetControl : 1; unsigned char supportsMultiUser : 1; unsigned char supportsHomeLevelLocationServiceSetting : 1; unsigned char supportsCompanionInitiatedRestart : 1; unsigned char supportsMusicAlarm : 1; unsigned char supportsAnnounce : 1; unsigned char supportsThirdPartyMusic : 1; unsigned char supportsPreferredMediaUser : 1; unsigned char supportsThreadBorderRouter : 1; unsigned char supportsDoorbellChime : 1; unsigned char supportsUserMediaSettings : 1; unsigned char supportsCoordinationDoorbellChime : 1; unsigned char supportsHomeHub : 1; unsigned char supportsAudioReturnChannel : 1; unsigned char supportsManagedConfigurationProfile : 1; unsigned char supportsMessagedHomePodSettings : 1; unsigned char supportsMediaActions : 1; unsigned char supportsRMVonAppleTV : 1; unsigned char supportsJustSiri : 1; unsigned char supportsInstallManagedConfigurationProfile : 1; unsigned char supportsCoordinationFreeDoorbellChime : 1; unsigned char supportsCompanionInitiatedObliterate : 1; unsigned char supportsLoreto : 1; unsigned char supportsTVOSUpdateManualUpdateAvailableNotification : 1; unsigned char supportsWiFiRepairV2 : 1; unsigned char supportsSoftwareUpdateV2 : 1; unsigned char supportsStereoOdeonTTSUBypassingPrimary : 1; } capabilities;
@property (readonly, nonatomic) char supportsKeychainSync;
@property (readonly, nonatomic) char supportsDeviceSetup;
@property (readonly, nonatomic) char supportsKeyTransferClient;
@property (readonly, nonatomic) char supportsKeyTransferServer;
@property (readonly, nonatomic) char supportsStandaloneMode;
@property (readonly, nonatomic) char supportsCloudDataSync;
@property (readonly, nonatomic) char supportsWholeHouseAudio;
@property (readonly, nonatomic) char supportsAssistantAccessControl;
@property (readonly, nonatomic) char supportsHomeInvitation;
@property (readonly, nonatomic) char supportsTargetControl;
@property (readonly, nonatomic) char supportsMultiUser;
@property (readonly, nonatomic) char supportsHomeLevelLocationServiceSetting;
@property (readonly, nonatomic) char supportsCompanionInitiatedRestart;
@property (readonly, nonatomic) char supportsMusicAlarm;
@property (readonly, nonatomic) char supportsAnnounce;
@property (readonly, nonatomic) char supportsThirdPartyMusic;
@property (readonly, nonatomic) char supportsPreferredMediaUser;
@property (readonly, nonatomic) char supportsThreadBorderRouter;
@property (readonly, nonatomic) char supportsDoorbellChime;
@property (readonly, nonatomic) char supportsUserMediaSettings;
@property (readonly, nonatomic) char supportsCoordinationDoorbellChime;
@property (readonly, nonatomic) char supportsHomeHub;
@property (readonly, nonatomic) char supportsAudioReturnChannel;
@property (readonly, nonatomic) char supportsManagedConfigurationProfile;
@property (readonly, nonatomic) char supportsMessagedHomePodSettings;
@property (readonly, nonatomic) char supportsMediaActions;
@property (readonly, nonatomic) char supportsRMVonAppleTV;
@property (readonly, nonatomic) char supportsJustSiri;
@property (readonly, nonatomic) char supportsInstallManagedConfigurationProfile;
@property (readonly, nonatomic) char supportsCoordinationFreeDoorbellChime;
@property (readonly, nonatomic) char supportsCompanionInitiatedObliterate;
@property (readonly, nonatomic) char supportsLoreto;
@property (readonly, nonatomic) char supportsTVOSUpdateManualUpdateAvailableNotification;
@property (readonly, nonatomic) char supportsWiFiRepairV2;
@property (readonly, nonatomic) char supportsSoftwareUpdateV2;
@property (readonly, nonatomic) char supportsStereoOdeonTTSUBypassingPrimary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithProtoCapabilities:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)initWithTagUUID:(id)a0 capabilities:(struct _HMAccessoryCapabilitiesStruct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 1; unsigned char x11 : 1; unsigned char x12 : 1; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; unsigned char x22 : 1; unsigned char x23 : 1; unsigned char x24 : 1; unsigned char x25 : 1; unsigned char x26 : 1; unsigned char x27 : 1; unsigned char x28 : 1; unsigned char x29 : 1; unsigned char x30 : 1; unsigned char x31 : 1; unsigned char x32 : 1; unsigned char x33 : 1; unsigned char x34 : 1; unsigned char x35 : 1; })a1;
- (char)isLocalEqual:(id)a0;
- (id)pbCapabilities;

@end
