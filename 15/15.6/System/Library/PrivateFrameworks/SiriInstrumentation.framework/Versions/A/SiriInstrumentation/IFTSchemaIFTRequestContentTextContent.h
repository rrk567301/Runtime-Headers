@class NSData, IFTSchemaIFTStatementId, SISchemaUUID;

@interface IFTSchemaIFTRequestContentTextContent : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTStatementId *statementId;
@property (nonatomic) char hasStatementId;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) char hasLinkId;
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
- (void)deleteLinkId;
- (void)deleteStatementId;
- (id)suppressMessageUnderConditions;

@end
