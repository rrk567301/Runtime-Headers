@class NSString, NSData;

@interface INFERENCESchemaINFERENCEEuclidTrialParameters : SISchemaInstrumentationMessage {
    struct { unsigned char euclidScoreThreshold : 1; unsigned char euclidAsrConfidenceThreshold : 1; } _has;
}

@property (copy, nonatomic) NSString *euclidModelVersion;
@property (nonatomic) char hasEuclidModelVersion;
@property (nonatomic) float euclidScoreThreshold;
@property (nonatomic) char hasEuclidScoreThreshold;
@property (nonatomic) float euclidAsrConfidenceThreshold;
@property (nonatomic) char hasEuclidAsrConfidenceThreshold;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteEuclidAsrConfidenceThreshold;
- (void)deleteEuclidModelVersion;
- (void)deleteEuclidScoreThreshold;
- (id)suppressMessageUnderConditions;

@end
