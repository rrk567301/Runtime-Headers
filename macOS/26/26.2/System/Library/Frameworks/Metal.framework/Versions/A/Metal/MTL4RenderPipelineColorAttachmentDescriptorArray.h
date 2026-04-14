@class MTL4RenderPipelineColorAttachmentDescriptor;

@interface MTL4RenderPipelineColorAttachmentDescriptorArray : NSObject <NSCopying> {
    MTL4RenderPipelineColorAttachmentDescriptor *_descriptors[8];
}

- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reset;
- (id)_descriptorAtIndex:(unsigned long long)a0;
- (id)init;
- (void)dealloc;
- (id *)descriptors:(unsigned long long *)a0;

@end
