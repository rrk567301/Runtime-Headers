@class NSString, NSDictionary;

@interface TUAudioRoute : TURoute

@property (readonly, copy, nonatomic) NSString *avAudioRouteName;
@property (readonly, copy, nonatomic) NSString *bluetoothProductIdentifier;
@property (readonly, nonatomic, getter=isHeadphoneJackConnected) BOOL headphoneJackConnected;
@property (readonly, copy, nonatomic) NSDictionary *route;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (long long)deviceType;
- (BOOL)isDefaultRoute;
- (BOOL)isInEarDetectionSupported;
- (BOOL)isBluetooth;
- (BOOL)isSpeaker;
- (BOOL)isA2DPRoute;
- (BOOL)isAirTunes;
- (long long)bluetoothEndpointType;
- (BOOL)isBluetoothLE;
- (BOOL)isBluetoothManaged;
- (BOOL)isCarAudio;
- (BOOL)isCurrentlyPicked;
- (id)identifiersOfOtherConnectedDevices;
- (BOOL)isInEarDetectionEnabled;
- (BOOL)isPreferred;
- (BOOL)isPreferredAndActive;
- (BOOL)isReceiver;
- (BOOL)supportsHighQualityVoiceWithMedia;
- (BOOL)isWiredHeadphones;
- (BOOL)isWiredHeadset;
- (BOOL)isWirelessHeadset;
- (BOOL)isPartnerRouteRoutable;
- (BOOL)isSiblingRoutePresent;
- (BOOL)supportsSharePlay;
- (id)customDescription;
- (BOOL)isHandset;
- (BOOL)_routeTypeEqualTo:(id)a0;

@end
