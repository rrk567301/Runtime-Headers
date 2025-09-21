@interface VINPixelBufferDescriptor : NSObject

@property (readonly, nonatomic) unsigned int pixelFormatType;
@property (readonly, nonatomic) unsigned long long width;
@property (readonly, nonatomic) unsigned long long height;

+ (id)new;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithE5SurfaceDescriptor:(struct e5rt_surface_desc { } *)a0 error:(id *)a1;
- (id)initWithPixelFormatType:(unsigned int)a0 width:(unsigned long long)a1 height:(unsigned long long)a2;
- (BOOL)matchesE5SurfaceDescriptor:(struct e5rt_surface_desc { } *)a0 error:(id *)a1;

@end
