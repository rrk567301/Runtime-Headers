@class NSData;

@interface MWTSchemaMWTVMCPUStatsReported : SISchemaInstrumentationMessage {
    struct { unsigned char snapshotStage : 1; unsigned char cpuTicksSystem : 1; unsigned char cpuTicksUser : 1; unsigned char cpuTicksIdle : 1; unsigned char cpuTicksNice : 1; unsigned char compressions : 1; unsigned char decompressions : 1; unsigned char pageins : 1; unsigned char faults : 1; } _has;
}

@property (nonatomic) int snapshotStage;
@property (nonatomic) char hasSnapshotStage;
@property (nonatomic) unsigned long long cpuTicksSystem;
@property (nonatomic) char hasCpuTicksSystem;
@property (nonatomic) unsigned long long cpuTicksUser;
@property (nonatomic) char hasCpuTicksUser;
@property (nonatomic) unsigned long long cpuTicksIdle;
@property (nonatomic) char hasCpuTicksIdle;
@property (nonatomic) unsigned long long cpuTicksNice;
@property (nonatomic) char hasCpuTicksNice;
@property (nonatomic) unsigned long long compressions;
@property (nonatomic) char hasCompressions;
@property (nonatomic) unsigned long long decompressions;
@property (nonatomic) char hasDecompressions;
@property (nonatomic) unsigned long long pageins;
@property (nonatomic) char hasPageins;
@property (nonatomic) unsigned long long faults;
@property (nonatomic) char hasFaults;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCompressions;
- (void)deleteCpuTicksIdle;
- (void)deleteCpuTicksNice;
- (void)deleteCpuTicksSystem;
- (void)deleteCpuTicksUser;
- (void)deleteDecompressions;
- (void)deleteFaults;
- (void)deletePageins;
- (void)deleteSnapshotStage;
- (id)suppressMessageUnderConditions;

@end
