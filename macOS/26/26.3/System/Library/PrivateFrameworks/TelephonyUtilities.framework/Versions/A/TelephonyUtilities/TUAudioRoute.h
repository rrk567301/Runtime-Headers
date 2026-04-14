@class NSString, NSDictionary;

@interface TUAudioRoute : TURoute

@property (readonly, copy, nonatomic) NSString *avAudioRouteName;
@property (readonly, copy, nonatomic) NSString *mxBluetoothProductIdentifier;
@property (readonly, nonatomic, getter=isHeadphoneJackConnected) BOOL headphoneJackConnected;
@property (copy, nonatomic) NSString *cachedModelIdentifier;
@property (nonatomic) BOOL modelIdentifierCached;
@property (readonly, copy, nonatomic) NSDictionary *route;

+ (BOOL)supportsSecureCoding;

- (BOOL)isSpeaker;
- (id)modelIdentifier;
- (id)customDescription;
- (BOOL)isBluetooth;
- (BOOL)isDefaultRoute;
- (BOOL)isWiredHeadphones;
- (BOOL)isPreferredAndActive;
- (BOOL)isPreferred;
- (BOOL)isWiredHeadset;
- (BOOL)isBluetoothManaged;
- (BOOL)supportsHighQualityVoiceWithMedia;
- (BOOL)isCarAudio;
- (BOOL)isAirTunes;
- (BOOL)isA2DPRoute;
- (BOOL)isSiblingRoutePresent;
- (BOOL)isReceiver;
- (BOOL)isPartnerRouteRoutable;
- (BOOL)supportsSharePlay;
- (BOOL)isHandset;
- (BOOL)isInEarDetectionEnabled;
- (id)identifiersOfOtherConnectedDevices;
- (BOOL)isWirelessHeadset;
- (BOOL)isCurrentlyPicked;
- (unsigned int)bluetoothProductIdentifierAsUInt32;
- (long long)deviceType;
- (BOOL)isBluetoothLE;
- (long long)bluetoothEndpointType;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)_routeTypeEqualTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isInEarDetectionSupported;
- (void)encodeWithCoder:(id)a0;

@end
