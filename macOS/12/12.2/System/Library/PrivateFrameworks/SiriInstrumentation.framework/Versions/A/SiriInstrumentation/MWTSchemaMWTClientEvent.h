@class MWTSchemaMWTEventMetadata, MWTSchemaMWTCheckpointReported, MWTSchemaMWTVMCPUStatsReported, NSData, MWTSchemaMWTMusicMetadataReported;

@interface MWTSchemaMWTClientEvent : SISchemaTopLevelUnionType

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

@end
