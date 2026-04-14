@class NSData, IFTSchemaASTPickType, SISchemaUUID;

@interface IFTSchemaASTFlatExprPickVariant : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; } _has;
}

@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL hasExists;
@property (retain, nonatomic) SISchemaUUID *rawEventId;
@property (nonatomic) BOOL hasRawEventId;
@property (retain, nonatomic) IFTSchemaASTPickType *pickType;
@property (nonatomic) BOOL hasPickType;
@property (readonly, nonatomic) NSData *jsonData;

- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (void)deleteExists;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deletePickType;
- (void)deleteRawEventId;

@end
