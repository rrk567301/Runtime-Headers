@class MTL4RenderPipelineColorAttachmentDescriptor;

@interface MTL4RenderPipelineColorAttachmentDescriptorArray : NSObject <NSCopying> {
    MTL4RenderPipelineColorAttachmentDescriptor *_descriptors[8];
}

- (id)_descriptorAtIndex:(unsigned long long)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (void)reset;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id *)descriptors:(unsigned long long *)a0;

@end
