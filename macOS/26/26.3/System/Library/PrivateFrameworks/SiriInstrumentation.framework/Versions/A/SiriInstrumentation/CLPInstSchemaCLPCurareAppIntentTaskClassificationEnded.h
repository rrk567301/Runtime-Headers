@class NSData;

@interface CLPInstSchemaCLPCurareAppIntentTaskClassificationEnded : SISchemaInstrumentationMessage {
    struct { unsigned char sampleCount : 1; unsigned char classifiedSampleCount : 1; unsigned char positiveCount : 1; } _has;
}

@property (nonatomic) unsigned int sampleCount;
@property (nonatomic) BOOL hasSampleCount;
@property (nonatomic) unsigned int classifiedSampleCount;
@property (nonatomic) BOOL hasClassifiedSampleCount;
@property (nonatomic) unsigned int positiveCount;
@property (nonatomic) BOOL hasPositiveCount;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteClassifiedSampleCount;
- (void)deletePositiveCount;
- (void)deleteSampleCount;

@end
