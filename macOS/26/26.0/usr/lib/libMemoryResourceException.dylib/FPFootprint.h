@class NSArray, NSString, NSMutableDictionary, FPTime, NSDictionary, NSMutableArray;

@interface FPFootprint : NSObject <FPFootprintExtendedInfoProvider> {
    NSMutableDictionary *_pidToFootprint;
    NSDictionary *_allPIDsIOSurfaceDescriptions;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _allPIDsIOSurfaceDescriptionsLock;
    NSDictionary *_allPIDsIOAccelMemoryInfos;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _allPIDsIOAccelMemoryInfosLock;
    struct _os_opaque_64_map_s { void *data[3]; } _memoryObjects;
    struct _os_opaque_64_map_s { void *data[3]; } _textMemoryObjects;
    struct _os_opaque_64_map_s { void *data[3]; } _linkeditMemoryObjects;
    NSMutableDictionary *_sharedCacheMemoryObjectsTable;
    BOOL _memoryObjectMapsInitialized;
    NSMutableArray *_outputFormatters;
    BOOL _earlyExit;
}

@property (class, nonatomic) BOOL breakDownPhysFootprint;
@property (class, nonatomic) int vmRegionInfoFlags;
@property (class, nonatomic, getter=isSharingAnalysisDisabled) BOOL sharingAnalysisDisabled;

@property (readonly, nonatomic) NSArray *processes;
@property (nonatomic) unsigned int qualityOfService;
@property (readonly, nonatomic) FPTime *gatherStartTime;
@property (readonly, nonatomic) FPTime *gatherEndTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)installCancelHandler:(id /* block */)a0;

- (void)dealloc;
- (id)ioAccelMemoryInfoDetailsAtAddress:(unsigned long long)a0 for:(int)a1 error:(id *)a2;
- (BOOL)gatherData;
- (void)cancel;
- (void)analyzeData;
- (void)printOutputVerbose:(BOOL)a0 summarize:(BOOL)a1 noCategories:(BOOL)a2;
- (id)initWithProcesses:(id)a0;
- (id)ioSurfaceExtendedInfoDetailsAtAddress:(unsigned long long)a0 for:(int)a1;
- (BOOL)gatherData:(unsigned long long)a0;
- (void)addOutputFormatter:(id)a0;
- (void).cxx_destruct;

@end
