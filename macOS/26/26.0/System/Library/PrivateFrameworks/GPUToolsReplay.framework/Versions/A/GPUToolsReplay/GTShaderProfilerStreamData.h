@class GTShaderProfilerDeviceInfo, NSString, NSArray, NSURL, NSMutableDictionary, NSDictionary, NSMutableArray, NSMutableData;

@interface GTShaderProfilerStreamData : NSObject <NSSecureCoding, NSCopying> {
    NSMutableDictionary *_stringDict;
    NSMutableArray *_tempAPSData;
    NSMutableArray *_tempAPSTimelineData;
    NSMutableArray *_tempAPSCounterData;
    BOOL _unarchivedDataPatched;
    BOOL _isUsingTempDataDir;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) long long unixTimestamp;
@property (readonly, nonatomic) NSURL *dataFileURL;
@property (nonatomic) BOOL supportsFileFormatV2;
@property (readonly, nonatomic) BOOL dataSourceHasUnusedResources;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } dataSourceCaptureRange;
@property (readonly, nonatomic) BOOL isPreSiData;
@property (readonly, nonatomic) NSURL *preSiBundleURL;
@property (retain, nonatomic) NSString *metalPluginName;
@property (retain, nonatomic) NSString *metalDeviceName;
@property (retain, nonatomic) GTShaderProfilerDeviceInfo *deviceInfo;
@property (retain, nonatomic) NSString *traceName;
@property (readonly, nonatomic) unsigned int gpuGeneration;
@property (readonly, nonatomic) NSString *shortDescription;
@property (nonatomic) unsigned int profiledPerformanceState;
@property (nonatomic) unsigned int profiledProfilerMode;
@property (nonatomic) unsigned int profiledExecutionMode;
@property (readonly, nonatomic) NSMutableArray *strings;
@property (readonly, nonatomic) NSMutableData *gpuCommandInfoData;
@property (readonly, nonatomic) NSMutableData *encoderInfoData;
@property (readonly, nonatomic) NSMutableData *pipelineStateInfoData;
@property (readonly, nonatomic) NSMutableData *commandBufferInfoData;
@property (readonly, nonatomic) NSMutableData *functionInfoData;
@property (readonly, nonatomic) const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4; unsigned int x5; int x6; } *gpuCommands;
@property (readonly, nonatomic) unsigned long long gpuCommandInfoCount;
@property (readonly, nonatomic) const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } *encoders;
@property (readonly, nonatomic) unsigned long long encoderInfoCount;
@property (readonly, nonatomic) const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned int x4; } *commandBuffers;
@property (readonly, nonatomic) unsigned long long commandBufferInfoCount;
@property (readonly, nonatomic) const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } *pipelineStates;
@property (readonly, nonatomic) unsigned long long pipelineStateInfoCount;
@property (readonly, nonatomic) const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; char x7[8]; } *functionInfo;
@property (readonly, nonatomic) unsigned long long functionInfoCount;
@property (readonly, nonatomic) unsigned long long blitCallCount;
@property (readonly, nonatomic) NSDictionary *pipelinePerformanceStatistics;
@property (readonly, nonatomic) NSMutableArray *archivedShaderProfilerData;
@property (readonly, nonatomic) NSMutableArray *archivedGPUTimelineData;
@property (readonly, nonatomic) NSMutableArray *archivedBatchIdFilteredCounterData;
@property (readonly, nonatomic) NSArray *batchIdFilterableCounters;
@property (readonly, nonatomic) NSMutableArray *archivedAPSData;
@property (readonly, nonatomic) NSMutableArray *archivedAPSTimelineData;
@property (readonly, nonatomic) NSMutableArray *archivedAPSCounterData;
@property (readonly, nonatomic) NSMutableArray *unarchivedShaderProfilerData;
@property (readonly, nonatomic) NSMutableArray *unarchivedGPUTimelineData;
@property (readonly, nonatomic) NSMutableArray *unarchivedBatchIdFilteredCounterData;
@property (readonly, nonatomic) NSMutableArray *unarchivedAPSData;
@property (readonly, nonatomic) NSMutableArray *unarchivedAPSTimelineData;
@property (readonly, nonatomic) NSMutableArray *unarchivedAPSCounterData;

+ (id)dataForMetadataFromArchivedDataURL:(id)a0;
+ (id)dataFromArchivedDataURL:(id)a0;
+ (id)savedStreamDataFromCaptureArchive:(id)a0;
+ (id)steamDataFromData:(id)a0;
+ (id)streamDataClasses;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)debugDump:(id)a0;
- (id)encode:(id)a0 error:(id *)a1;
- (const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4; unsigned int x5; int x6; } *)GPUCommandInfoFromFunctionIndex:(unsigned int)a0 subCommandIndex:(int)a1;
- (id)initWithNewFileFormatV2Support:(BOOL)a0;
- (void)patchObjectIds:(id)a0;
- (void)encodeAPSArrayForOldHost:(id)a0 array:(id)a1;
- (id)_setupDataPath;
- (void)_writeLocalData:(id)a0 dataPath:(id)a1 to:(id)a2;
- (void)cleanupLocalFiles;
- (id)dataFromUnarchvedMetadata:(id)a0;
- (const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } *)encoderInfoFromFunctionIndex:(unsigned int)a0;
- (void)enumerateUnarchivedBatchIdFilteredCounterData:(id /* block */)a0;
- (void)enumerateUnarchivedGPUTimelineData:(id /* block */)a0;
- (void)enumerateUnarchivedShaderProfilerData:(id /* block */)a0;
- (id)initWithPreSiBundle:(id)a0;

@end
