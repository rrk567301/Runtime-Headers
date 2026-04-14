@class NSString, NSData;

@interface POMMESSchemaPOMMESFunctionPerformanceProfile : SISchemaInstrumentationMessage {
    struct { unsigned char startTimeIntervalSince2001InMs : 1; unsigned char durationInMs : 1; unsigned char lineNumber : 1; } _has;
}

@property (nonatomic) double startTimeIntervalSince2001InMs;
@property (nonatomic) BOOL hasStartTimeIntervalSince2001InMs;
@property (nonatomic) double durationInMs;
@property (nonatomic) BOOL hasDurationInMs;
@property (copy, nonatomic) NSString *fileId;
@property (nonatomic) BOOL hasFileId;
@property (nonatomic) int lineNumber;
@property (nonatomic) BOOL hasLineNumber;
@property (copy, nonatomic) NSString *callingFunction;
@property (nonatomic) BOOL hasCallingFunction;
@property (copy, nonatomic) NSString *measurementLabel;
@property (nonatomic) BOOL hasMeasurementLabel;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteDurationInMs;
- (void)deleteStartTimeIntervalSince2001InMs;
- (void)deleteFileId;
- (void)deleteLineNumber;
- (void)deleteCallingFunction;
- (void)deleteMeasurementLabel;
- (id)suppressMessageUnderConditions;

@end
