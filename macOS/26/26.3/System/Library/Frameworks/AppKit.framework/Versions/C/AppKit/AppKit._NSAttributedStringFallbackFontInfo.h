@interface AppKit._NSAttributedStringFallbackFontInfo : NSObject

@property (nonatomic, readonly) BOOL multipleFontsInSelectedRange;
@property (nonatomic, readonly) const struct __CTFont { } *firstFont;
@property (nonatomic, readonly) const struct __CTFont { } *firstDocumentFont;
@property (nonatomic, readonly) BOOL firstFontIsFallback;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithMultipleFontsInSelectedRange:(BOOL)a0 firstFont:(const struct __CTFont { } *)a1 firstDocumentFont:(const struct __CTFont { } *)a2;

@end
