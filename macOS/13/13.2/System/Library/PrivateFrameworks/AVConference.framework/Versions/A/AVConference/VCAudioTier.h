@class VCAudioPayloadConfig;

@interface VCAudioTier : NSObject {
    BOOL _bundlingAppliedByCodec;
}

@property (readonly) unsigned int networkBitrate;
@property (readonly) unsigned int audioCodecBitrate;
@property (readonly) unsigned int packetsPerBundle;
@property (readonly) unsigned int redNumPayloads;
@property (readonly) unsigned int redMaxDelay20ms;
@property (readonly) VCAudioPayloadConfig *payloadConfig;

+ (id)newAudioTierForPayloadConfig:(id)a0 bundlingAppliedByCodec:(BOOL)a1 audioCodecBitrate:(unsigned int)a2 packetsPerBundle:(unsigned int)a3 redNumPayloads:(unsigned int)a4 headerSize:(unsigned int)a5;
+ (BOOL)bundlingAppliedByCodecForPayload:(int)a0 mode:(int)a1;

- (id)description;
- (id)dictionary;
- (BOOL)isEqualTo:(id)a0;
- (id)initWithNetworkBitrate:(unsigned int)a0 bundlingAppliedByCodec:(BOOL)a1 audioCodecBitrate:(unsigned int)a2 packetsPerBundle:(unsigned int)a3 redNumPayloads:(unsigned int)a4 payloadConfig:(id)a5;

@end
