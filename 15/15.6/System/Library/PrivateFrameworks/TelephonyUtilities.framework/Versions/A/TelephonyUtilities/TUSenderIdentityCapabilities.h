@class NSString, TUCallCapabilitiesXPCClient, NSUUID, NSURL, TUCTCapabilityInfo, TUSenderIdentityCapabilitiesState, NSData;

@interface TUSenderIdentityCapabilities : NSObject

@property (readonly, copy, nonatomic) TUSenderIdentityCapabilitiesState *state;
@property (readonly, nonatomic) TUCallCapabilitiesXPCClient *client;
@property (readonly, nonatomic) TUCTCapabilityInfo *voLTECallingCapabilityInfo;
@property (readonly, nonatomic) TUCTCapabilityInfo *wiFiCallingCapabilityInfo;
@property (readonly, nonatomic) TUCTCapabilityInfo *thumperCallingCapabilityInfo;
@property (readonly, copy, nonatomic) NSUUID *senderIdentityUUID;
@property (readonly, nonatomic) char supportsSimultaneousVoiceAndData;
@property (readonly, nonatomic) char canAttemptTelephonyCallsWithoutCellularConnection;
@property (readonly, nonatomic) char canAttemptEmergencyCallsWithoutCellularConnection;
@property (readonly, nonatomic, getter=isCSCallingCurrentlyAvailable) char csCallingCurrentlyAvailable;
@property (readonly, nonatomic) char supportsVoLTECalling;
@property (readonly, nonatomic, getter=isVoLTECallingEnabled) char voLTECallingEnabled;
@property (readonly, nonatomic, getter=isVoLTECallingCurrentlyAvailable) char voLTECallingCurrentlyAvailable;
@property (readonly, nonatomic) char supportsWiFiCalling;
@property (readonly, nonatomic, getter=isWiFiCallingEnabled) char wiFiCallingEnabled;
@property (readonly, nonatomic) char supportsWiFiCallingRoaming;
@property (readonly, nonatomic, getter=isWiFiCallingRoamingEnabled) char wiFiCallingRoamingEnabled;
@property (readonly, nonatomic, getter=isWiFiCallingCurrentlyAvailable) char wiFiCallingCurrentlyAvailable;
@property (readonly, nonatomic) char supportsEmergencyWiFiCalling;
@property (readonly, nonatomic, getter=isEmergencyWiFiCallingCurrentlyAvailable) char emergencyWiFiCallingCurrentlyAvailable;
@property (readonly, nonatomic) int wiFiCallingProvisioningStatus;
@property (readonly, copy, nonatomic) NSURL *wiFiCallingProvisioningURL;
@property (readonly, nonatomic, getter=isWiFiCallingProvisioningURLInvalid) char wiFiCallingProvisioningURLInvalid;
@property (readonly, copy, nonatomic) NSData *wiFiCallingProvisioningPostData;
@property (readonly, nonatomic) char supportsThumperCalling;
@property (readonly, nonatomic, getter=isThumperCallingAllowedForCurrentDevice) char thumperCallingAllowedForCurrentDevice;
@property (readonly, nonatomic, getter=isThumperCallingEnabled) char thumperCallingEnabled;
@property (readonly, nonatomic, getter=isThumperCallingCurrentlyAvailable) char thumperCallingCurrentlyAvailable;
@property (readonly, nonatomic) char supportsThumperCallingOverCellularData;
@property (copy, nonatomic) NSString *thumperCallingLocalDeviceID;
@property (readonly, nonatomic) int thumperCallingProvisioningStatus;
@property (readonly, copy, nonatomic) NSURL *thumperCallingProvisioningURL;
@property (readonly, nonatomic, getter=isThumperCallingProvisioningURLInvalid) char thumperCallingProvisioningURLInvalid;
@property (readonly, copy, nonatomic) NSData *thumperCallingProvisioningPostData;
@property (readonly, nonatomic, getter=isThumperCallingAllowedOnDefaultPairedSecondaryDevice) char thumperCallingAllowedOnDefaultPairedSecondaryDevice;

- (id)debugDescription;
- (void).cxx_destruct;
- (void)_sendNotificationsAndCallbacksComparingToOldSenderIdentityCapabilities:(id)a0;
- (void)cancelPinRequestFromPrimaryDeviceForThumperCalling;
- (id)initWithSenderIdentityUUID:(id)a0 state:(id)a1 client:(id)a2;
- (void)invalidateAndRefreshThumperCallingProvisioningURL;
- (void)invalidateAndRefreshWiFiCallingProvisioningURL;
- (char)isThumperCallingAllowedOnSecondaryDeviceWithID:(id)a0;
- (void)requestPinFromPrimaryDeviceForThumperCalling;
- (void)setThumperCallingAllowed:(char)a0 onSecondaryDeviceWithID:(id)a1;
- (void)setThumperCallingAllowedOnDefaultPairedSecondaryDevice:(char)a0;
- (void)setThumperCallingEnabled:(char)a0;
- (void)setVoLTECallingEnabled:(char)a0;
- (void)setWiFiCallingEnabled:(char)a0;
- (void)setWiFiCallingRoamingEnabled:(char)a0;

@end
