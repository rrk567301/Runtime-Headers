@class NSMutableArray;

@interface ATXRingBuffer : NSObject {
    unsigned long long _maxSize;
    NSMutableArray *_bufferArray;
    unsigned long long _readStartIndex;
}

- (id)initWithMaxSize:(unsigned long long)a0;
- (void)addObject:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)toArray;

@end
