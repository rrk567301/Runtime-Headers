@class NSString, NSData, SISchemaUUID;

@interface PEGASUSSchemaPEGASUSServerEventMetadata : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *pegasusId;
@property (nonatomic) char hasPegasusId;
@property (copy, nonatomic) NSString *resultCandidateId;
@property (nonatomic) char hasResultCandidateId;
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
- (void)deletePegasusId;
- (void)deleteResultCandidateId;
- (id)suppressMessageUnderConditions;

@end
