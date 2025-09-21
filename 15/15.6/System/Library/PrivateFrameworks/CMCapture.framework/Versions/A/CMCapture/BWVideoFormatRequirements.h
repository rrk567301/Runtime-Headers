@class NSArray, NSDictionary;

@interface BWVideoFormatRequirements : BWFormatRequirements <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
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
@property (nonatomic) char prewireBuffers;
@property (nonatomic) char memoryPoolUseAllowed;

+ (void)initialize;
+ (id)cacheModesForOptimizedCPUAccess;
+ (id)cacheModesForCacheProfile:(int)a0;
+ (id)cacheModesForOptimizedDisplayAccess;
+ (id)cacheModesForOptimizedHWAccess;
+ (id)formatRequirements;

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned int)mediaType;
- (id)initWithPixelBufferAttributes:(id)a0;
- (Class)formatClass;

@end
