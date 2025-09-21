@class NSString, MXVoiceTriggerInfo;

@interface MXAudioMetadata : PBCodable <NSCopying> {
    struct { unsigned char audioSource : 1; unsigned char codec : 1; unsigned char enableServerEndpoint : 1; unsigned char isFarField : 1; } _has;
}

@property (nonatomic) BOOL hasCodec;
@property (nonatomic) int codec;
@property (nonatomic) BOOL hasAudioSource;
@property (nonatomic) int audioSource;
@property (nonatomic) BOOL hasIsFarField;
@property (nonatomic) BOOL isFarField;
@property (readonly, nonatomic) BOOL hasVoiceTriggerInfo;
@property (retain, nonatomic) MXVoiceTriggerInfo *voiceTriggerInfo;
@property (nonatomic) BOOL hasEnableServerEndpoint;
@property (nonatomic) BOOL enableServerEndpoint;
@property (readonly, nonatomic) BOOL hasClientModelVersion;
@property (retain, nonatomic) NSString *clientModelVersion;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)StringAsAudioSource:(id)a0;
- (id)audioSourceAsString:(int)a0;
- (int)StringAsCodec:(id)a0;
- (id)codecAsString:(int)a0;

@end
