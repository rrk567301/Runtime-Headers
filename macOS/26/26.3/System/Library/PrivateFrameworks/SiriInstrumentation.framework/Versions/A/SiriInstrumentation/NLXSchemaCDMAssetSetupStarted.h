@class NSArray, NSData;

@interface NLXSchemaCDMAssetSetupStarted : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *services;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addServices:(int)a0;
- (void)clearServices;
- (int)servicesAtIndex:(unsigned long long)a0;
- (unsigned long long)servicesCount;
- (void)deleteServices;

@end
