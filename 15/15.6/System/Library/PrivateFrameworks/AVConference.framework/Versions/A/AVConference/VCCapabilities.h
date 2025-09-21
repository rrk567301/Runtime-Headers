@interface VCCapabilities : NSObject <NSCoding>

@property char isAudioEnabled;
@property char isAudioPausedToStart;
@property char isVideoEnabled;
@property char isVideoPausedToStart;
@property char isVideoSourceScreen;
@property char isDuplexVideoOnly;
@property char isDuplexAudioOnly;
@property char isHalfDuplexAudio;
@property char isKeyExchangeEnabled;
@property char isRelayEnabled;
@property char isRelayForced;
@property char requiresWifi;
@property char isDTLSEnabled;
@property unsigned int preferredAudioCodec;
@property unsigned int actualAudioCodec;
@property unsigned int preferredVideoCodec;
@property unsigned int actualVideoCodec;
@property int deviceRole;

+ (id)DataOnlyVCCapabilities;
+ (id)AudioOnlyVCCapabilities;
+ (id)VideoOnlyVCCapabilities;
+ (id)screenSharingVCCapabilities;

- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)decodeFromNSDictionary:(id)a0;
- (id)initWithEncodedDictionary:(id)a0;
- (id)newEncodedDictionary;

@end
