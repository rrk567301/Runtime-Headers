@class IFTSchemaIFTPrimitive, IFTSchemaIFTCustom, NSData;

@interface IFTSchemaIFTTypeIdentifier : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTPrimitive *primitive;
@property (nonatomic) char hasPrimitive;
@property (retain, nonatomic) IFTSchemaIFTCustom *custom;
@property (nonatomic) char hasCustom;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOneof_Typeidentifier;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deletePrimitive;
- (void)deleteCustom;
- (id)suppressMessageUnderConditions;

@end
