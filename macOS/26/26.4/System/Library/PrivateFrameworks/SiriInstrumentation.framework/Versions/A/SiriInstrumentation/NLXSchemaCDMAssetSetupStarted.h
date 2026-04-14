@class NSArray, NSData;

@interface NLXSchemaCDMAssetSetupStarted : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *services;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addServices:(int)a0;
- (void)clearServices;
- (int)servicesAtIndex:(unsigned long long)a0;
- (unsigned long long)servicesCount;
- (void)deleteServices;

@end
