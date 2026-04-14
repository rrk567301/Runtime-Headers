@class NSString, NSDictionary, NSArray, NSDate, NSMutableArray, NSMutableDictionary;

@interface VMUProcessDescription : NSObject {
    unsigned int _task;
    int _pid;
    BOOL _taskIsCorpse;
    NSString *_hardwareModel;
    NSString *_processName;
    BOOL _processNameNeedsCorrection;
    NSString *_executablePath;
    struct _CSTypeRef { unsigned long long _opaque_1; unsigned long long _opaque_2; } _symbolicator;
    BOOL _executablePathNeedsCorrection;
    unsigned long long _executableLoadAddress;
    int _cpuType;
    unsigned int _platform;
    BOOL _is64Bit;
    struct timeval { long long tv_sec; int tv_usec; } _proc_starttime;
    NSDictionary *_lsApplicationInformation;
    NSMutableArray *_binaryImages;
    NSArray *_sortedBinaryImages;
    NSDictionary *_binaryImageHints;
    NSArray *_unreadableBinaryImagePaths;
    BOOL _binaryImagePostProcessingComplete;
    NSDictionary *_buildVersionDictionary;
    NSDictionary *_osVersionDictionary;
    struct mapped_memory_t { } *_mappedMemory;
    NSString *_parentProcessName;
    NSString *_parentExecutablePath;
    int _ppid;
    NSDate *_date;
    NSMutableDictionary *_environment;
}

@property (readonly, nonatomic) unsigned long long physicalFootprint;
@property (readonly, nonatomic) unsigned long long physicalFootprintPeak;

+ (struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })symbolicatorFromBinaryImagesDescription:(id)a0 withArchitecture:(struct _CSArchitecture { int x0; int x1; })a1;
+ (id)parseBinaryImagesDescription:(id)a0;
+ (struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })symbolicatorFromBinaryImagesDescription:(id)a0;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)date;
- (id)bundleIdentifier;
- (id)processIdentifier;
- (id)displayName;
- (int)pid;
- (id)executablePath;
- (id)processName;
- (int)cpuType;
- (unsigned int)task;
- (id)processVersion;
- (BOOL)is64Bit;
- (id)initWithTask:(unsigned int)a0 getBinariesList:(BOOL)a1;
- (id)binaryImagesDescription;
- (BOOL)initFromCorpse;
- (void)initFromLiveProcess;
- (void)_libraryLoaded:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })a0;
- (void)cleansePathsIncludingBinaryImageList:(BOOL)a0;
- (id)_readDataFromMemory:(struct mapped_memory_t { } *)a0 atAddress:(unsigned long long)a1 size:(unsigned long long)a2;
- (id)_extractInfoPlistFromSymbolOwner:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })a0 withMemory:(struct mapped_memory_t { } *)a1;
- (id)binaryImages;
- (id)processVersionDictionary;
- (id)_sanitizeVersion:(id)a0;
- (void)setCrashReporterInfo;
- (id)_bundleLock;
- (void)clearCrashReporterInfo;
- (id)_rangesOfBinaryImages:(id)a0 forBacktraces:(id)a1;
- (id)_binaryImagesDescriptionForRanges:(id)a0;
- (id)_buildVersionDictionary;
- (id)_osVersionDictionary;
- (id)_buildInfoDescription;
- (id)_cpuTypeDescription;
- (id)parentProcessName;
- (id)_systemVersionDescription;
- (id)processDescriptionHeader;
- (id)dateAndVersionDescription;
- (id)analysisToolDescription;
- (id)processStatisticsDescription;
- (id)initWithPid:(int)a0 orTask:(unsigned int)a1;
- (int)parentPid;
- (id)parentProcessPath;
- (BOOL)isAppleApplication;
- (id)binaryImageDictionaryForAddress:(unsigned long long)a0;
- (id)valueForEnvVar:(id)a0;
- (id)binaryImagesDescriptionForBacktraces:(id)a0;

@end
