@class NSData, IFTSchemaIFTTypeIdentifier, IFTSchemaIFTQuery;

@interface IFTSchemaIFTQueryValue : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTTypeIdentifier *typeIdentifier;
@property (nonatomic) char hasTypeIdentifier;
@property (retain, nonatomic) IFTSchemaIFTQuery *query;
@property (nonatomic) char hasQuery;
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
- (void)deleteQuery;
- (void)deleteTypeIdentifier;
- (id)suppressMessageUnderConditions;

@end
