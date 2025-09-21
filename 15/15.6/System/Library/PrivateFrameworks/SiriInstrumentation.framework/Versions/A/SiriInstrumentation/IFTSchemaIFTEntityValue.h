@class IFTSchemaIFTDisplayRepresentation, IFTSchemaIFTTypeIdentifier, NSData;

@interface IFTSchemaIFTEntityValue : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTTypeIdentifier *typeIdentifier;
@property (nonatomic) char hasTypeIdentifier;
@property (retain, nonatomic) IFTSchemaIFTDisplayRepresentation *displayRepresentation;
@property (nonatomic) char hasDisplayRepresentation;
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
- (void)deleteDisplayRepresentation;
- (void)deleteTypeIdentifier;
- (id)suppressMessageUnderConditions;

@end
