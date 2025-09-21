@class NSDictionary;

@interface BWVideoFormat : BWFormat

@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (nonatomic) unsigned long long sliceCount;
@property (nonatomic) unsigned int pixelFormat;
@property (nonatomic) unsigned long long bytesPerRowAlignment;
@property (nonatomic) unsigned long long planeAlignment;
@property (nonatomic) unsigned long long extendedWidth;
@property (nonatomic) unsigned long long extendedHeight;
@property (nonatomic) unsigned int cacheMode;
@property (nonatomic) char prewireBuffers;
@property (nonatomic) char memoryPoolUseAllowed;
@property (readonly, nonatomic) NSDictionary *pixelBufferAttributes;
@property (readonly, nonatomic) int colorSpaceProperties;

+ (void)initialize;
+ (id)colorInfoWithSourceColorSpace:(int)a0 sourcePixelFormat:(unsigned int)a1 sourceDimensions:(struct { int x0; int x1; })a2 requestedPixelFormat:(unsigned int)a3;
+ (int)colorSpacePropertiesForPixelBufferAttachments:(id)a0;
+ (int)colorSpacePropertiesForSourceThatSupportsWideColor:(char)a0 sourceColorSpace:(int)a1 sourcePixelFormat:(unsigned int)a2 sourceDimensions:(struct { int x0; int x1; })a3 requestedPixelFormat:(unsigned int)a4;
+ (int)colorSpacePropertiesForSourceThatSupportsWideColor:(char)a0 sourceColorSpace:(int)a1 sourcePixelFormat:(unsigned int)a2 sourceDimensions:(struct { int x0; int x1; })a3 requestedPixelFormat:(unsigned int)a4 supportedColorSpaces:(id)a5;
+ (int)colorSpacePropertiesWithSourceColorSpace:(int)a0 sourcePixelFormat:(unsigned int)a1 sourceDimensions:(struct { int x0; int x1; })a2 requestedPixelFormat:(unsigned int)a3;
+ (int)colorSpacePropertiesWithSourceColorSpace:(int)a0 sourcePixelFormat:(unsigned int)a1 sourceDimensions:(struct { int x0; int x1; })a2 requestedPixelFormat:(unsigned int)a3 supportedColorSpaces:(id)a4;
+ (id)formatByResolvingRequirements:(id)a0;
+ (id)formatByResolvingRequirements:(id)a0 printErrors:(char)a1;
+ (id)pixelBufferAttachmentsForColorSpaceProperties:(int)a0;

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (char)isEqual:(id)a0;
- (unsigned int)mediaType;
- (struct opaqueCMFormatDescription { } *)formatDescription;
- (char)isHLGColorSpace;

@end
