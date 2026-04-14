@class NSArray, SISchemaAsset, NSData;

@interface TTMSchemaTTMOverrideRequestEnded : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *results;
@property (retain, nonatomic) SISchemaAsset *asset;
@property (nonatomic) BOOL hasAsset;
@property (readonly, nonatomic) NSData *jsonData;

- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)resultsAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)addResults:(id)a0;
- (id)suppressMessageUnderConditions;
- (unsigned long long)resultsCount;
- (id)initWithJSON:(id)a0;
- (void)clearResults;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteAsset;
- (void)deleteResults;

@end
