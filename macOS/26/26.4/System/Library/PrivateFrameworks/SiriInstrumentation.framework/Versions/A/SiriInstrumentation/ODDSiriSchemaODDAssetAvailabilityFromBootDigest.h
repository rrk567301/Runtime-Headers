@class ODDSiriSchemaODDAssetAvailabilityFromBootTuples, ODDSiriSchemaODDAssetAvailabilityFromBootDimensions, NSData;

@interface ODDSiriSchemaODDAssetAvailabilityFromBootDigest : SISchemaInstrumentationMessage

@property (retain, nonatomic) ODDSiriSchemaODDAssetAvailabilityFromBootDimensions *dimensions;
@property (nonatomic) BOOL hasDimensions;
@property (retain, nonatomic) ODDSiriSchemaODDAssetAvailabilityFromBootTuples *tuples;
@property (nonatomic) BOOL hasTuples;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteDimensions;
- (void)deleteTuples;

@end
