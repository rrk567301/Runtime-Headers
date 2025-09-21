@class NSData, SISchemaUUID;

@interface PNRODSchemaPNRODScheduleDebugSummary : SISchemaInstrumentationMessage {
    struct { unsigned char numRequestsRead : 1; unsigned char numRequestsWrite : 1; unsigned char processingWaitTimeInSecond : 1; unsigned char processingTimeInSecond : 1; unsigned char eventTimestampInMsSince1970 : 1; unsigned char delayFromLastBiomeBookmarkInSecond : 1; unsigned char failureReasonIndex : 1; unsigned char dataSourceIndex : 1; unsigned char workerIndex : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *scheduleId;
@property (nonatomic) char hasScheduleId;
@property (nonatomic) unsigned int numRequestsRead;
@property (nonatomic) char hasNumRequestsRead;
@property (nonatomic) unsigned int numRequestsWrite;
@property (nonatomic) char hasNumRequestsWrite;
@property (nonatomic) double processingWaitTimeInSecond;
@property (nonatomic) char hasProcessingWaitTimeInSecond;
@property (nonatomic) double processingTimeInSecond;
@property (nonatomic) char hasProcessingTimeInSecond;
@property (nonatomic) unsigned long long eventTimestampInMsSince1970;
@property (nonatomic) char hasEventTimestampInMsSince1970;
@property (nonatomic) double delayFromLastBiomeBookmarkInSecond;
@property (nonatomic) char hasDelayFromLastBiomeBookmarkInSecond;
@property (nonatomic) long long failureReasonIndex;
@property (nonatomic) char hasFailureReasonIndex;
@property (nonatomic) long long dataSourceIndex;
@property (nonatomic) char hasDataSourceIndex;
@property (nonatomic) long long workerIndex;
@property (nonatomic) char hasWorkerIndex;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteDataSourceIndex;
- (void)deleteDelayFromLastBiomeBookmarkInSecond;
- (void)deleteEventTimestampInMsSince1970;
- (void)deleteFailureReasonIndex;
- (void)deleteNumRequestsRead;
- (void)deleteNumRequestsWrite;
- (void)deleteProcessingTimeInSecond;
- (void)deleteProcessingWaitTimeInSecond;
- (void)deleteScheduleId;
- (void)deleteWorkerIndex;
- (id)suppressMessageUnderConditions;

@end
