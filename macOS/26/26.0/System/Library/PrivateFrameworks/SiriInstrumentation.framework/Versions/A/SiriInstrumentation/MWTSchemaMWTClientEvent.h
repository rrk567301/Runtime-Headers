@class SISchemaInstrumentationMessage, MWTSchemaMWTEventMetadata, MWTSchemaMWTCheckpointReported, MWTSchemaMWTVMCPUStatsReported, NSData, MWTSchemaMWTMusicMetadataReported;

@interface MWTSchemaMWTClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) MWTSchemaMWTEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) MWTSchemaMWTCheckpointReported *mwtCheckpointReported;
@property (nonatomic) BOOL hasMwtCheckpointReported;
@property (retain, nonatomic) MWTSchemaMWTMusicMetadataReported *mwtMusicMetadataReported;
@property (nonatomic) BOOL hasMwtMusicMetadataReported;
@property (retain, nonatomic) MWTSchemaMWTVMCPUStatsReported *mwtVMCpuStatsReported;
@property (nonatomic) BOOL hasMwtVMCpuStatsReported;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;
+ (int)joinability;

- (int)componentName;
- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (int)getAnyEventType;
- (id)dictionaryRepresentation;
- (id)qualifiedMessageName;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteEventMetadata;
- (void)deleteMwtCheckpointReported;
- (void)deleteMwtMusicMetadataReported;
- (void)deleteMwtVMCpuStatsReported;
- (id)getComponentId;
- (unsigned long long)whichInnerEventType;

@end
