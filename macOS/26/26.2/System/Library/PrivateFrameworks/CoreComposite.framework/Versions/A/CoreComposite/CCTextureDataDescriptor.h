@interface CCTextureDataDescriptor : CCDataDescriptor

@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) long long layerCount;
@property (nonatomic) unsigned long long pixelFormat;
@property (nonatomic) long long mipmapCount;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)acceptVisitor:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;

@end
