@class HAPAudioCodecSampleRateWrapper, HAPAudioCodecBitDepthWrapper, NSString, HAPTLVUnsignedNumberValue;

@interface HAPAudioStreamTier : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HAPTLVUnsignedNumberValue *identifier;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *targetAverageBitrate;
@property (retain, nonatomic) HAPAudioCodecSampleRateWrapper *sampleRate;
@property (retain, nonatomic) HAPAudioCodecBitDepthWrapper *bitDepth;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *packetTime;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *numberOfChannels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parsedFromData:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)parseFromData:(id)a0 error:(id *)a1;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)serializeWithError:(id *)a0;
- (id)initWithIdentifier:(id)a0 targetAverageBitrate:(id)a1 sampleRate:(id)a2 bitDepth:(id)a3 packetTime:(id)a4 numberOfChannels:(id)a5;

@end
