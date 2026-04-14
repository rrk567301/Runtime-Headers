@interface NSCTGlyphInfo : NSGlyphInfo <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (unsigned long long)_cfTypeID;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (void)encodeWithCoder:(id)a0;
- (id)retain;
- (unsigned long long)retainCount;
- (id)glyphName;
- (oneway void)release;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)_baseString;
- (unsigned int)_glyph;
- (unsigned long long)characterCollection;
- (unsigned long long)characterIdentifier;
- (unsigned int)_glyphForFont:(id)a0 baseString:(id)a1;

@end
