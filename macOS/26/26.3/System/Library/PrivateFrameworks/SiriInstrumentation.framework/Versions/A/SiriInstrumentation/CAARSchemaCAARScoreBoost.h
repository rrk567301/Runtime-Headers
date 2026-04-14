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

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (void)deleteReason;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteActionCandidateId;
- (void)deleteBoost;

@end
