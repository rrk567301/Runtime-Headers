@class GRRSchemaGRRSource, NSArray, NSData;

@interface GRRSchemaGRRFeatureExtracted : SISchemaInstrumentationMessage

@property (retain, nonatomic) GRRSchemaGRRSource *source;
@property (nonatomic) BOOL hasSource;
@property (copy, nonatomic) NSArray *featureNames;
@property (copy, nonatomic) NSArray *features;
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
- (void)addFeatures:(id)a0;
- (id)featuresAtIndex:(unsigned long long)a0;
- (void)clearFeatures;
- (unsigned long long)featuresCount;
- (void)addFeatureNames:(id)a0;
- (void)clearFeatureNames;
- (void)deleteFeatureNames;
- (void)deleteFeatures;
- (void)deleteSource;
- (id)featureNamesAtIndex:(unsigned long long)a0;
- (unsigned long long)featureNamesCount;

@end
