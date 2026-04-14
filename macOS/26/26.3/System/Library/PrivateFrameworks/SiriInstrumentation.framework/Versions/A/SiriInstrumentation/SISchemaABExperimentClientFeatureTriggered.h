@class NSString, NSData, SISchemaUUID;

@interface SISchemaABExperimentClientFeatureTriggered : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *turnId;
@property (nonatomic) BOOL hasTurnId;
@property (copy, nonatomic) NSString *experimentId;
@property (nonatomic) BOOL hasExperimentId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteExperimentId;
- (void)deleteTurnId;

@end
