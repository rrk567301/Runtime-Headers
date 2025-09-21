@class NSString, MXVoiceTriggerInfo;

@interface MXAudioMetadata : PBCodable <NSCopying> {
    struct { unsigned char audioSource : 1; unsigned char codec : 1; unsigned char enableServerEndpoint : 1; unsigned char isFarField : 1; } _has;
}

@property (nonatomic) char hasCodec;
@property (nonatomic) int codec;
@property (nonatomic) char hasAudioSource;
@property (nonatomic) int audioSource;
@property (nonatomic) char hasIsFarField;
@property (nonatomic) char isFarField;
@property (readonly, nonatomic) char hasVoiceTriggerInfo;
@property (retain, nonatomic) MXVoiceTriggerInfo *voiceTriggerInfo;
@property (nonatomic) char hasEnableServerEndpoint;
@property (nonatomic) char enableServerEndpoint;
@property (readonly, nonatomic) char hasClientModelVersion;
@property (retain, nonatomic) NSString *clientModelVersion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsAudioSource:(id)a0;
- (id)audioSourceAsString:(int)a0;
- (int)StringAsCodec:(id)a0;
- (id)codecAsString:(int)a0;

@end
