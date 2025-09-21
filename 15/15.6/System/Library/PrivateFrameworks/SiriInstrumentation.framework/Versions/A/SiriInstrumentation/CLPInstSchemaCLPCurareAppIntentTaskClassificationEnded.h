@class NSData;

@interface CLPInstSchemaCLPCurareAppIntentTaskClassificationEnded : SISchemaInstrumentationMessage {
    struct { unsigned char sampleCount : 1; unsigned char classifiedSampleCount : 1; unsigned char positiveCount : 1; } _has;
}

@property (nonatomic) unsigned int sampleCount;
@property (nonatomic) char hasSampleCount;
@property (nonatomic) unsigned int classifiedSampleCount;
@property (nonatomic) char hasClassifiedSampleCount;
@property (nonatomic) unsigned int positiveCount;
@property (nonatomic) char hasPositiveCount;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteClassifiedSampleCount;
- (void)deletePositiveCount;
- (void)deleteSampleCount;
- (id)suppressMessageUnderConditions;

@end
