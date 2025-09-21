@interface CATintedImage : NSObject <NSSecureCoding> {
    unsigned int _copy_flags;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) struct CGImage { } *image;
@property (retain) struct CGColor { } *tint;

+ (id)tintedImageWithCABackingStore:(struct CABackingStore { } *)a0;
+ (id)tintedImageWithCGImage:(struct CGImage { } *)a0 tint:(struct CGColor { } *)a1;
+ (id)tintedImageWithCGImage:(struct CGImage { } *)a0 tint:(struct CGColor { } *)a1 copyFlags:(unsigned int)a2;
+ (void)CAMLParserStartElement:(id)a0;

- (void)CAMLParser:(id)a0 setValue:(id)a1 forKey:(id)a2;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (void)encodeWithCAMLWriter:(id)a0;
- (id)CAMLTypeForKey:(id)a0;
- (void *)CA_copyRenderValue;
- (id)initWithCoder:(id)a0;
- (void)CA_prepareRenderValue;

@end
