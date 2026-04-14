@class MTLAccelerationStructurePassSampleBufferAttachmentDescriptorArray;

@interface MTLAccelerationStructurePassDescriptor : NSObject <NSCopying>

@property (readonly) MTLAccelerationStructurePassSampleBufferAttachmentDescriptorArray *sampleBufferAttachments;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;
+ (id)accelerationStructurePassDescriptor;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)dealloc;
- (id)convertToComputePassDescriptor;
- (id)convertToComputePassDescriptorWithConcurrentDispatch:(BOOL)a0;

@end
