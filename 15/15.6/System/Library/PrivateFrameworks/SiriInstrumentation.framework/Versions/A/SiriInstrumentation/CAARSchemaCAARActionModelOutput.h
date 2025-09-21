@class NSData, SISchemaUUID;

@interface CAARSchemaCAARActionModelOutput : SISchemaInstrumentationMessage {
    struct { unsigned char modelScore : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *actionCandidateId;
@property (nonatomic) char hasActionCandidateId;
@property (nonatomic) float modelScore;
@property (nonatomic) char hasModelScore;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteActionCandidateId;
- (void)deleteModelScore;
- (id)suppressMessageUnderConditions;

@end
