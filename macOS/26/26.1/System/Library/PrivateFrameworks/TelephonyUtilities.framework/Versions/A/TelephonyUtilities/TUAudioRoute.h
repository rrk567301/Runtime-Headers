@class NSString, NSDictionary;

@interface TUAudioRoute : TURoute

@property (readonly, copy, nonatomic) NSString *avAudioRouteName;
@property (readonly, copy, nonatomic) NSString *mxBluetoothProductIdentifier;
@property (readonly, nonatomic, getter=isHeadphoneJackConnected) BOOL headphoneJackConnected;
@property (copy, nonatomic) NSString *cachedModelIdentifier;
@property (nonatomic) BOOL modelIdentifierCached;
@property (readonly, copy, nonatomic) NSDictionary *route;

+ (BOOL)supportsSecureCoding;

- (BOOL)isBluetoothLE;
- (id)modelIdentifier;
- (BOOL)isCarAudio;
- (BOOL)isPreferred;
- (BOOL)supportsSharePlay;
- (BOOL)isWiredHeadphones;
- (BOOL)isReceiver;
- (id)identifiersOfOtherConnectedDevices;
- (BOOL)isInEarDetectionSupported;
- (id)customDescription;
- (long long)deviceType;
- (BOOL)isBluetooth;
- (BOOL)isPreferredAndActive;
- (BOOL)isBluetoothManaged;
- (BOOL)isDefaultRoute;
- (BOOL)_routeTypeEqualTo:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isWiredHeadset;
- (BOOL)isSpeaker;
- (BOOL)isAirTunes;
- (BOOL)isWirelessHeadset;
- (BOOL)isCurrentlyPicked;
- (id)initWithDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned int)bluetoothProductIdentifierAsUInt32;
- (void).cxx_destruct;
- (BOOL)isSiblingRoutePresent;
- (BOOL)supportsHighQualityVoiceWithMedia;
- (BOOL)isPartnerRouteRoutable;
- (long long)bluetoothEndpointType;
- (BOOL)isA2DPRoute;
- (BOOL)isInEarDetectionEnabled;
- (BOOL)isHandset;

@end
