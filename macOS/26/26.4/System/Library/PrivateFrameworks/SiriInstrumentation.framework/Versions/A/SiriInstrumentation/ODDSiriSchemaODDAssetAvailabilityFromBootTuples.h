@class NSArray, NSData;

@interface ODDSiriSchemaODDAssetAvailabilityFromBootTuples : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *bootToAssetDeliveryInMs;
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
- (float)bootToAssetDeliveryInMsAtIndex:(unsigned long long)a0;
- (void)addBootToAssetDeliveryInMs:(float)a0;
- (unsigned long long)bootToAssetDeliveryInMsCount;
- (void)clearBootToAssetDeliveryInMs;
- (void)deleteBootToAssetDeliveryInMs;

@end
