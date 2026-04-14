@interface NSCTGlyphInfo : NSGlyphInfo <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (id)retain;
- (unsigned long long)hash;
- (oneway void)release;
- (unsigned long long)retainCount;
- (unsigned long long)_cfTypeID;
- (BOOL)retainWeakReference;
- (void)encodeWithCoder:(id)a0;
- (BOOL)allowsWeakReference;
- (BOOL)isEqual:(id)a0;
- (id)glyphName;
- (id)_baseString;
- (unsigned int)_glyph;
- (unsigned long long)characterCollection;
- (unsigned long long)characterIdentifier;
- (unsigned int)_glyphForFont:(id)a0 baseString:(id)a1;

@end
