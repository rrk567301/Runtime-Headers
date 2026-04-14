@class ODDSiriSchemaODDAssetAvailabilityFromBootTuples, ODDSiriSchemaODDAssetAvailabilityFromBootDimensions, NSData;

@interface ODDSiriSchemaODDAssetAvailabilityFromBootDigest : SISchemaInstrumentationMessage

@property (retain, nonatomic) ODDSiriSchemaODDAssetAvailabilityFromBootDimensions *dimensions;
@property (nonatomic) BOOL hasDimensions;
@property (retain, nonatomic) ODDSiriSchemaODDAssetAvailabilityFromBootTuples *tuples;
@property (nonatomic) BOOL hasTuples;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteDimensions;
- (void)deleteTuples;

@end
