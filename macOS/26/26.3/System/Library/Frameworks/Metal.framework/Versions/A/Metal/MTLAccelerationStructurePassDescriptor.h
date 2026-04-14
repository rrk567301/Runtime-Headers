@class MTLAccelerationStructurePassSampleBufferAttachmentDescriptorArray;

@interface MTLAccelerationStructurePassDescriptor : NSObject <NSCopying>

@property (readonly) MTLAccelerationStructurePassSampleBufferAttachmentDescriptorArray *sampleBufferAttachments;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)accelerationStructurePassDescriptor;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)convertToComputePassDescriptor;
- (id)convertToComputePassDescriptorWithConcurrentDispatch:(BOOL)a0;

@end
