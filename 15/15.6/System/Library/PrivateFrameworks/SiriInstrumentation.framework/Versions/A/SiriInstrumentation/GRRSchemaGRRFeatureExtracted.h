@class GRRSchemaGRRSource, NSArray, NSData;

@interface GRRSchemaGRRFeatureExtracted : SISchemaInstrumentationMessage

@property (retain, nonatomic) GRRSchemaGRRSource *source;
@property (nonatomic) char hasSource;
@property (copy, nonatomic) NSArray *featureNames;
@property (copy, nonatomic) NSArray *features;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addFeatures:(id)a0;
- (id)featuresAtIndex:(unsigned long long)a0;
- (void)clearFeatures;
- (unsigned long long)featuresCount;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addFeatureNames:(id)a0;
- (void)clearFeatureNames;
- (void)deleteFeatureNames;
- (void)deleteFeatures;
- (void)deleteSource;
- (id)featureNamesAtIndex:(unsigned long long)a0;
- (unsigned long long)featureNamesCount;
- (id)suppressMessageUnderConditions;

@end
