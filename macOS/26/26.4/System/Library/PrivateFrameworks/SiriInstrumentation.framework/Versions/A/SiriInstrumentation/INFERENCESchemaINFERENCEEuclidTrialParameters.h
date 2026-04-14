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

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteEuclidAsrConfidenceThreshold;
- (void)deleteEuclidModelVersion;
- (void)deleteEuclidScoreThreshold;

@end
