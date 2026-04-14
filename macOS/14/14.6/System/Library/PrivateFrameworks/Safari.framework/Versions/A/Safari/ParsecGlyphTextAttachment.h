@class NSImage, NSString;

@interface ParsecGlyphTextAttachment : NSTextAttachment <ParsecHighlightableTextAttachment>

@property (retain, nonatomic) NSImage *glyph;
@property (nonatomic) BOOL shouldSkipHighlighting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_initWithGlyph:(id)a0 highlightColor:(id)a1;
- (id)highlightedCopyWithHighlightColor:(id)a0;
- (id)initWithGlyph:(id)a0;

@end
