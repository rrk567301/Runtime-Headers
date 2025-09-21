@class INFERENCESchemaINFERENCECommsAppSelectionTrainingContactDependentSignals, INFERENCESchemaINFERENCECommsAppSelectionTrainingAppDependentPhoneCallSignals, INFERENCESchemaINFERENCECommsAppSelectionTrainingAppDependentMessageSignals, NSData;

@interface INFERENCESchemaINFERENCECommsAppSelectionTrainingAppDependentSignals : SISchemaInstrumentationMessage {
    struct { unsigned char isResolvedApp : 1; unsigned char isResolvedContactInApp : 1; unsigned char appTimeSpentAffinityScore : 1; unsigned char isForegroundApp : 1; unsigned char timeSinceAppLastLaunchedInSec : 1; unsigned char isFirstPartyApp : 1; unsigned char appTimeSpentInSec : 1; unsigned char timeSinceAppContactLastLaunchedInSec : 1; unsigned char isDefaultApp : 1; unsigned char isRequestByLabel : 1; unsigned char isRequestByHandleType : 1; } _has;
}

@property (nonatomic) char isResolvedApp;
@property (nonatomic) char hasIsResolvedApp;
@property (nonatomic) char isResolvedContactInApp;
@property (nonatomic) char hasIsResolvedContactInApp;
@property (nonatomic) float appTimeSpentAffinityScore;
@property (nonatomic) char hasAppTimeSpentAffinityScore;
@property (nonatomic) char isForegroundApp;
@property (nonatomic) char hasIsForegroundApp;
@property (nonatomic) int timeSinceAppLastLaunchedInSec;
@property (nonatomic) char hasTimeSinceAppLastLaunchedInSec;
@property (retain, nonatomic) INFERENCESchemaINFERENCECommsAppSelectionTrainingAppDependentMessageSignals *messageSignals;
@property (nonatomic) char hasMessageSignals;
@property (retain, nonatomic) INFERENCESchemaINFERENCECommsAppSelectionTrainingAppDependentPhoneCallSignals *phoneCallSignals;
@property (nonatomic) char hasPhoneCallSignals;
@property (retain, nonatomic) INFERENCESchemaINFERENCECommsAppSelectionTrainingContactDependentSignals *contactDependentSignals;
@property (nonatomic) char hasContactDependentSignals;
@property (nonatomic) char isFirstPartyApp;
@property (nonatomic) char hasIsFirstPartyApp;
@property (nonatomic) long long appTimeSpentInSec;
@property (nonatomic) char hasAppTimeSpentInSec;
@property (nonatomic) int timeSinceAppContactLastLaunchedInSec;
@property (nonatomic) char hasTimeSinceAppContactLastLaunchedInSec;
@property (nonatomic) char isDefaultApp;
@property (nonatomic) char hasIsDefaultApp;
@property (nonatomic) char isRequestByLabel;
@property (nonatomic) char hasIsRequestByLabel;
@property (nonatomic) char isRequestByHandleType;
@property (nonatomic) char hasIsRequestByHandleType;
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
- (id)suppressMessageUnderConditions;

@end
