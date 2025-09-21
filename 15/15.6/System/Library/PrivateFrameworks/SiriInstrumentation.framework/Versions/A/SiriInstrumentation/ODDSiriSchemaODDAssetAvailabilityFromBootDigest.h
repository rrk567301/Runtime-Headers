@class ODDSiriSchemaODDAssetAvailabilityFromBootTuples, ODDSiriSchemaODDAssetAvailabilityFromBootDimensions, NSData;

@interface ODDSiriSchemaODDAssetAvailabilityFromBootDigest : SISchemaInstrumentationMessage

@property (retain, nonatomic) ODDSiriSchemaODDAssetAvailabilityFromBootDimensions *dimensions;
@property (nonatomic) char hasDimensions;
@property (retain, nonatomic) ODDSiriSchemaODDAssetAvailabilityFromBootTuples *tuples;
@property (nonatomic) char hasTuples;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteDimensions;
- (void)deleteTuples;
- (id)suppressMessageUnderConditions;

@end
