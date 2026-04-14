@class MTL4RenderPipelineColorAttachmentDescriptor;

@interface MTL4RenderPipelineColorAttachmentDescriptorArray : NSObject <NSCopying> {
    MTL4RenderPipelineColorAttachmentDescriptor *_descriptors[8];
}

- (id)_descriptorAtIndex:(unsigned long long)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)init;
- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (void)dealloc;
- (void)reset;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id *)descriptors:(unsigned long long *)a0;

@end
