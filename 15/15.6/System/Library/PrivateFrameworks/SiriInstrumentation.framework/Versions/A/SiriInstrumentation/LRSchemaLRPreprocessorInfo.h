@class NSData;

@interface LRSchemaLRPreprocessorInfo : SISchemaInstrumentationMessage {
    struct { unsigned char preProcessorTriggerTimeNanosecondsSinceBoot : 1; unsigned char bootSessionUUIDChanged : 1; unsigned char preProcessorTriggerReason : 1; } _has;
}

@property (nonatomic) unsigned long long preProcessorTriggerTimeNanosecondsSinceBoot;
@property (nonatomic) char hasPreProcessorTriggerTimeNanosecondsSinceBoot;
@property (nonatomic) char bootSessionUUIDChanged;
@property (nonatomic) char hasBootSessionUUIDChanged;
@property (nonatomic) int preProcessorTriggerReason;
@property (nonatomic) char hasPreProcessorTriggerReason;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deletePreProcessorTriggerReason;
- (void)deleteBootSessionUUIDChanged;
- (void)deletePreProcessorTriggerTimeNanosecondsSinceBoot;
- (id)suppressMessageUnderConditions;

@end
