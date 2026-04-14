@class NSArray, NSData;

@interface STSchemaQueryAttributes : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *quTokenParseInfos;
@property (readonly, nonatomic) NSData *jsonData;

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
- (void)addQuTokenParseInfo:(id)a0;
- (void)clearQuTokenParseInfo;
- (void)deleteQuTokenParseInfo;
- (id)quTokenParseInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)quTokenParseInfoCount;

@end
