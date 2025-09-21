@class NSString, NSDictionary;

@interface TUAudioRoute : TURoute

@property (readonly, copy, nonatomic) NSString *avAudioRouteName;
@property (readonly, copy, nonatomic) NSString *bluetoothProductIdentifier;
@property (readonly, nonatomic, getter=isHeadphoneJackConnected) char headphoneJackConnected;
@property (readonly, copy, nonatomic) NSDictionary *route;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (long long)deviceType;
- (char)isDefaultRoute;
- (char)isInEarDetectionSupported;
- (char)isBluetooth;
- (char)isSpeaker;
- (char)_routeTypeEqualTo:(id)a0;
- (long long)bluetoothEndpointType;
- (id)customDescription;
- (id)identifiersOfOtherConnectedDevices;
- (char)isA2DPRoute;
- (char)isAirTunes;
- (char)isBluetoothLE;
- (char)isBluetoothManaged;
- (char)isCarAudio;
- (char)isCurrentlyPicked;
- (char)isHandset;
- (char)isInEarDetectionEnabled;
- (char)isPartnerRouteRoutable;
- (char)isPreferred;
- (char)isPreferredAndActive;
- (char)isReceiver;
- (char)isSiblingRoutePresent;
- (char)isWiredHeadphones;
- (char)isWiredHeadset;
- (char)isWirelessHeadset;
- (char)supportsHighQualityVoiceWithMedia;
- (char)supportsSharePlay;

@end
