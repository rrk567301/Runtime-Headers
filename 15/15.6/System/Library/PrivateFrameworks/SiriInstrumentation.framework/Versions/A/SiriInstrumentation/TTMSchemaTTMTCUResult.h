@class NSData, SISchemaUUID;

@interface TTMSchemaTTMTCUResult : SISchemaInstrumentationMessage {
    struct { unsigned char decision : 1; unsigned char decisionSource : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *tcuId;
@property (nonatomic) char hasTcuId;
@property (nonatomic) int decision;
@property (nonatomic) char hasDecision;
@property (nonatomic) int decisionSource;
@property (nonatomic) char hasDecisionSource;
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
- (void)deleteDecision;
- (void)deleteDecisionSource;
- (void)deleteTcuId;
- (id)suppressMessageUnderConditions;

@end
