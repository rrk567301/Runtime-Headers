@class NSMutableArray;

@interface IKMultipleSegmentedRawDataBuffer : NSObject {
    NSMutableArray *_buffers;
    unsigned int _blockSize;
}

- (void)dealloc;
- (int)freeSpace;
- (unsigned int)usedSpace;
- (void)freeCache;
- (id)initWithMemorySize:(unsigned int)a0;
- (void *)newSegmentOfSize:(unsigned int)a0;
- (void)releaseSegment:(void *)a0 ofSize:(unsigned int)a1;
- (unsigned int)totalSpace;
- (void)setTotalSpace:(unsigned int)a0;
- (int)estimatedItemCount;
- (int)estimatedFragmentCount;
- (BOOL)containsAddress:(void *)a0;
- (id)segmentedBuffers;
- (id)segmentedBufferAtIndex:(int)a0;

@end
