@class NSData, IFTSchemaASTPickType, SISchemaUUID;

@interface IFTSchemaASTFlatExprPickVariant : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; } _has;
}

@property (nonatomic) char exists;
@property (nonatomic) char hasExists;
@property (retain, nonatomic) SISchemaUUID *rawEventId;
@property (nonatomic) char hasRawEventId;
@property (retain, nonatomic) IFTSchemaASTPickType *pickType;
@property (nonatomic) char hasPickType;
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
- (void)deleteExists;
- (void)deletePickType;
- (void)deleteRawEventId;
- (id)suppressMessageUnderConditions;

@end
