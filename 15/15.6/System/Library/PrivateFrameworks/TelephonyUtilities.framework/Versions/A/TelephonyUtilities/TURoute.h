@class NSArray, NSString;

@interface TURoute : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly, nonatomic) id /* block */ predicateForInEarAudioRoute;
@property (class, readonly, nonatomic) id /* block */ predicateForInEarRouteInTipiWithCompanionWatch;
@property (class, readonly, nonatomic) id /* block */ predicateForInEarRouteInTipiWithAndSmartRoutedToCompanionWatch;
@property (class, readonly, nonatomic) id /* block */ predicateForPreferredRoute;
@property (class, readonly) char supportsSecureCoding;

@property (nonatomic, getter=isA2DPRoute) char A2DPRoute;
@property (nonatomic, getter=isAirTunes) char airTunes;
@property (nonatomic, getter=isCarAudio) char carAudio;
@property (nonatomic, getter=isCurrentlyPicked) char currentlyPicked;
@property (nonatomic, getter=isBluetooth) char bluetooth;
@property (nonatomic) long long bluetoothEndpointType;
@property (nonatomic, getter=isBluetoothLE) char bluetoothLE;
@property (nonatomic, getter=isBluetoothManaged) char bluetoothManaged;
@property (nonatomic, getter=isDefaultRoute) char defaultRoute;
@property (nonatomic) long long deviceType;
@property (nonatomic, getter=isGuest) char guest;
@property (copy, nonatomic) NSArray *identifiersOfOtherConnectedDevices;
@property (nonatomic, getter=isInEarDetectionEnabled) char inEarDetectionEnabled;
@property (nonatomic, getter=isInEarDetectionSupported) char inEarDetectionSupported;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, getter=isPreferred) char preferred;
@property (nonatomic, getter=isPreferredAndActive) char preferredAndActive;
@property (nonatomic, getter=isReceiver) char receiver;
@property (nonatomic, getter=isSpeaker) char speaker;
@property (nonatomic) char supportsHighQualityVoiceWithMedia;
@property (nonatomic) char supportsRelay;
@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (nonatomic, getter=isWiredHeadphones) char wiredHeadphones;
@property (nonatomic, getter=isWiredHeadset) char wiredHeadset;
@property (nonatomic, getter=isWirelessHeadset) char wirelessHeadset;
@property (nonatomic, getter=isPartnerRouteRoutable) char partnerRouteRoutable;
@property (nonatomic, getter=isSiblingRoutePresent) char siblingRoutePresent;
@property (nonatomic) char supportsSharePlay;
@property (nonatomic, getter=isRecommended) char recommended;
@property (readonly, nonatomic, getter=isCarKitRoute) char carKitRoute;
@property (readonly, nonatomic, getter=isHomePodFamily) char homePodFamily;
@property (readonly, nonatomic) char isAirPodsRoute;
@property (readonly, nonatomic, getter=isInEarDetected) char inEarDetected;
@property (readonly, nonatomic) char supportsPreferredAndActive;
@property (readonly, nonatomic, getter=isTipiParticipant) char tipiParticipant;
@property (readonly, nonatomic, getter=isTriangleParticipant) char triangleParticipant;
@property (readonly, nonatomic, getter=isAuxiliary) char auxiliary;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToRoute:(id)a0;
- (id)initWithRoute:(id)a0;
- (id)initWithUniqueIdentifier:(id)a0 name:(id)a1;
- (id)customDescription;
- (char)isEqualToRouteIgnoringIsRecommended:(id)a0;

@end
