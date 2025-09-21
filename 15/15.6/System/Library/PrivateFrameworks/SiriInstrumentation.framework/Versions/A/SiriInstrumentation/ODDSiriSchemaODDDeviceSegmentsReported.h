@class NSArray, NSData;

@interface ODDSiriSchemaODDDeviceSegmentsReported : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *segments;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addSegments:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)clearSegments;
- (void)deleteSegments;
- (id)segmentsAtIndex:(unsigned long long)a0;
- (unsigned long long)segmentsCount;
- (id)suppressMessageUnderConditions;

@end
