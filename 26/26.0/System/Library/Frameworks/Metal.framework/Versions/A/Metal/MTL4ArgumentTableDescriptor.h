@class NSString;

@interface MTL4ArgumentTableDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long maxBufferBindCount;
@property (nonatomic) unsigned long long maxTextureBindCount;
@property (nonatomic) unsigned long long maxSamplerStateBindCount;
@property (nonatomic) BOOL initializeBindings;
@property (nonatomic) BOOL supportAttributeStrides;
@property (copy, nonatomic) NSString *label;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
