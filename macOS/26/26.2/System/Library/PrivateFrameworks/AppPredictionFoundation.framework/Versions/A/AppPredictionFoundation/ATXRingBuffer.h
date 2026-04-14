@class NSMutableArray;

@interface ATXRingBuffer : NSObject {
    unsigned long long _maxSize;
    NSMutableArray *_bufferArray;
    unsigned long long _readStartIndex;
}

- (void).cxx_destruct;
- (void)addObject:(id)a0;
- (id)initWithMaxSize:(unsigned long long)a0;
- (id)init;
- (id)toArray;

@end
