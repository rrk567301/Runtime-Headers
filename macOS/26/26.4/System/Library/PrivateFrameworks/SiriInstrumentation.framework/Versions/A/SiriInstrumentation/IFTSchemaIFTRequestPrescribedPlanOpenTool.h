@class NSData, IFTSchemaIFTStatementId;

@interface IFTSchemaIFTRequestPrescribedPlanOpenTool : SISchemaInstrumentationMessage {
    struct { unsigned char elementAtIndex : 1; } _has;
}

@property (retain, nonatomic) IFTSchemaIFTStatementId *resultStatementId;
@property (nonatomic) BOOL hasResultStatementId;
@property (nonatomic) long long elementAtIndex;
@property (nonatomic) BOOL hasElementAtIndex;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteElementAtIndex;
- (void)deleteResultStatementId;

@end
