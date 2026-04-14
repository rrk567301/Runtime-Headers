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

- (void)dealloc;
- (void)finalize;
- (void *)startAddress;
- (int)freeSpace;
- (unsigned int)usedSpace;
- (void)freeCache;
- (id)initWithMemorySize:(unsigned int)a0;
- (void)incrSize:(unsigned int)a0;
- (void)decrSize:(unsigned int)a0;
- (void)checkBufferSize;
- (void *)newSegmentOfSize:(unsigned int)a0;
- (void)releaseSegment:(void *)a0 ofSize:(unsigned int)a1;
- (unsigned int)totalSpace;
- (void)setTotalSpace:(unsigned int)a0;
- (int)estimatedItemCount;
- (int)estimatedFragmentCount;
- (id)fragHandler;
- (id)cacheFragHandler;
- (unsigned int)segmentedBufferLength;

@end
