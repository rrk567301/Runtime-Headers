@class NSData;

@interface MHSchemaMHAcousticFalseTriggerMitigationScoreGenerated : SISchemaInstrumentationMessage {
    struct { unsigned char score : 1; unsigned char audioDurationInNs : 1; unsigned char threshold : 1; } _has;
}

@property (nonatomic) float score;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) unsigned long long audioDurationInNs;
@property (nonatomic) BOOL hasAudioDurationInNs;
@property (nonatomic) float threshold;
@property (nonatomic) BOOL hasThreshold;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteAudioDurationInNs;
- (void)deleteScore;
- (void)deleteThreshold;

@end
