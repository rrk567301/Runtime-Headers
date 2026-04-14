@class NSArray, NSDictionary;

@interface BWVideoFormatRequirements : BWFormatRequirements <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (nonatomic) struct { int x0; int x1; } dimensions;
@property (nonatomic) unsigned long long sliceCount;
@property (copy, nonatomic) NSArray *supportedPixelFormats;
@property (copy, nonatomic) NSArray *preferredPixelFormats;
@property (copy, nonatomic) NSArray *supportedColorSpaceProperties;
@property (nonatomic) unsigned long long bytesPerRowAlignment;
@property (nonatomic) unsigned long long planeAlignment;
@property (nonatomic) unsigned long long widthAlignment;
@property (nonatomic) unsigned long long heightAlignment;
@property (copy, nonatomic) NSArray *supportedCacheModes;
@property (readonly, nonatomic) NSDictionary *pixelBufferAttributes;
@property (nonatomic) BOOL prewireBuffers;
@property (nonatomic) BOOL memoryPoolUseAllowed;

+ (void)initialize;
+ (id)formatRequirements;
+ (id)cacheModesForOptimizedCPUAccess;
+ (id)cacheModesForCacheProfile:(int)a0;
+ (id)cacheModesForOptimizedDisplayAccess;
+ (id)cacheModesForOptimizedHWAccess;

- (Class)formatClass;
- (id)debugDescription;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (unsigned int)mediaType;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithPixelBufferAttributes:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
