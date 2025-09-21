@class NSData;

@interface MHSchemaMHUserEngagementFalseTriggerMitigationScoreGenerated : SISchemaInstrumentationMessage {
    struct { unsigned char uemScore : 1; unsigned char uemThreshold : 1; } _has;
}

@property (nonatomic) float uemScore;
@property (nonatomic) char hasUemScore;
@property (nonatomic) float uemThreshold;
@property (nonatomic) char hasUemThreshold;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteUemScore;
- (void)deleteUemThreshold;
- (id)suppressMessageUnderConditions;

@end
