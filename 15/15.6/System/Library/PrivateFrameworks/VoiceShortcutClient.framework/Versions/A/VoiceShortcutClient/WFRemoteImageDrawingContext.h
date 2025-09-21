@interface WFRemoteImageDrawingContext : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long bitsPerComponent;
@property (readonly, nonatomic) unsigned long long numberOfComponents;
@property (readonly, nonatomic) unsigned int bitmapInfo;
@property (readonly, nonatomic) double screenScale;
@property (readonly, nonatomic) unsigned long long sizePerImage;
@property (readonly, nonatomic) void *buffer;
@property (readonly, nonatomic) unsigned long long bufferSize;
@property (readonly, nonatomic) unsigned long long imageCount;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) struct CGSize { double width; double height; } singleImageSize;
@property (readonly, nonatomic) struct CGColorSpace { } *colorSpace;
@property (readonly, nonatomic) char drawAlphaOnly;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct CGImage { } *)imageAtIndex:(unsigned long long)a0;
- (void)accessBitmapContextForImageAtIndex:(unsigned long long)a0 accessBlock:(id /* block */)a1;
- (char)allocateSharedBuffer;
- (id)initWithAlphaOnlyImageCount:(unsigned long long)a0 singleImageSize:(struct CGSize { double x0; double x1; })a1 scale:(double)a2;
- (id)initWithImageCount:(unsigned long long)a0 singleImageSize:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 colorSpace:(struct CGColorSpace { } *)a3;
- (id)initWithImageCount:(unsigned long long)a0 singleImageSize:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 colorSpace:(struct CGColorSpace { } *)a3 buffer:(void *)a4 bufferSize:(unsigned long long)a5 drawAlphaOnly:(char)a6;

@end
