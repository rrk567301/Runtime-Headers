@class IFTSchemaIFTCollectionValue, IFTSchemaIFTTypeIdentifier, NSData;

@interface IFTSchemaIFTTypeInstance : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTTypeIdentifier *typeIdentifier;
@property (nonatomic) BOOL hasTypeIdentifier;
@property (retain, nonatomic) IFTSchemaIFTCollectionValue *collection;
@property (nonatomic) BOOL hasCollection;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichItemtype;

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
- (void)deleteCollection;
- (void)deleteTypeIdentifier;

@end
