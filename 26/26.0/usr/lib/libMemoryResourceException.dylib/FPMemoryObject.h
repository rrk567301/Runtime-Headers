@class NSString, NSDictionary, NSMutableDictionary, NSMutableArray;

@interface FPMemoryObject : NSObject <FPMemoryObject> {
    unsigned char _accurateSizes : 1;
    unsigned char _hasProcessViewForSingleTotalRegions : 1;
    unsigned char _isProcessViewForSingleTotalRegions : 1;
    NSMutableArray *_memoryRegions;
    NSMutableDictionary *_processMemoryRegions;
}

@property (nonatomic) int ownerPid;
@property (readonly, nonatomic) unsigned long long dirtySize;
@property (readonly, nonatomic) unsigned long long cleanSize;
@property (readonly, nonatomic) unsigned long long reclaimableSize;
@property (readonly, nonatomic) unsigned long long swappedSize;
@property (readonly, nonatomic) unsigned long long wiredSize;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *detailedName;
@property (readonly, nonatomic) NSString *fullName;
@property (readonly, nonatomic) BOOL verbose;
@property (readonly, nonatomic) unsigned int totalRegions;
@property (readonly, nonatomic) BOOL containsFakeRegion;
@property (readonly, nonatomic) NSDictionary *auxData;
@property (readonly, nonatomic) NSDictionary *detailedAuxData;
@property (readonly, nonatomic) NSString *auxDataName;
@property (readonly, nonatomic) NSString *detailedAuxDataName;
@property (readonly, nonatomic) BOOL couldHaveProcessView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)ensureMemoryObject;
- (id)init;
- (id)viewForProcess:(id)a0;
- (BOOL)finalizeObject;
- (void).cxx_destruct;

@end
