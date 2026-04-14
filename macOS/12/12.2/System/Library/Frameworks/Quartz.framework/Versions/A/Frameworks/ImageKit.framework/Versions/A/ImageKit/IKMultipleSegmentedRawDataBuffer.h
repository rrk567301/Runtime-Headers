@class NSMutableArray;

@interface IKMultipleSegmentedRawDataBuffer : NSObject {
    NSMutableArray *_buffers;
    unsigned int _blockSize;
}

- (void)dealloc;
- (int)freeSpace;
- (BOOL)containsAddress:(void *)a0;
- (void)freeCache;
- (id)initWithMemorySize:(unsigned int)a0;
- (void *)newSegmentOfSize:(unsigned int)a0;
- (void)releaseSegment:(void *)a0 ofSize:(unsigned int)a1;
- (unsigned int)totalSpace;
- (unsigned int)usedSpace;
- (void)setTotalSpace:(unsigned int)a0;
- (int)estimatedItemCount;
- (int)estimatedFragmentCount;
- (id)segmentedBuffers;
- (id)segmentedBufferAtIndex:(int)a0;

@end
