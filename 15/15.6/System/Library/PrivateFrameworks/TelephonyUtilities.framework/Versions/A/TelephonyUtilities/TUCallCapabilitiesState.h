@class NSString, NSDictionary, NSArray, TUCloudCallingDevice;

@interface TUCallCapabilitiesState : NSObject <NSSecureCoding, NSCopying, TUPubliclyAccessibleCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char supportsPrimaryCalling;
@property (nonatomic) char supportsBasebandCalling;
@property (nonatomic) char supportsCellularData;
@property (nonatomic) char supportsDisplayingTelephonyCalls;
@property (nonatomic) char supportsDisplayingFaceTimeAudioCalls;
@property (nonatomic) char supportsDisplayingFaceTimeVideoCalls;
@property (nonatomic, getter=isFaceTimeAudioAvailable) char faceTimeAudioAvailable;
@property (nonatomic, getter=isFaceTimeVideoAvailable) char faceTimeVideoAvailable;
@property (nonatomic, getter=areCTCapabilitiesValid) char ctCapabilitiesValid;
@property (nonatomic) char accountsMatchForSecondaryCalling;
@property (nonatomic) char accountsSupportSecondaryCalling;
@property (nonatomic) char supportsRelayCalling;
@property (nonatomic, getter=isRelayCallingEnabled) char relayCallingEnabled;
@property (nonatomic, getter=areRelayCallingFeaturesEnabled) char relayCallingFeaturesEnabled;
@property (nonatomic) int relayCallingAvailability;
@property (copy, nonatomic) NSDictionary *relayCallingDisabledForDeviceID;
@property (copy, nonatomic) NSString *outgoingRelayCallerID;
@property (nonatomic) char supportsTelephonyRelayCalling;
@property (nonatomic) char supportsFaceTimeAudioRelayCalling;
@property (nonatomic) char supportsFaceTimeVideoRelayCalling;
@property (copy, nonatomic) NSArray *cloudCallingDevices;
@property (readonly, nonatomic) TUCloudCallingDevice *defaultPairedDevice;
@property (nonatomic, getter=isEmergencyCallbackModeEnabled) char emergencyCallbackModeEnabled;
@property (nonatomic, getter=isEmergencyCallbackPossible) char emergencyCallbackPossible;
@property (copy, nonatomic) NSDictionary *senderIdentityCapabilitiesStateByUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)publiclyAccessibleCopyWithZone:(struct _NSZone { } *)a0;
- (id)publiclyAccessibleCopy;

@end
