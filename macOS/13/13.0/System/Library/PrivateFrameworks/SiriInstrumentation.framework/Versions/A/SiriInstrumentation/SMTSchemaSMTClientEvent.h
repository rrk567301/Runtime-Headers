@class SISchemaInstrumentationMessage, SMTSchemaSMTAppLanguageModelBuildContext, SMTSchemaSMTAppLanguageModelProfileRebuildContext, SMTSchemaSMTClientEventMetadata, NSData, SMTSchemaSMTAppLanguageModelAssetCopyContext;

@interface SMTSchemaSMTClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) SMTSchemaSMTClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) SMTSchemaSMTAppLanguageModelAssetCopyContext *appLanguageModelAssetCopyContext;
@property (nonatomic) BOOL hasAppLanguageModelAssetCopyContext;
@property (retain, nonatomic) SMTSchemaSMTAppLanguageModelBuildContext *appLanguageModelBuildContext;
@property (nonatomic) BOOL hasAppLanguageModelBuildContext;
@property (retain, nonatomic) SMTSchemaSMTAppLanguageModelProfileRebuildContext *appLanguageModelProfileRebuildContext;
@property (nonatomic) BOOL hasAppLanguageModelProfileRebuildContext;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (int)joinability;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
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
- (void)deleteAppLanguageModelAssetCopyContext;
- (void)deleteAppLanguageModelBuildContext;
- (void)deleteAppLanguageModelProfileRebuildContext;

@end
