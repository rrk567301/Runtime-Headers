@class NSData;

@interface MWTSchemaMWTVMCPUStatsReported : SISchemaInstrumentationMessage {
    struct { unsigned char snapshotStage : 1; unsigned char cpuTicksSystem : 1; unsigned char cpuTicksUser : 1; unsigned char cpuTicksIdle : 1; unsigned char cpuTicksNice : 1; unsigned char compressions : 1; unsigned char decompressions : 1; unsigned char pageins : 1; unsigned char faults : 1; } _has;
}

@property (nonatomic) int snapshotStage;
@property (nonatomic) BOOL hasSnapshotStage;
@property (nonatomic) unsigned long long cpuTicksSystem;
@property (nonatomic) BOOL hasCpuTicksSystem;
@property (nonatomic) unsigned long long cpuTicksUser;
@property (nonatomic) BOOL hasCpuTicksUser;
@property (nonatomic) unsigned long long cpuTicksIdle;
@property (nonatomic) BOOL hasCpuTicksIdle;
@property (nonatomic) unsigned long long cpuTicksNice;
@property (nonatomic) BOOL hasCpuTicksNice;
@property (nonatomic) unsigned long long compressions;
@property (nonatomic) BOOL hasCompressions;
@property (nonatomic) unsigned long long decompressions;
@property (nonatomic) BOOL hasDecompressions;
@property (nonatomic) unsigned long long pageins;
@property (nonatomic) BOOL hasPageins;
@property (nonatomic) unsigned long long faults;
@property (nonatomic) BOOL hasFaults;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteSnapshotStage;
- (void)deleteCpuTicksSystem;
- (void)deleteCpuTicksUser;
- (void)deleteCpuTicksIdle;
- (void)deleteCpuTicksNice;
- (void)deleteCompressions;
- (void)deleteDecompressions;
- (void)deletePageins;
- (void)deleteFaults;

@end
