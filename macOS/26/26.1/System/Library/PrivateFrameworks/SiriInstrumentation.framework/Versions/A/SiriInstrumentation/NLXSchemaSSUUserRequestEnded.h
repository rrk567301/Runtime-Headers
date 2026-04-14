@class NSArray, NSData;

@interface NLXSchemaSSUUserRequestEnded : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *triggeredCacheEntryInfos;
@property (readonly, nonatomic) NSData *jsonData;

- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addTriggeredCacheEntryInfos:(id)a0;
- (void)clearTriggeredCacheEntryInfos;
- (void)deleteTriggeredCacheEntryInfos;
- (id)triggeredCacheEntryInfosAtIndex:(unsigned long long)a0;
- (unsigned long long)triggeredCacheEntryInfosCount;

@end
