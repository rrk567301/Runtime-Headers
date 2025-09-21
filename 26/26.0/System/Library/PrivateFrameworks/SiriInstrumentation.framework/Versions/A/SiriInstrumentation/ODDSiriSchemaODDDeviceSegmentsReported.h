@class NSArray, NSData;

@interface ODDSiriSchemaODDDeviceSegmentsReported : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *segments;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (void)addSegments:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)clearSegments;
- (void)deleteSegments;
- (id)segmentsAtIndex:(unsigned long long)a0;
- (unsigned long long)segmentsCount;

@end
