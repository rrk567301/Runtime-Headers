@class NSData;

@interface ODDSiriSchemaODDExecutionMetadataReported : SISchemaInstrumentationMessage {
    struct { unsigned char extensionName : 1; unsigned char executionStatus : 1; unsigned char scheduleType : 1; } _has;
}

@property (nonatomic) int extensionName;
@property (nonatomic) BOOL hasExtensionName;
@property (nonatomic) int executionStatus;
@property (nonatomic) BOOL hasExecutionStatus;
@property (nonatomic) int scheduleType;
@property (nonatomic) BOOL hasScheduleType;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteExecutionStatus;
- (void)deleteExtensionName;
- (void)deleteScheduleType;

@end
