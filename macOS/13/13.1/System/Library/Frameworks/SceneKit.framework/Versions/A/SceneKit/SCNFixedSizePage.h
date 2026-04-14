@class NSMutableIndexSet;
@protocol MTLBuffer;

@interface SCNFixedSizePage : NSObject {
    unsigned long long _elementSize;
    NSMutableIndexSet *_freeIndices;
}

@property (readonly, nonatomic) id<MTLBuffer> buffer;

- (void)dealloc;
- (id)initWithBuffer:(id)a0 elementSize:(unsigned long long)a1;
- (BOOL)isFull;
- (BOOL)hasFreeElementsLeft;
- (unsigned long long)_allocateElement;
- (void)deallocateElementAtOffset:(unsigned long long)a0;
- (id)newSubBufferForAllocator:(id)a0;

@end
