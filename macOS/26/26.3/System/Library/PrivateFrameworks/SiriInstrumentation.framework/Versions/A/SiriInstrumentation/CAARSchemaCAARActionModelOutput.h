@class NSData, SISchemaUUID;

@interface CAARSchemaCAARActionModelOutput : SISchemaInstrumentationMessage {
    struct { unsigned char modelScore : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *actionCandidateId;
@property (nonatomic) BOOL hasActionCandidateId;
@property (nonatomic) float modelScore;
@property (nonatomic) BOOL hasModelScore;
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
- (void)deleteActionCandidateId;
- (void)deleteModelScore;

@end
