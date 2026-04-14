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

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;
+ (int)joinability;

- (id)suppressMessageUnderConditions;
- (int)getAnyEventType;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)qualifiedMessageName;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (int)clockIsolationLevel;
- (void)deleteAppLanguageModelAssetCopyContext;
- (void)deleteAppLanguageModelBuildContext;
- (void)deleteAppLanguageModelProfileRebuildContext;
- (void)deleteEventMetadata;
- (id)getComponentId;
- (unsigned long long)whichInnerEventType;

@end
