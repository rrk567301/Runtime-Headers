@class MTL4RenderPipelineColorAttachmentDescriptor;

@interface MTL4RenderPipelineColorAttachmentDescriptorArray : NSObject <NSCopying> {
    MTL4RenderPipelineColorAttachmentDescriptor *_descriptors[8];
}

- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (unsigned long long)hash;
- (id)_descriptorAtIndex:(unsigned long long)a0;
- (void)dealloc;
- (void)reset;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)init;
- (id *)descriptors:(unsigned long long *)a0;

@end
