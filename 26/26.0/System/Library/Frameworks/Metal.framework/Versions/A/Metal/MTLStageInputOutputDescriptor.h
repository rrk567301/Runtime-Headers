@class MTLAttributeDescriptorArray, MTLBufferLayoutDescriptorArray;

@interface MTLStageInputOutputDescriptor : NSObject <NSCopying>

@property (readonly) MTLBufferLayoutDescriptorArray *layouts;
@property (readonly) MTLAttributeDescriptorArray *attributes;
@property (nonatomic) unsigned long long indexType;
@property (nonatomic) unsigned long long indexBufferIndex;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)stageInputOutputDescriptor;

- (void)reset;
- (id)formattedDescription:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
