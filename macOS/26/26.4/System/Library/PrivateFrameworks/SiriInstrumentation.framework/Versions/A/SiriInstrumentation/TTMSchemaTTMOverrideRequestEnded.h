@class NSArray, SISchemaAsset, NSData;

@interface TTMSchemaTTMOverrideRequestEnded : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *results;
@property (retain, nonatomic) SISchemaAsset *asset;
@property (nonatomic) BOOL hasAsset;
@property (readonly, nonatomic) NSData *jsonData;

- (void)addResults:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)resultsAtIndex:(unsigned long long)a0;
- (unsigned long long)resultsCount;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)clearResults;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAsset;
- (void)deleteResults;

@end
