@class SISchemaInstrumentationMessage, SMTSchemaSMTAppLanguageModelBuildContext, SMTSchemaSMTAppLanguageModelProfileRebuildContext, SMTSchemaSMTClientEventMetadata, NSData, SMTSchemaSMTAppLanguageModelAssetCopyContext;

@interface SMTSchemaSMTClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) SMTSchemaSMTClientEventMetadata *eventMetadata;
@property (nonatomic) char hasEventMetadata;
@property (retain, nonatomic) SMTSchemaSMTAppLanguageModelAssetCopyContext *appLanguageModelAssetCopyContext;
@property (nonatomic) char hasAppLanguageModelAssetCopyContext;
@property (retain, nonatomic) SMTSchemaSMTAppLanguageModelBuildContext *appLanguageModelBuildContext;
@property (nonatomic) char hasAppLanguageModelBuildContext;
@property (retain, nonatomic) SMTSchemaSMTAppLanguageModelProfileRebuildContext *appLanguageModelProfileRebuildContext;
@property (nonatomic) char hasAppLanguageModelProfileRebuildContext;
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
- (void)deleteAppLanguageModelAssetCopyContext;
- (void)deleteAppLanguageModelBuildContext;
- (void)deleteAppLanguageModelProfileRebuildContext;
- (void)deleteEventMetadata;
- (id)getComponentId;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
