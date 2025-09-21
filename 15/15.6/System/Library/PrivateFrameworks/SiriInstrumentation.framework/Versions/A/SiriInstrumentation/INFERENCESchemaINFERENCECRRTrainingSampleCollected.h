@class SISchemaUUID, NSString, NSArray, INFERENCESchemaINFERENCETrialEnrollment, NSData, INFERENCESchemaINFERENCEPromptContext, INFERENCESchemaINFERENCEPotentialRetryContactInteractionContext, INFERENCESchemaINFERENCEContactResolverConfig;

@interface INFERENCESchemaINFERENCECRRTrainingSampleCollected : SISchemaInstrumentationMessage {
    struct { unsigned char resolutionState : 1; unsigned char resolutionType : 1; unsigned char isInteractionExecuted : 1; unsigned char isInteractionSuccess : 1; unsigned char interactionDurationInSecBucket : 1; unsigned char isPlusContactSuggesterEnabled : 1; unsigned char isEntityCandidateRetrievalEnabled : 1; } _has;
}

@property (copy, nonatomic) NSString *intentTypeName;
@property (nonatomic) char hasIntentTypeName;
@property (retain, nonatomic) INFERENCESchemaINFERENCEContactResolverConfig *resolverConfig;
@property (nonatomic) char hasResolverConfig;
@property (retain, nonatomic) INFERENCESchemaINFERENCETrialEnrollment *trialEnrollment;
@property (nonatomic) char hasTrialEnrollment;
@property (copy, nonatomic) NSString *modelVersion;
@property (nonatomic) char hasModelVersion;
@property (copy, nonatomic) NSArray *matches;
@property (nonatomic) int resolutionState;
@property (nonatomic) char hasResolutionState;
@property (nonatomic) int resolutionType;
@property (nonatomic) char hasResolutionType;
@property (retain, nonatomic) INFERENCESchemaINFERENCEPromptContext *forcePrompt;
@property (nonatomic) char hasForcePrompt;
@property (copy, nonatomic) NSArray *anonymizedContactIdentifiers;
@property (nonatomic) char isInteractionExecuted;
@property (nonatomic) char hasIsInteractionExecuted;
@property (nonatomic) char isInteractionSuccess;
@property (nonatomic) char hasIsInteractionSuccess;
@property (nonatomic) unsigned int interactionDurationInSecBucket;
@property (nonatomic) char hasInteractionDurationInSecBucket;
@property (retain, nonatomic) INFERENCESchemaINFERENCEPotentialRetryContactInteractionContext *interactionContext;
@property (nonatomic) char hasInteractionContext;
@property (nonatomic) char isPlusContactSuggesterEnabled;
@property (nonatomic) char hasIsPlusContactSuggesterEnabled;
@property (nonatomic) char isEntityCandidateRetrievalEnabled;
@property (nonatomic) char hasIsEntityCandidateRetrievalEnabled;
@property (retain, nonatomic) SISchemaUUID *crrCommsAppSelectionJointId;
@property (nonatomic) char hasCrrCommsAppSelectionJointId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)matchesAtIndex:(unsigned long long)a0;
- (void)addMatches:(id)a0;
- (void)clearMatches;
- (id)initWithJSON:(id)a0;
- (unsigned long long)matchesCount;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addAnonymizedContactIdentifiers:(id)a0;
- (id)anonymizedContactIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)anonymizedContactIdentifiersCount;
- (void)clearAnonymizedContactIdentifiers;
- (void)deleteAnonymizedContactIdentifiers;
- (void)deleteCrrCommsAppSelectionJointId;
- (void)deleteForcePrompt;
- (void)deleteIntentTypeName;
- (void)deleteInteractionContext;
- (void)deleteInteractionDurationInSecBucket;
- (void)deleteIsEntityCandidateRetrievalEnabled;
- (void)deleteIsInteractionExecuted;
- (void)deleteIsInteractionSuccess;
- (void)deleteIsPlusContactSuggesterEnabled;
- (void)deleteMatches;
- (void)deleteModelVersion;
- (void)deleteResolutionState;
- (void)deleteResolutionType;
- (void)deleteResolverConfig;
- (void)deleteTrialEnrollment;
- (id)suppressMessageUnderConditions;

@end
