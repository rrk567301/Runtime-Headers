@class NSData, IFTSchemaIFTStatementId;

@interface IFTSchemaIFTRequestPrescribedPlanOpenTool : SISchemaInstrumentationMessage {
    struct { unsigned char elementAtIndex : 1; } _has;
}

@property (retain, nonatomic) IFTSchemaIFTStatementId *resultStatementId;
@property (nonatomic) char hasResultStatementId;
@property (nonatomic) long long elementAtIndex;
@property (nonatomic) char hasElementAtIndex;
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
- (void)deleteElementAtIndex;
- (void)deleteResultStatementId;
- (id)suppressMessageUnderConditions;

@end
