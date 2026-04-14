@class IFTSchemaIFTDisplayRepresentation, IFTSchemaIFTTypeIdentifier, NSData;

@interface IFTSchemaIFTEntityValue : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTTypeIdentifier *typeIdentifier;
@property (nonatomic) BOOL hasTypeIdentifier;
@property (retain, nonatomic) IFTSchemaIFTDisplayRepresentation *displayRepresentation;
@property (nonatomic) BOOL hasDisplayRepresentation;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteDisplayRepresentation;
- (void)deleteTypeIdentifier;

@end
