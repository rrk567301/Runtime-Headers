@class NSData;

@interface MHSchemaMHUserEngagementFalseTriggerMitigationScoreGenerated : SISchemaInstrumentationMessage {
    struct { unsigned char uemScore : 1; unsigned char uemThreshold : 1; } _has;
}

@property (nonatomic) float uemScore;
@property (nonatomic) BOOL hasUemScore;
@property (nonatomic) float uemThreshold;
@property (nonatomic) BOOL hasUemThreshold;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteUemScore;
- (void)deleteUemThreshold;

@end
