@class NSData;

@interface MHSchemaMHUserEngagementFalseTriggerMitigationScoreGenerated : SISchemaInstrumentationMessage {
    struct { unsigned char uemScore : 1; unsigned char uemThreshold : 1; } _has;
}

@property (nonatomic) float uemScore;
@property (nonatomic) BOOL hasUemScore;
@property (nonatomic) float uemThreshold;
@property (nonatomic) BOOL hasUemThreshold;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteUemScore;
- (void)deleteUemThreshold;

@end
