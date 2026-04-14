@interface NSCTGlyphInfo : NSGlyphInfo <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (unsigned long long)_cfTypeID;
- (id)retain;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)retainCount;
- (id)glyphName;
- (BOOL)allowsWeakReference;
- (oneway void)release;
- (BOOL)retainWeakReference;
- (id)_baseString;
- (unsigned int)_glyph;
- (unsigned long long)characterCollection;
- (unsigned long long)characterIdentifier;
- (unsigned int)_glyphForFont:(id)a0 baseString:(id)a1;

@end
