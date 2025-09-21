@class NSArray, NSData;

@interface ODDSiriSchemaODDAssetAvailabilityFromBootTuples : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *bootToAssetDeliveryInMs;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (float)bootToAssetDeliveryInMsAtIndex:(unsigned long long)a0;
- (void)addBootToAssetDeliveryInMs:(float)a0;
- (unsigned long long)bootToAssetDeliveryInMsCount;
- (void)clearBootToAssetDeliveryInMs;
- (void)deleteBootToAssetDeliveryInMs;

@end
