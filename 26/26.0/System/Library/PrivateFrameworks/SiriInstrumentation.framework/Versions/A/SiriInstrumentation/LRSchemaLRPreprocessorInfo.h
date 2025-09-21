@class NSData;

@interface LRSchemaLRPreprocessorInfo : SISchemaInstrumentationMessage {
    struct { unsigned char preProcessorTriggerTimeNanosecondsSinceBoot : 1; unsigned char bootSessionUUIDChanged : 1; unsigned char preProcessorTriggerReason : 1; } _has;
}

@property (nonatomic) unsigned long long preProcessorTriggerTimeNanosecondsSinceBoot;
@property (nonatomic) BOOL hasPreProcessorTriggerTimeNanosecondsSinceBoot;
@property (nonatomic) BOOL bootSessionUUIDChanged;
@property (nonatomic) BOOL hasBootSessionUUIDChanged;
@property (nonatomic) int preProcessorTriggerReason;
@property (nonatomic) BOOL hasPreProcessorTriggerReason;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deletePreProcessorTriggerReason;
- (void)deleteBootSessionUUIDChanged;
- (void)deletePreProcessorTriggerTimeNanosecondsSinceBoot;

@end
