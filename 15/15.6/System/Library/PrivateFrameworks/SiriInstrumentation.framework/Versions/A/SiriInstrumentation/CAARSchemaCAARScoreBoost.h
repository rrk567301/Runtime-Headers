@class NSString, NSData, SISchemaUUID;

@interface CAARSchemaCAARScoreBoost : SISchemaInstrumentationMessage {
    struct { unsigned char boost : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *actionCandidateId;
@property (nonatomic) char hasActionCandidateId;
@property (nonatomic) double boost;
@property (nonatomic) char hasBoost;
@property (copy, nonatomic) NSString *reason;
@property (nonatomic) char hasReason;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteReason;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteActionCandidateId;
- (void)deleteBoost;
- (id)suppressMessageUnderConditions;

@end
