@class NSMutableDictionary, IKCacheFragHandler;

@interface IKSegmentedRawDataBuffer : NSObject {
    unsigned int _totalSpace;
    unsigned int _usedSpace;
    int _estimatedItemCount;
    NSMutableDictionary *_fragments;
    void *_segmentedBuffer;
    IKCacheFragHandler *_fragHandler;
    unsigned int _realBufferLength;
    unsigned int _totalSpacePlusOverhead;
}

- (void)finalize;
- (void)dealloc;
- (void *)startAddress;
- (int)freeSpace;
- (void)freeCache;
- (void)checkBufferSize;
- (void)incrSize:(unsigned int)a0;
- (void)decrSize:(unsigned int)a0;
- (id)initWithMemorySize:(unsigned int)a0;
- (void *)newSegmentOfSize:(unsigned int)a0;
- (void)releaseSegment:(void *)a0 ofSize:(unsigned int)a1;
- (unsigned int)totalSpace;
- (unsigned int)usedSpace;
- (void)setTotalSpace:(unsigned int)a0;
- (int)estimatedItemCount;
- (int)estimatedFragmentCount;
- (id)fragHandler;
- (id)cacheFragHandler;
- (unsigned int)segmentedBufferLength;

@end
