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
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteUemScore;
- (void)deleteUemThreshold;

@end
