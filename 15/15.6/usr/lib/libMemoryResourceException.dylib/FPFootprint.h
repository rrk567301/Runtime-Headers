@class NSArray, NSString, NSMutableDictionary, FPTime, NSDictionary, NSMutableArray;

@interface FPFootprint : NSObject <FPFootprintExtendedInfoProvider> {
    NSMutableDictionary *_pidToFootprint;
    NSDictionary *_allPIDsIOSurfaceDescriptions;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _allPIDsIOSurfaceDescriptionsLock;
    NSDictionary *_allPIDsIOAccelMemoryInfos;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _allPIDsIOAccelMemoryInfosLock;
    struct __CFDictionary { } *_memoryObjects;
    NSMutableDictionary *_sharedCacheMemoryObjectsTable;
    struct __CFDictionary { } *_textMemoryObjects;
    struct __CFDictionary { } *_linkeditMemoryObjects;
    NSMutableArray *_outputFormatters;
    char _earlyExit;
}

@property (class, nonatomic) char breakDownPhysFootprint;
@property (class, nonatomic) int vmRegionInfoFlags;
@property (class, nonatomic, getter=isSharingAnalysisDisabled) char sharingAnalysisDisabled;

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
- (void).cxx_destruct;
- (void)cancel;
- (void)addOutputFormatter:(id)a0;
- (void)analyzeData;
- (char)gatherData;
- (char)gatherData:(unsigned long long)a0;
- (id)initWithProcesses:(id)a0;
- (id)ioAccelMemoryInfoDetailsAtAddress:(unsigned long long)a0 for:(int)a1 error:(id *)a2;
- (id)ioSurfaceExtendedInfoDetailsAtAddress:(unsigned long long)a0 for:(int)a1;
- (void)printOutputVerbose:(char)a0 summarize:(char)a1 noCategories:(char)a2;

@end
