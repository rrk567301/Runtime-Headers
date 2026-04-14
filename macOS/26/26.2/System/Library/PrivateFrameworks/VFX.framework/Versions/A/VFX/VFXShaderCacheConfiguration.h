@class NSString, VFXWorld;

@interface VFXShaderCacheConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long gpuFamily;
@property (nonatomic) unsigned long long pixelFormat;
@property (nonatomic) BOOL usesMultisampling;
@property (nonatomic) BOOL additiveWritesToAlpha;
@property (nonatomic) VFXWorld *world;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (void)dealloc;

@end
