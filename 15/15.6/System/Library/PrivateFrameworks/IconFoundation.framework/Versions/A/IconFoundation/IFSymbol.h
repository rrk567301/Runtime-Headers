@class NSURL, CUICatalog, NSString;

@interface IFSymbol : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) CUICatalog *catalog;
@property struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly) NSURL *bundleURL;
@property (readonly) NSString *name;

+ (id)_coreGlyphsBundle;
+ (id)_coreGlyphsPrivateBundle;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)imageForDescriptor:(id)a0;
- (id)_lookupResolvedName:(id)a0;
- (char)_shouldFlipFromSymbolImage:(id)a0 desiredDirection:(long long)a1;
- (id)imageForGraphicSymbolDescriptor:(id)a0;
- (id)imageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)initWithSymbolName:(id)a0 bundleURL:(id)a1;

@end
