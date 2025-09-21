@class NSString, NSData, SISchemaUUID;

@interface HomeKitSchemaHKAccessoryOperationReported : SISchemaInstrumentationMessage {
    struct { unsigned char communicationProtocol : 1; unsigned char transportType : 1; unsigned char operationType : 1; unsigned char wasCached : 1; unsigned char wasLocal : 1; unsigned char wasRemoteAccessAllowed : 1; unsigned char wasResidentFirstEnabled : 1; unsigned char wasRapportSlow : 1; unsigned char residentFirstDuration : 1; unsigned char residentFirstErrorCode : 1; unsigned char totalDuration : 1; unsigned char finalErrorCode : 1; unsigned char consecutiveFailureCount : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *sharedMetricsId;
@property (nonatomic) char hasSharedMetricsId;
@property (copy, nonatomic) NSString *accessoryCategory;
@property (nonatomic) char hasAccessoryCategory;
@property (nonatomic) int communicationProtocol;
@property (nonatomic) char hasCommunicationProtocol;
@property (nonatomic) int transportType;
@property (nonatomic) char hasTransportType;
@property (nonatomic) int operationType;
@property (nonatomic) char hasOperationType;
@property (nonatomic) char wasCached;
@property (nonatomic) char hasWasCached;
@property (nonatomic) char wasLocal;
@property (nonatomic) char hasWasLocal;
@property (nonatomic) char wasRemoteAccessAllowed;
@property (nonatomic) char hasWasRemoteAccessAllowed;
@property (nonatomic) char wasResidentFirstEnabled;
@property (nonatomic) char hasWasResidentFirstEnabled;
@property (nonatomic) char wasRapportSlow;
@property (nonatomic) char hasWasRapportSlow;
@property (nonatomic) unsigned int residentFirstDuration;
@property (nonatomic) char hasResidentFirstDuration;
@property (copy, nonatomic) NSString *residentFirstErrorDomain;
@property (nonatomic) char hasResidentFirstErrorDomain;
@property (nonatomic) unsigned int residentFirstErrorCode;
@property (nonatomic) char hasResidentFirstErrorCode;
@property (nonatomic) unsigned int totalDuration;
@property (nonatomic) char hasTotalDuration;
@property (copy, nonatomic) NSString *finalErrorDomain;
@property (nonatomic) char hasFinalErrorDomain;
@property (nonatomic) unsigned int finalErrorCode;
@property (nonatomic) char hasFinalErrorCode;
@property (nonatomic) unsigned int consecutiveFailureCount;
@property (nonatomic) char hasConsecutiveFailureCount;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteWasCached;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteAccessoryCategory;
- (void)deleteCommunicationProtocol;
- (void)deleteConsecutiveFailureCount;
- (void)deleteFinalErrorCode;
- (void)deleteFinalErrorDomain;
- (void)deleteOperationType;
- (void)deleteResidentFirstDuration;
- (void)deleteResidentFirstErrorCode;
- (void)deleteResidentFirstErrorDomain;
- (void)deleteSharedMetricsId;
- (void)deleteTotalDuration;
- (void)deleteTransportType;
- (void)deleteWasLocal;
- (void)deleteWasRapportSlow;
- (void)deleteWasRemoteAccessAllowed;
- (void)deleteWasResidentFirstEnabled;
- (id)suppressMessageUnderConditions;

@end
