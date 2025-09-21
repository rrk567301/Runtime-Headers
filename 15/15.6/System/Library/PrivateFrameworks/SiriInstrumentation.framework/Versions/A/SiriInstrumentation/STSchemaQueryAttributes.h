@class NSArray, NSData;

@interface STSchemaQueryAttributes : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *quTokenParseInfos;
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
- (void)addQuTokenParseInfo:(id)a0;
- (void)clearQuTokenParseInfo;
- (void)deleteQuTokenParseInfo;
- (id)quTokenParseInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)quTokenParseInfoCount;
- (id)suppressMessageUnderConditions;

@end
