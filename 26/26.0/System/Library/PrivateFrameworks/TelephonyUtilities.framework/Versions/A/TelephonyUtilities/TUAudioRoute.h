@class NSString, NSDictionary;

@interface TUAudioRoute : TURoute

@property (readonly, copy, nonatomic) NSString *avAudioRouteName;
@property (readonly, copy, nonatomic) NSString *bluetoothProductIdentifier;
@property (readonly, nonatomic, getter=isHeadphoneJackConnected) BOOL headphoneJackConnected;
@property (readonly, copy, nonatomic) NSDictionary *route;

+ (BOOL)supportsSecureCoding;

- (BOOL)isCurrentlyPicked;
- (BOOL)isPreferred;
- (BOOL)isPreferredAndActive;
- (BOOL)isSpeaker;
- (id)identifiersOfOtherConnectedDevices;
- (long long)bluetoothEndpointType;
- (BOOL)isReceiver;
- (BOOL)isSiblingRoutePresent;
- (BOOL)isCarAudio;
- (id)customDescription;
- (BOOL)isWirelessHeadset;
- (BOOL)isWiredHeadset;
- (BOOL)isA2DPRoute;
- (BOOL)isBluetooth;
- (BOOL)supportsSharePlay;
- (BOOL)isInEarDetectionEnabled;
- (BOOL)isWiredHeadphones;
- (BOOL)isPartnerRouteRoutable;
- (BOOL)isDefaultRoute;
- (BOOL)isBluetoothManaged;
- (BOOL)isAirTunes;
- (id)initWithDictionary:(id)a0;
- (long long)deviceType;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_routeTypeEqualTo:(id)a0;
- (BOOL)isHandset;
- (BOOL)isBluetoothLE;
- (BOOL)supportsHighQualityVoiceWithMedia;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isInEarDetectionSupported;

@end
