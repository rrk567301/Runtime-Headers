@class NSSet;

@interface VCMediaNegotiationBlobV2MicrophoneSettingsU1 : PBCodable <NSCopying> {
    struct { unsigned char cipherSuites : 1; unsigned char payloads : 1; unsigned char rtpSSRC : 1; } _has;
}

@property (readonly, nonatomic) NSSet *audioPayloads;
@property (nonatomic) char hasRtpSSRC;
@property (nonatomic) unsigned int rtpSSRC;
@property (nonatomic) char hasPayloads;
@property (nonatomic) unsigned int payloads;
@property (nonatomic) char hasCipherSuites;
@property (nonatomic) int cipherSuites;

+ (int)flagFromPayload:(int)a0;
+ (int)payloadFromFlag:(int)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsCipherSuites:(id)a0;
- (unsigned int)payloadBitmapWithAudioPayloads:(id)a0;
- (id)cipherSuitesAsString:(int)a0;
- (id)initWithSSRC:(unsigned int)a0 audioPayloads:(id)a1 u1AuthTagEnabled:(char)a2;
- (void)printWithLogFile:(void *)a0 prefix:(id)a1;

@end
