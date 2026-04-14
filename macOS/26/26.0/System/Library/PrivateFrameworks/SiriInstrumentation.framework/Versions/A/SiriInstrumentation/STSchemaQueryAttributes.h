@class NSArray, NSData;

@interface STSchemaQueryAttributes : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *quTokenParseInfos;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addQuTokenParseInfo:(id)a0;
- (void)clearQuTokenParseInfo;
- (void)deleteQuTokenParseInfo;
- (id)quTokenParseInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)quTokenParseInfoCount;

@end
