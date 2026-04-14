@interface MTLTextureViewDescriptor : NSObject <NSCopying> {
    struct MTLTextureViewDescriptorPrivate { unsigned long long pixelFormat; unsigned long long textureType; struct _NSRange { unsigned long long location; unsigned long long length; } levels; struct _NSRange { unsigned long long location; unsigned long long length; } slices; long long writeAccessPattern; unsigned int swizzle; unsigned long long resourceIndex; } _private;
}

@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } levels;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } slices;
@property (nonatomic) unsigned long long resourceIndex;
@property (nonatomic) long long writeAccessPattern;
@property (nonatomic) unsigned long long pixelFormat;
@property (nonatomic) unsigned long long textureType;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } levelRange;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } sliceRange;
@property (nonatomic) struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; } swizzle;

+ (id)textureViewDescriptorWithTexture:(id)a0;

- (id)formattedDescription:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned int)swizzleKey;
- (id)description;
- (void)setSwizzleKey:(unsigned int)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
