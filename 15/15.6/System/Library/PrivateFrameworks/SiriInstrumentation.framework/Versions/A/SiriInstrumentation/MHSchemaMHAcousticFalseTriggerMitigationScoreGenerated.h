@class NSData;

@interface MHSchemaMHAcousticFalseTriggerMitigationScoreGenerated : SISchemaInstrumentationMessage {
    struct { unsigned char score : 1; unsigned char audioDurationInNs : 1; unsigned char threshold : 1; } _has;
}

@property (nonatomic) float score;
@property (nonatomic) char hasScore;
@property (nonatomic) unsigned long long audioDurationInNs;
@property (nonatomic) char hasAudioDurationInNs;
@property (nonatomic) float threshold;
@property (nonatomic) char hasThreshold;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteThreshold;
- (void)deleteAudioDurationInNs;
- (void)deleteScore;
- (id)suppressMessageUnderConditions;

@end
