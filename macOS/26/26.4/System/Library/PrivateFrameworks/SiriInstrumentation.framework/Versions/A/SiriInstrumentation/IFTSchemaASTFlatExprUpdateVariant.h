@class NSArray, IFTSchemaIFTStatementId, NSData;

@interface IFTSchemaASTFlatExprUpdateVariant : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; unsigned char kind : 1; } _has;
}

@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL hasExists;
@property (retain, nonatomic) IFTSchemaIFTStatementId *lhs;
@property (nonatomic) BOOL hasLhs;
@property (copy, nonatomic) NSArray *paths;
@property (nonatomic) int kind;
@property (nonatomic) BOOL hasKind;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (void)deleteExists;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)addPath:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (unsigned long long)pathCount;
- (id)pathAtIndex:(unsigned long long)a0;
- (void)clearPath;
- (void)deleteKind;
- (void)deleteLhs;
- (void)deletePath;

@end
