@interface NSCTGlyphInfo : NSGlyphInfo <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (BOOL)allowsWeakReference;
- (BOOL)retainWeakReference;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)_cfTypeID;
- (id)_baseString;
- (unsigned long long)characterIdentifier;
- (unsigned long long)characterCollection;
- (id)glyphName;
- (unsigned int)_glyph;
- (unsigned int)_glyphForFont:(id)a0 baseString:(id)a1;

@end
