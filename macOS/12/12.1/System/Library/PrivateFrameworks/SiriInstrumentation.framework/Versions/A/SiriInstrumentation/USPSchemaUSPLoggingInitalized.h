@class NSArray, NSData;

@interface USPSchemaUSPLoggingInitalized : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *sessionInfoItems;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addSessionInfoItems:(id)a0;
- (void)clearSessionInfoItems;
- (unsigned long long)sessionInfoItemsCount;
- (id)sessionInfoItemsAtIndex:(unsigned long long)a0;

@end
