@class NSData, ASRSchemaASRRecognitionMetrics;

@interface ASRSchemaASREnded : SISchemaInstrumentationMessage

@property (retain, nonatomic) ASRSchemaASRRecognitionMetrics *metrics;
@property (nonatomic) BOOL hasMetrics;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;

@end
