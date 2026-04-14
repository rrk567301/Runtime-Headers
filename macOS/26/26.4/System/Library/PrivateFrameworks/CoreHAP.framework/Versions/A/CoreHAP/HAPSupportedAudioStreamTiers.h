@class HAPAudioCodecTypeWrapper, NSString, HAPTLVUnsignedNumberValue, NSMutableArray;

@interface HAPSupportedAudioStreamTiers : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HAPAudioCodecTypeWrapper *codec;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *payloadType;
@property (retain, nonatomic) NSMutableArray *tiers;
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
- (id)initWithCodec:(id)a0 payloadType:(id)a1 tiers:(id)a2;

@end
