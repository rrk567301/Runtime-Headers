@interface NSCTGlyphInfo : NSGlyphInfo <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

- (oneway void)release;
- (char)allowsWeakReference;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)retain;
- (unsigned long long)retainCount;
- (char)retainWeakReference;
- (unsigned long long)_cfTypeID;
- (void)encodeWithCoder:(id)a0;
- (id)_baseString;
- (unsigned int)_glyph;
- (unsigned long long)characterCollection;
- (unsigned long long)characterIdentifier;
- (id)glyphName;
- (unsigned int)_glyphForFont:(id)a0 baseString:(id)a1;

@end
