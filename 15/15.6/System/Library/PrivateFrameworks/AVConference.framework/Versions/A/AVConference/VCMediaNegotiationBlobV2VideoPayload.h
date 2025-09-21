@class NSArray, NSData;

@interface VCMediaNegotiationBlobV2VideoPayload : PBCodable <NSCopying> {
    struct { unsigned char decodeFormats : 1; unsigned char encodeFormats : 1; unsigned char parameterSet : 1; unsigned char preferredDecodeFormat : 1; unsigned char videoPayload : 1; } _has;
}

@property (readonly, nonatomic) NSArray *encodeVideoRules;
@property (readonly, nonatomic) NSArray *decodeVideoRules;
@property (readonly, nonatomic) int payload;
@property (readonly, nonatomic) unsigned int videoParameterSupport;
@property (nonatomic) char hasVideoPayload;
@property (nonatomic) unsigned int videoPayload;
@property (nonatomic) char hasParameterSet;
@property (nonatomic) unsigned int parameterSet;
@property (nonatomic) char hasEncodeFormats;
@property (nonatomic) unsigned int encodeFormats;
@property (nonatomic) char hasDecodeFormats;
@property (nonatomic) unsigned int decodeFormats;
@property (readonly, nonatomic) char hasEncodeDecodeFeatures;
@property (retain, nonatomic) NSData *encodeDecodeFeatures;
@property (nonatomic) char hasPreferredDecodeFormat;
@property (nonatomic) unsigned int preferredDecodeFormat;

+ (int)payloadWithRTPPayload:(int)a0;
+ (int)rtpPayloadWithPayload:(int)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithPayload:(int)a0 encodeVideoRules:(id)a1 decodeVideoRules:(id)a2 videoParameterSupport:(unsigned int)a3 featureListStrings:(id)a4;
- (void)printWithLogFile:(void *)a0 prefix:(id)a1;
- (char)setupEncode:(char)a0 videoRules:(id)a1;
- (void)setupVideoParameterSupport:(unsigned int)a0;
- (id)videoRulesWithBitmap:(unsigned int)a0 preferredBitmap:(unsigned int)a1;

@end
