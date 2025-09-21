@class INFERENCESchemaINFERENCECommsAppSelectionTrainingContactDependentSignals, INFERENCESchemaINFERENCECommsAppSelectionTrainingAppDependentPhoneCallSignals, INFERENCESchemaINFERENCECommsAppSelectionTrainingAppDependentMessageSignals, NSData;

@interface INFERENCESchemaINFERENCECommsAppSelectionTrainingAppDependentSignals : SISchemaInstrumentationMessage {
    struct { unsigned char isResolvedApp : 1; unsigned char isResolvedContactInApp : 1; unsigned char appTimeSpentAffinityScore : 1; unsigned char isForegroundApp : 1; unsigned char timeSinceAppLastLaunchedInSec : 1; unsigned char isFirstPartyApp : 1; unsigned char appTimeSpentInSec : 1; unsigned char timeSinceAppContactLastLaunchedInSec : 1; unsigned char isDefaultApp : 1; unsigned char isRequestByLabel : 1; unsigned char isRequestByHandleType : 1; } _has;
}

@property (nonatomic) BOOL isResolvedApp;
@property (nonatomic) BOOL hasIsResolvedApp;
@property (nonatomic) BOOL isResolvedContactInApp;
@property (nonatomic) BOOL hasIsResolvedContactInApp;
@property (nonatomic) float appTimeSpentAffinityScore;
@property (nonatomic) BOOL hasAppTimeSpentAffinityScore;
@property (nonatomic) BOOL isForegroundApp;
@property (nonatomic) BOOL hasIsForegroundApp;
@property (nonatomic) int timeSinceAppLastLaunchedInSec;
@property (nonatomic) BOOL hasTimeSinceAppLastLaunchedInSec;
@property (retain, nonatomic) INFERENCESchemaINFERENCECommsAppSelectionTrainingAppDependentMessageSignals *messageSignals;
@property (nonatomic) BOOL hasMessageSignals;
@property (retain, nonatomic) INFERENCESchemaINFERENCECommsAppSelectionTrainingAppDependentPhoneCallSignals *phoneCallSignals;
@property (nonatomic) BOOL hasPhoneCallSignals;
@property (retain, nonatomic) INFERENCESchemaINFERENCECommsAppSelectionTrainingContactDependentSignals *contactDependentSignals;
@property (nonatomic) BOOL hasContactDependentSignals;
@property (nonatomic) BOOL isFirstPartyApp;
@property (nonatomic) BOOL hasIsFirstPartyApp;
@property (nonatomic) long long appTimeSpentInSec;
@property (nonatomic) BOOL hasAppTimeSpentInSec;
@property (nonatomic) int timeSinceAppContactLastLaunchedInSec;
@property (nonatomic) BOOL hasTimeSinceAppContactLastLaunchedInSec;
@property (nonatomic) BOOL isDefaultApp;
@property (nonatomic) BOOL hasIsDefaultApp;
@property (nonatomic) BOOL isRequestByLabel;
@property (nonatomic) BOOL hasIsRequestByLabel;
@property (nonatomic) BOOL isRequestByHandleType;
@property (nonatomic) BOOL hasIsRequestByHandleType;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteAppTimeSpentAffinityScore;
- (void)deleteAppTimeSpentInSec;
- (void)deleteContactDependentSignals;
- (void)deleteIsDefaultApp;
- (void)deleteIsFirstPartyApp;
- (void)deleteIsForegroundApp;
- (void)deleteIsRequestByHandleType;
- (void)deleteIsRequestByLabel;
- (void)deleteIsResolvedApp;
- (void)deleteIsResolvedContactInApp;
- (void)deleteMessageSignals;
- (void)deletePhoneCallSignals;
- (void)deleteTimeSinceAppContactLastLaunchedInSec;
- (void)deleteTimeSinceAppLastLaunchedInSec;

@end
