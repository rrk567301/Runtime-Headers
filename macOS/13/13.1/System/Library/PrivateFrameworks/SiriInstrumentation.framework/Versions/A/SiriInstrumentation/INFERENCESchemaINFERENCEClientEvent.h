@class INFERENCESchemaINFERENCEResolutionQueryInfoGenerated, INFERENCESchemaINFERENCEContactCandidatesInfoGenerated, INFERENCESchemaINFERENCESimpleTaskInfoGenerated, INFERENCESchemaINFERENCEQueryUserPromptSelectedInfoGenerated, INFERENCESchemaINFERENCEABModelResultTriggered, SISchemaInstrumentationMessage, INFERENCESchemaINFERENCEVideoPlayOnThirdPartyAppGroundTruthGenerated, INFERENCESchemaINFERENCEMusicAppSelectionGroundTruthGenerated, INFERENCESchemaINFERENCEResolutionRequestContext, INFERENCESchemaINFERENCEClientEventMetadata, INFERENCESchemaINFERENCEWorkoutsAppSelectionGroundTruthGenerated, INFERENCESchemaINFERENCECRRTrainingSampleCollected, NSData, INFERENCESchemaINFERENCEVideoSmartAppSelectionDisambiguationSignalsGenerated, INFERENCESchemaINFERENCEABModelEvaluated;

@interface INFERENCESchemaINFERENCEClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) INFERENCESchemaINFERENCEClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) INFERENCESchemaINFERENCEMusicAppSelectionGroundTruthGenerated *musicAppSelectionGroundTruthGenerated;
@property (nonatomic) BOOL hasMusicAppSelectionGroundTruthGenerated;
@property (retain, nonatomic) INFERENCESchemaINFERENCEVideoPlayOnThirdPartyAppGroundTruthGenerated *videoPlayOnThirdPartyAppGroundTruthGenerated;
@property (nonatomic) BOOL hasVideoPlayOnThirdPartyAppGroundTruthGenerated;
@property (retain, nonatomic) INFERENCESchemaINFERENCEVideoSmartAppSelectionDisambiguationSignalsGenerated *videoSmartAppSelectionDisambiguation;
@property (nonatomic) BOOL hasVideoSmartAppSelectionDisambiguation;
@property (retain, nonatomic) INFERENCESchemaINFERENCEResolutionRequestContext *resolutionRequestContext;
@property (nonatomic) BOOL hasResolutionRequestContext;
@property (retain, nonatomic) INFERENCESchemaINFERENCESimpleTaskInfoGenerated *simpleTaskInfoGenerated;
@property (nonatomic) BOOL hasSimpleTaskInfoGenerated;
@property (retain, nonatomic) INFERENCESchemaINFERENCEResolutionQueryInfoGenerated *resolutionQueryInfoGenerated;
@property (nonatomic) BOOL hasResolutionQueryInfoGenerated;
@property (retain, nonatomic) INFERENCESchemaINFERENCEQueryUserPromptSelectedInfoGenerated *userPromptSelectedInfoGenerated;
@property (nonatomic) BOOL hasUserPromptSelectedInfoGenerated;
@property (retain, nonatomic) INFERENCESchemaINFERENCEContactCandidatesInfoGenerated *contactCandidatesInfoGenerated;
@property (nonatomic) BOOL hasContactCandidatesInfoGenerated;
@property (retain, nonatomic) INFERENCESchemaINFERENCECRRTrainingSampleCollected *crrTrainingSampleCollected;
@property (nonatomic) BOOL hasCrrTrainingSampleCollected;
@property (retain, nonatomic) INFERENCESchemaINFERENCEABModelEvaluated *abModelEvaluated;
@property (nonatomic) BOOL hasAbModelEvaluated;
@property (retain, nonatomic) INFERENCESchemaINFERENCEABModelResultTriggered *abModelResultTriggered;
@property (nonatomic) BOOL hasAbModelResultTriggered;
@property (retain, nonatomic) INFERENCESchemaINFERENCEWorkoutsAppSelectionGroundTruthGenerated *workoutsAppSelectionGroundTruthGenerated;
@property (nonatomic) BOOL hasWorkoutsAppSelectionGroundTruthGenerated;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (int)joinability;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (int)componentName;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (int)getAnyEventType;
- (id)qualifiedMessageName;
- (id)getComponentId;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (int)clockIsolationLevel;
- (void)deleteEventMetadata;
- (void)deleteMusicAppSelectionGroundTruthGenerated;
- (void)deleteVideoPlayOnThirdPartyAppGroundTruthGenerated;
- (void)deleteVideoSmartAppSelectionDisambiguation;
- (void)deleteResolutionRequestContext;
- (void)deleteSimpleTaskInfoGenerated;
- (void)deleteResolutionQueryInfoGenerated;
- (void)deleteUserPromptSelectedInfoGenerated;
- (void)deleteContactCandidatesInfoGenerated;
- (void)deleteCrrTrainingSampleCollected;
- (void)deleteAbModelEvaluated;
- (void)deleteAbModelResultTriggered;
- (void)deleteWorkoutsAppSelectionGroundTruthGenerated;

@end
