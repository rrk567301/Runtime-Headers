@class NSString, NSData;

@interface INFERENCESchemaINFERENCEEuclidTrialParameters : SISchemaInstrumentationMessage {
    struct { unsigned char euclidScoreThreshold : 1; unsigned char euclidAsrConfidenceThreshold : 1; } _has;
}

@property (copy, nonatomic) NSString *euclidModelVersion;
@property (nonatomic) BOOL hasEuclidModelVersion;
@property (nonatomic) float euclidScoreThreshold;
@property (nonatomic) BOOL hasEuclidScoreThreshold;
@property (nonatomic) float euclidAsrConfidenceThreshold;
@property (nonatomic) BOOL hasEuclidAsrConfidenceThreshold;
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
- (void)deleteEuclidAsrConfidenceThreshold;
- (void)deleteEuclidModelVersion;
- (void)deleteEuclidScoreThreshold;

@end
