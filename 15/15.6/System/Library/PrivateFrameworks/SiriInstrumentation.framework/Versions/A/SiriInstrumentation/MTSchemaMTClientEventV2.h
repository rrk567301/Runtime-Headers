@class MTSchemaMTASRStateUpdated, NSData, MTSchemaMTFrameworkRequestResponseReceived, SISchemaInstrumentationMessage, MTSchemaMTLocalePairResolved, MTSchemaMTAppNextButtonTappedTier1, MTSchemaMTAppTimedOutTier1, MTSchemaMTInvocationContext, MTSchemaMTLanguageDisambiguationUIShown, MTSchemaMTLanguageIdentificationCompleted, MTSchemaMTLanguageDisambiguationUISelected, MTSchemaMTTranslationTTSPlayed, MTSchemaMTBatchRequestContext, MTSchemaMTClientEventMetadata, MTSchemaMTAppBackgroundedTier1, MTSchemaMTAppTextBoxDismissedTier1, MTSchemaMTInvocationStartedTier1, MTSchemaMTFrameworkRequestSent;

@interface MTSchemaMTClientEventV2 : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) MTSchemaMTClientEventMetadata *eventMetadata;
@property (nonatomic) char hasEventMetadata;
@property (retain, nonatomic) MTSchemaMTBatchRequestContext *batchRequestContext;
@property (nonatomic) char hasBatchRequestContext;
@property (retain, nonatomic) MTSchemaMTInvocationContext *invocationContext;
@property (nonatomic) char hasInvocationContext;
@property (retain, nonatomic) MTSchemaMTASRStateUpdated *asrStateUpdated;
@property (nonatomic) char hasAsrStateUpdated;
@property (retain, nonatomic) MTSchemaMTLocalePairResolved *localePairResolved;
@property (nonatomic) char hasLocalePairResolved;
@property (retain, nonatomic) MTSchemaMTInvocationStartedTier1 *invocationStartedTier1;
@property (nonatomic) char hasInvocationStartedTier1;
@property (retain, nonatomic) MTSchemaMTAppNextButtonTappedTier1 *appNextButtonTapped;
@property (nonatomic) char hasAppNextButtonTapped;
@property (retain, nonatomic) MTSchemaMTAppTextBoxDismissedTier1 *appTextBoxDismissed;
@property (nonatomic) char hasAppTextBoxDismissed;
@property (retain, nonatomic) MTSchemaMTAppTimedOutTier1 *appTimedOut;
@property (nonatomic) char hasAppTimedOut;
@property (retain, nonatomic) MTSchemaMTFrameworkRequestSent *frameworkRequestSent;
@property (nonatomic) char hasFrameworkRequestSent;
@property (retain, nonatomic) MTSchemaMTFrameworkRequestResponseReceived *frameworkRequestResponseReceived;
@property (nonatomic) char hasFrameworkRequestResponseReceived;
@property (retain, nonatomic) MTSchemaMTAppBackgroundedTier1 *appBackgrounded;
@property (nonatomic) char hasAppBackgrounded;
@property (retain, nonatomic) MTSchemaMTLanguageIdentificationCompleted *languageIdentificationCompleted;
@property (nonatomic) char hasLanguageIdentificationCompleted;
@property (retain, nonatomic) MTSchemaMTLanguageDisambiguationUIShown *languageDisambiguationUIShown;
@property (nonatomic) char hasLanguageDisambiguationUIShown;
@property (retain, nonatomic) MTSchemaMTLanguageDisambiguationUISelected *languageDisambiguationUISelected;
@property (nonatomic) char hasLanguageDisambiguationUISelected;
@property (retain, nonatomic) MTSchemaMTTranslationTTSPlayed *translationTTSPlayed;
@property (nonatomic) char hasTranslationTTSPlayed;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;
+ (int)joinability;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (int)getAnyEventType;
- (int)clockIsolationLevel;
- (void)deleteAppBackgrounded;
- (void)deleteAppNextButtonTapped;
- (void)deleteAppTextBoxDismissed;
- (void)deleteAppTimedOut;
- (void)deleteAsrStateUpdated;
- (void)deleteBatchRequestContext;
- (void)deleteEventMetadata;
- (void)deleteFrameworkRequestResponseReceived;
- (void)deleteFrameworkRequestSent;
- (void)deleteInvocationContext;
- (void)deleteInvocationStartedTier1;
- (void)deleteLanguageDisambiguationUISelected;
- (void)deleteLanguageDisambiguationUIShown;
- (void)deleteLanguageIdentificationCompleted;
- (void)deleteLocalePairResolved;
- (void)deleteTranslationTTSPlayed;
- (id)getComponentId;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
