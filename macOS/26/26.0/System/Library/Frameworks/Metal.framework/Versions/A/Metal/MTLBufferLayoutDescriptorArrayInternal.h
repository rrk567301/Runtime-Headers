@class MTLBufferLayoutDescriptorInternal;

@interface MTLBufferLayoutDescriptorArrayInternal : MTLBufferLayoutDescriptorArray {
    MTLBufferLayoutDescriptorInternal *_descriptors[31];
}

- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (void)dealloc;

@end
