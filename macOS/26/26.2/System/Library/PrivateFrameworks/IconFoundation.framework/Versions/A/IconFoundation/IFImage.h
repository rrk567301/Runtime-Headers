@class ICRIconLayer, NSUUID, NSData, CUICatalog, ICRFinalizedIcon, CALayer;

@interface IFImage : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL placeholder;
@property (readonly) NSUUID *uuid;
@property (readonly) NSData *validationToken;
@property (readonly) NSData *bitmapData;
@property (readonly) NSData *data;
@property (retain) NSData *data;
@property (retain) NSData *layerData;
@property (retain) CUICatalog *catalog;
@property BOOL largest;
@property (retain) ICRFinalizedIcon *finalizedIcon;
@property (readonly) double dimension;
@property struct CGSize { double x0; double x1; } minimumSize;
@property BOOL placeholder;
@property unsigned long long validationFlags;
@property struct CGSize { double x0; double x1; } iconSize;
@property (readonly) struct CGSize { double x0; double x1; } size;
@property (readonly) double scale;
@property (readonly) struct CGSize { double x0; double x1; } pixelSize;
@property (readonly) struct CGImage { } *CGImage;
@property (readonly) CALayer *CALayer;
@property (readonly) ICRIconLayer *ICRIconLayer;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)imageWithContentsOfURL:(id)a0;
+ (struct CGImage { } *)createCGImageWithIFImageData:(id)a0;
+ (struct CGColorSpace { } *)defaultCGColorSpace;
+ (struct CGImage { } *)createCGImageWithBitmapData:(id)a0;
+ (id)_layerDataFromIFImageData:(id)a0;
+ (struct CGImage { } *)escapingCGImageWithCGImage:(struct CGImage { } *)a0;

- (id)uuid;
- (double)dimension;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithIOSurface:(struct __IOSurface { } *)a0 scale:(double)a1;
- (id)initWithData:(id)a0 uuid:(id)a1 validationToken:(id)a2;
- (BOOL)writeToURL:(id)a0;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 layerData:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })pixelSize;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 finalizedIcon:(id)a2;
- (id)_init;
- (void).cxx_destruct;
- (id)initWithContentsOfURL:(id)a0;
- (id)validationToken;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 minimumSize:(struct CGSize { double x0; double x1; })a2 placeholder:(BOOL)a3;
- (id)initWithContentsOfURL:(id)a0 scale:(double)a1;
- (id)initWithData:(id)a0 uuid:(id)a1;
- (BOOL)writeToURL:(id)a0 options:(id)a1;

@end
