@class NSString, NSData;

@interface POMMESSchemaPOMMESFunctionPerformanceProfile : SISchemaInstrumentationMessage {
    struct { unsigned char startTimeIntervalSince2001InMs : 1; unsigned char durationInMs : 1; unsigned char lineNumber : 1; } _has;
}

@property (nonatomic) double startTimeIntervalSince2001InMs;
@property (nonatomic) char hasStartTimeIntervalSince2001InMs;
@property (nonatomic) double durationInMs;
@property (nonatomic) char hasDurationInMs;
@property (copy, nonatomic) NSString *fileId;
@property (nonatomic) char hasFileId;
@property (nonatomic) int lineNumber;
@property (nonatomic) char hasLineNumber;
@property (copy, nonatomic) NSString *callingFunction;
@property (nonatomic) char hasCallingFunction;
@property (copy, nonatomic) NSString *measurementLabel;
@property (nonatomic) char hasMeasurementLabel;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCallingFunction;
- (void)deleteDurationInMs;
- (void)deleteFileId;
- (void)deleteLineNumber;
- (void)deleteMeasurementLabel;
- (void)deleteStartTimeIntervalSince2001InMs;
- (id)suppressMessageUnderConditions;

@end
