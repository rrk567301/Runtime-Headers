@class NSMutableIndexSet;
@protocol MTLBuffer;

@interface VFXFixedSizePage : NSObject {
    id<MTLBuffer> _buffer;
    unsigned long long _elementSize;
    NSMutableIndexSet *_freeIndices;
}

- (void)dealloc;
- (unsigned long long)_allocateElement;
- (id)initWithBuffer:(id)a0 elementSize:(unsigned long long)a1;
- (id)newSubBufferForAllocator:(id)a0;

@end
