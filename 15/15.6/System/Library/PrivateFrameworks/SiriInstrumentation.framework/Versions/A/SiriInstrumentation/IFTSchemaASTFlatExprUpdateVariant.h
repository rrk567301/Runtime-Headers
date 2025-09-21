@class NSArray, IFTSchemaIFTStatementId, NSData;

@interface IFTSchemaASTFlatExprUpdateVariant : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; unsigned char kind : 1; } _has;
}

@property (nonatomic) char exists;
@property (nonatomic) char hasExists;
@property (retain, nonatomic) IFTSchemaIFTStatementId *lhs;
@property (nonatomic) char hasLhs;
@property (copy, nonatomic) NSArray *paths;
@property (nonatomic) int kind;
@property (nonatomic) char hasKind;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addPath:(id)a0;
- (unsigned long long)pathCount;
- (id)initWithJSON:(id)a0;
- (id)pathAtIndex:(unsigned long long)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)clearPath;
- (void)deleteExists;
- (void)deleteKind;
- (void)deleteLhs;
- (void)deletePath;
- (id)suppressMessageUnderConditions;

@end
