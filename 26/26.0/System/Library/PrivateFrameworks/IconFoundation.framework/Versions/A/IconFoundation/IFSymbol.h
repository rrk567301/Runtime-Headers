@class NSURL, CUICatalog, NSString;

@interface IFSymbol : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) CUICatalog *catalog;
@property struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly) NSURL *bundleURL;
@property (readonly) NSString *name;

+ (id)_coreGlyphsBundle;
+ (id)_coreGlyphsPrivateBundle;

- (id)imageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (void)encodeWithCoder:(id)a0;
- (id)imageForDescriptor:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)_flipImageInLayer:(id)a0 requestedWidth:(double)a1;
- (id)_graphicVariantVectorGlyphForGraphicSymbolDescriptor:(id)a0 resolvedRenderingMode:(long long *)a1 allowXOffsetFlip:(BOOL)a2 shouldFlipSymbolImage:(BOOL *)a3;
- (id)_iconStackForGraphicSymbolDescriptor:(id)a0;
- (BOOL)_shouldFlipFromSymbolImage:(id)a0 desiredDirection:(long long)a1;
- (BOOL)_useIconStack;
- (id)imageForGraphicSymbolDescriptor:(id)a0;
- (id)initWithSymbolName:(id)a0 bundleURL:(id)a1;

@end
