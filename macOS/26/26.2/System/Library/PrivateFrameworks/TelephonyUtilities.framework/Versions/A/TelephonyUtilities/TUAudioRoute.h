@class NSString, NSDictionary;

@interface TUAudioRoute : TURoute

@property (readonly, copy, nonatomic) NSString *avAudioRouteName;
@property (readonly, copy, nonatomic) NSString *mxBluetoothProductIdentifier;
@property (readonly, nonatomic, getter=isHeadphoneJackConnected) BOOL headphoneJackConnected;
@property (copy, nonatomic) NSString *cachedModelIdentifier;
@property (nonatomic) BOOL modelIdentifierCached;
@property (readonly, copy, nonatomic) NSDictionary *route;

+ (BOOL)supportsSecureCoding;

- (id)customDescription;
- (BOOL)isPartnerRouteRoutable;
- (BOOL)isDefaultRoute;
- (BOOL)isBluetooth;
- (BOOL)isCurrentlyPicked;
- (BOOL)isWiredHeadphones;
- (BOOL)isWiredHeadset;
- (BOOL)isReceiver;
- (id)identifiersOfOtherConnectedDevices;
- (long long)bluetoothEndpointType;
- (BOOL)supportsSharePlay;
- (BOOL)isPreferred;
- (BOOL)isInEarDetectionSupported;
- (BOOL)isWirelessHeadset;
- (BOOL)isCarAudio;
- (BOOL)isA2DPRoute;
- (BOOL)isInEarDetectionEnabled;
- (BOOL)isPreferredAndActive;
- (BOOL)supportsHighQualityVoiceWithMedia;
- (BOOL)isSiblingRoutePresent;
- (id)initWithCoder:(id)a0;
- (long long)deviceType;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isBluetoothManaged;
- (id)modelIdentifier;
- (void).cxx_destruct;
- (BOOL)isSpeaker;
- (BOOL)isHandset;
- (BOOL)_routeTypeEqualTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isBluetoothLE;
- (BOOL)isAirTunes;
- (unsigned int)bluetoothProductIdentifierAsUInt32;

@end
