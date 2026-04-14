@class GRRSchemaGRRSource, NSArray, NSData;

@interface GRRSchemaGRRFeatureExtracted : SISchemaInstrumentationMessage

@property (retain, nonatomic) GRRSchemaGRRSource *source;
@property (nonatomic) BOOL hasSource;
@property (copy, nonatomic) NSArray *featureNames;
@property (copy, nonatomic) NSArray *features;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)featuresAtIndex:(unsigned long long)a0;
- (id)initWithJSON:(id)a0;
- (unsigned long long)featuresCount;
- (void)clearFeatures;
- (void)clearFeatureNames;
- (void)addFeatureNames:(id)a0;
- (void)addFeatures:(id)a0;
- (void)deleteSource;
- (void)deleteFeatureNames;
- (unsigned long long)featureNamesCount;
- (id)featureNamesAtIndex:(unsigned long long)a0;
- (void)deleteFeatures;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end
