@class NSString, NSArray, NSDictionary, FPRangeList;
@protocol FPMemoryObject;

@interface FPMemoryRegion : NSObject <FPMemoryObject> {
    unsigned char _wired : 1;
    unsigned char _inSharedCache : 1;
    unsigned char _unusedSharedCacheRegion : 1;
    unsigned char _ownedExclusivelyByParentProcess : 1;
    unsigned char _verbose : 1;
    FPRangeList *_subrangeList;
}

@property (nonatomic) char verbose;
@property (nonatomic) unsigned long long dirtySize;
@property (nonatomic) unsigned long long reclaimableSize;
@property (nonatomic) unsigned long long swappedSize;
@property (nonatomic) unsigned long long cleanSize;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *detailedName;
@property (retain, nonatomic) NSString *extendedInfo;
@property (nonatomic) id<FPMemoryObject> memoryObject;
@property (nonatomic) unsigned long long offset;
@property (nonatomic) unsigned long long start;
@property (nonatomic) unsigned long long size;
@property (nonatomic) unsigned long long end;
@property (nonatomic) unsigned char segment;
@property (nonatomic) char wired;
@property (nonatomic) unsigned int user_tag;
@property (nonatomic) unsigned long long object_id;
@property (nonatomic) unsigned char share_mode;
@property (nonatomic) char inSharedCache;
@property (nonatomic) char unusedSharedCacheRegion;
@property (readonly, nonatomic) char privateSharedCacheRegion;
@property (readonly, nonatomic, getter=isFake) char fake;
@property (readonly, nonatomic) FPRangeList *subrangeList;
@property (readonly, nonatomic) char eligibleForProcessView;
@property (nonatomic) char ownedExclusivelyByParentProcess;
@property (readonly, nonatomic) unsigned long long wiredSize;
@property (readonly, nonatomic) NSString *fullName;
@property (readonly, nonatomic) NSArray *memoryRegions;
@property (readonly, nonatomic) unsigned int totalRegions;
@property (readonly, nonatomic) char containsFakeRegion;
@property (readonly, nonatomic) int ownerPid;
@property (readonly, nonatomic) NSDictionary *auxData;
@property (readonly, nonatomic) NSDictionary *detailedAuxData;
@property (readonly, nonatomic) NSString *auxDataName;
@property (readonly, nonatomic) NSString *detailedAuxDataName;
@property (readonly, nonatomic) char couldHaveProcessView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)categoryNameForTag:(unsigned int)a0;
+ (id)vmLedgerNameForTag:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)viewForProcess:(id)a0;
- (void)addSubrange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 memoryTotal:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; } *)a1 pageSize:(unsigned long long)a2;
- (char)eligibleForSubrangesUsingPageSize:(unsigned long long)a0;
- (id)ensureMemoryObject;
- (char)finalizeObject;
- (void)freeSubrangeList;

@end
