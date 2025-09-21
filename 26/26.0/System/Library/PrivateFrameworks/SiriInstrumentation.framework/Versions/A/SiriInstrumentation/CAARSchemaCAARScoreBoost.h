@class NSString, NSData, SISchemaUUID;

@interface CAARSchemaCAARScoreBoost : SISchemaInstrumentationMessage {
    struct { unsigned char boost : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *actionCandidateId;
@property (nonatomic) BOOL hasActionCandidateId;
@property (nonatomic) double boost;
@property (nonatomic) BOOL hasBoost;
@property (copy, nonatomic) NSString *reason;
@property (nonatomic) BOOL hasReason;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (void)deleteReason;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteActionCandidateId;
- (void)deleteBoost;

@end
