@class NSImage, NSData, XCTImageEncoding, XCTImageMetadata;

@interface XCTImage : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSImage *platformImage;
@property (readonly, nonatomic) XCTImageMetadata *metadata;
@property (readonly, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) XCTImageEncoding *encoding;

+ (id)emptyImageWithSize:(struct CGSize { double x0; double x1; })a0;
+ (id)screenshotPropertiesWithOrientation:(unsigned int)a0 compressionQuality:(id)a1;

- (id)debugQuickLookObject;
- (id)initWithImage:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCGImage:(struct CGImage { } *)a0 metadata:(id)a1 orientation:(unsigned int)a2;
- (id)initWithData:(id)a0 encodedIn:(id)a1 metadata:(id)a2;

@end
