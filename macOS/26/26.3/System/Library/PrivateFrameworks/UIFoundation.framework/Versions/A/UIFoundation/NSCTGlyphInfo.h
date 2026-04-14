@interface NSCTGlyphInfo : NSGlyphInfo <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (unsigned long long)retainCount;
- (unsigned long long)_cfTypeID;
- (id)retain;
- (BOOL)allowsWeakReference;
- (BOOL)retainWeakReference;
- (BOOL)isEqual:(id)a0;
- (id)glyphName;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (oneway void)release;
- (id)_baseString;
- (unsigned int)_glyph;
- (unsigned long long)characterCollection;
- (unsigned long long)characterIdentifier;
- (unsigned int)_glyphForFont:(id)a0 baseString:(id)a1;

@end
