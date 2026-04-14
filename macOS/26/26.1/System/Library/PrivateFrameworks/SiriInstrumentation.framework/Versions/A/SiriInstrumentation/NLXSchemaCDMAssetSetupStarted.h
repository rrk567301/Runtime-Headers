@class NSArray, NSData;

@interface NLXSchemaCDMAssetSetupStarted : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *services;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addServices:(int)a0;
- (void)clearServices;
- (int)servicesAtIndex:(unsigned long long)a0;
- (unsigned long long)servicesCount;
- (void)deleteServices;

@end
