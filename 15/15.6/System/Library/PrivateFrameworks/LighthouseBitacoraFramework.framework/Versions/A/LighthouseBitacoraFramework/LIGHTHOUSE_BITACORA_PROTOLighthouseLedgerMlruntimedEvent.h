@class LIGHTHOUSE_BITACORA_PROTOLighthouseLedgerTrialIdentifiers, NSString, LIGHTHOUSE_BITACORA_PROTOTaskEvent, LIGHTHOUSE_BITACORA_PROTOScheduleStatus;

@interface LIGHTHOUSE_BITACORA_PROTOLighthouseLedgerMlruntimedEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (readonly, nonatomic) char hasTrialIdentifiers;
@property (retain, nonatomic) LIGHTHOUSE_BITACORA_PROTOLighthouseLedgerTrialIdentifiers *trialIdentifiers;
@property (readonly, nonatomic) char hasContextID;
@property (retain, nonatomic) NSString *contextID;
@property (nonatomic) char hasTimestamp;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) char hasActivityScheduleStatus;
@property (retain, nonatomic) LIGHTHOUSE_BITACORA_PROTOScheduleStatus *activityScheduleStatus;
@property (readonly, nonatomic) char hasTaskFetched;
@property (retain, nonatomic) LIGHTHOUSE_BITACORA_PROTOTaskEvent *taskFetched;
@property (readonly, nonatomic) char hasTaskScheduled;
@property (retain, nonatomic) LIGHTHOUSE_BITACORA_PROTOTaskEvent *taskScheduled;
@property (readonly, nonatomic) char hasTaskCompleted;
@property (retain, nonatomic) LIGHTHOUSE_BITACORA_PROTOTaskEvent *taskCompleted;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
