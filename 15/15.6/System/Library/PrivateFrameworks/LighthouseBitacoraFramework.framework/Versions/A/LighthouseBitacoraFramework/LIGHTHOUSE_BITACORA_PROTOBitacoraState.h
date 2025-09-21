@class NSString, LIGHTHOUSE_BITACORA_PROTOLighthouseLedgerTrialIdentifiers;

@interface LIGHTHOUSE_BITACORA_PROTOBitacoraState : PBCodable <NSCopying> {
    struct { unsigned char countCustomTargetting : 1; unsigned char countCustomTargettingMet : 1; unsigned char countGeneralTargetting : 1; unsigned char countGeneralTargettingMet : 1; unsigned char countPerformTaskFailed : 1; unsigned char countPerformTaskSucceeded : 1; unsigned char countStopFailed : 1; unsigned char countStopSucceeded : 1; unsigned char countTaskCompletedFailed : 1; unsigned char countTaskCompletedSucceeded : 1; unsigned char countTaskFetchedFailed : 1; unsigned char countTaskFetchedSucceeded : 1; unsigned char countTaskScheduledFailed : 1; unsigned char countTaskScheduledSucceeded : 1; unsigned char trialIdentifierType : 1; unsigned char isActivated : 1; unsigned char isAllocated : 1; } _has;
}

@property (retain, nonatomic) NSString *telemetryID;
@property (retain, nonatomic) LIGHTHOUSE_BITACORA_PROTOLighthouseLedgerTrialIdentifiers *trialIdentifiers;
@property (retain, nonatomic) NSString *contextID;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasIsAllocated;
@property (nonatomic) char isAllocated;
@property (nonatomic) char hasIsActivated;
@property (nonatomic) char isActivated;
@property (nonatomic) char hasCountGeneralTargetting;
@property (nonatomic) unsigned int countGeneralTargetting;
@property (nonatomic) char hasCountGeneralTargettingMet;
@property (nonatomic) unsigned int countGeneralTargettingMet;
@property (nonatomic) char hasCountCustomTargetting;
@property (nonatomic) unsigned int countCustomTargetting;
@property (nonatomic) char hasCountCustomTargettingMet;
@property (nonatomic) unsigned int countCustomTargettingMet;
@property (nonatomic) char hasCountTaskFetchedSucceeded;
@property (nonatomic) unsigned int countTaskFetchedSucceeded;
@property (nonatomic) char hasCountTaskFetchedFailed;
@property (nonatomic) unsigned int countTaskFetchedFailed;
@property (nonatomic) char hasCountTaskScheduledSucceeded;
@property (nonatomic) unsigned int countTaskScheduledSucceeded;
@property (nonatomic) char hasCountTaskScheduledFailed;
@property (nonatomic) unsigned int countTaskScheduledFailed;
@property (nonatomic) char hasCountTaskCompletedSucceeded;
@property (nonatomic) unsigned int countTaskCompletedSucceeded;
@property (nonatomic) char hasCountTaskCompletedFailed;
@property (nonatomic) unsigned int countTaskCompletedFailed;
@property (nonatomic) char hasCountPerformTaskSucceeded;
@property (nonatomic) unsigned int countPerformTaskSucceeded;
@property (nonatomic) char hasCountPerformTaskFailed;
@property (nonatomic) unsigned int countPerformTaskFailed;
@property (nonatomic) char hasCountStopSucceeded;
@property (nonatomic) unsigned int countStopSucceeded;
@property (nonatomic) char hasCountStopFailed;
@property (nonatomic) unsigned int countStopFailed;
@property (nonatomic) char hasTrialIdentifierType;
@property (nonatomic) int trialIdentifierType;
@property (readonly, nonatomic) char hasTrialExperimentID;
@property (retain, nonatomic) NSString *trialExperimentID;
@property (readonly, nonatomic) char hasTrialDeploymentID;
@property (retain, nonatomic) NSString *trialDeploymentID;
@property (readonly, nonatomic) char hasTrialTreatmentID;
@property (retain, nonatomic) NSString *trialTreatmentID;
@property (readonly, nonatomic) char hasTrialTaskID;
@property (retain, nonatomic) NSString *trialTaskID;

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
- (int)StringAsTrialIdentifierType:(id)a0;
- (id)trialIdentifierTypeAsString:(int)a0;

@end
