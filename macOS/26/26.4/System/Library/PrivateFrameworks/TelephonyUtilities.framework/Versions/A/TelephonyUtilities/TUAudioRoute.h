@class NSString, NSDictionary;

@interface TUAudioRoute : TURoute

@property (readonly, copy, nonatomic) NSString *avAudioRouteName;
@property (readonly, copy, nonatomic) NSString *mxBluetoothProductIdentifier;
@property (readonly, nonatomic, getter=isHeadphoneJackConnected) BOOL headphoneJackConnected;
@property (copy, nonatomic) NSString *cachedModelIdentifier;
@property (nonatomic) BOOL modelIdentifierCached;
@property (readonly, copy, nonatomic) NSDictionary *route;

+ (BOOL)supportsSecureCoding;

- (BOOL)isPreferredAndActive;
- (BOOL)isBluetoothManaged;
- (BOOL)isWiredHeadphones;
- (long long)deviceType;
- (id)initWithDictionary:(id)a0;
- (id)modelIdentifier;
- (BOOL)isHandset;
- (id)customDescription;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isWiredHeadset;
- (BOOL)isWirelessHeadset;
- (BOOL)isInEarDetectionSupported;
- (BOOL)isCarAudio;
- (BOOL)supportsHighQualityVoiceWithMedia;
- (BOOL)isSiblingRoutePresent;
- (void).cxx_destruct;
- (BOOL)isPreferred;
- (BOOL)isCurrentlyPicked;
- (BOOL)isBluetoothLE;
- (BOOL)isSpeaker;
- (long long)bluetoothEndpointType;
- (unsigned int)bluetoothProductIdentifierAsUInt32;
- (BOOL)isInEarDetectionEnabled;
- (id)initWithCoder:(id)a0;
- (BOOL)isBluetooth;
- (BOOL)isA2DPRoute;
- (BOOL)supportsSharePlay;
- (BOOL)isReceiver;
- (BOOL)isDefaultRoute;
- (BOOL)isPartnerRouteRoutable;
- (BOOL)isAirTunes;
- (id)identifiersOfOtherConnectedDevices;
- (BOOL)_routeTypeEqualTo:(id)a0;

@end
