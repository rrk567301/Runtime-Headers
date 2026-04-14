@class NSMutableIndexSet;
@protocol MTLBuffer;

@interface SCNFixedSizePage : NSObject {
    unsigned long long _elementSize;
    NSMutableIndexSet *_freeIndices;
}

@property (readonly, nonatomic) id<MTLBuffer> buffer;

- (void)dealloc;
- (void)deallocateElementAtOffset:(unsigned long long)a0;
- (unsigned long long)_allocateElement;
- (id)initWithBuffer:(id)a0 elementSize:(unsigned long long)a1;
- (BOOL)isFull;
- (BOOL)hasFreeElementsLeft;
- (id)newSubBuffer;

@end
