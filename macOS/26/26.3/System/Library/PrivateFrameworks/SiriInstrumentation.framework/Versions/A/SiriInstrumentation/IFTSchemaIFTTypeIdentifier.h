@class IFTSchemaIFTPrimitive, IFTSchemaIFTCustom, NSData;

@interface IFTSchemaIFTTypeIdentifier : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTPrimitive *primitive;
@property (nonatomic) BOOL hasPrimitive;
@property (retain, nonatomic) IFTSchemaIFTCustom *custom;
@property (nonatomic) BOOL hasCustom;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOneof_Typeidentifier;

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
- (void)deletePrimitive;
- (void)deleteCustom;

@end
