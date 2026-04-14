@class OSABinaryImageSegment, NSMutableArray, NSMutableDictionary;

@interface OSABinaryImageCatalog : NSObject {
    OSABinaryImageSegment *_absolute_segment;
    OSABinaryImageSegment *_kernel_cache_segment;
    NSMutableArray *_kernel_segments;
    NSMutableArray *_kernel_text_exec_segments;
    NSMutableArray *_rootedCacheLibs;
    OSABinaryImageSegment *_targeted_cache;
    unsigned long long _targeted_slide;
    NSMutableDictionary *_shared_segments;
    NSMutableArray *_used_segments;
    NSMutableArray *_exclave_shared_caches;
    NSMutableArray *_notes;
}

+ (BOOL)isApplePath:(id)a0 orBundle:(id)a1;

- (void)setKernelCache:(unsigned char[16])a0 address:(unsigned long long)a1 size:(unsigned long long)a2;
- (BOOL)isAddressInTargetedCache:(unsigned long long)a0;
- (void)setKernelImages:(id)a0;
- (id)searchFrame:(unsigned long long)a0 in:(id)a1 regions:(id)a2 result:(id *)a3;
- (id)reportUsedImages;
- (id)searchFrame:(unsigned long long)a0 in:(id)a1 result:(id *)a2;
- (void)targetSharedCache:(unsigned char[16])a0 withSlide:(unsigned long long)a1 atBaseAddress:(unsigned long long)a2;
- (void)setKernelTextExecImages:(id)a0;
- (id)init;
- (void)appendNotesTo:(id)a0;
- (void)clearExclaveSharedCaches;
- (void)setRootedCacheLibs:(struct dyld_uuid_info_64 { unsigned long long x0; unsigned char x1[16]; } *)a0 count:(unsigned int)a1;
- (void).cxx_destruct;
- (unsigned long long)markImageAsUsed:(id)a0 from:(int)a1;
- (void)addExclaveSharedCache:(id)a0;
- (id)reportUsedImagesFullInfoUsingBlock:(id /* block */)a0;

@end
