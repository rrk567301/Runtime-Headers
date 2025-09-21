@class NSString, NSAdaptiveImageGlyph;

@interface NSEmojiImageTextAttachment : NSTextAttachment <CTEmojiImageProviding> {
    NSAdaptiveImageGlyph *_glyph;
}

@property (copy) NSString *contentIdentifier;
@property (copy) NSString *shortDescription;
@property (readonly) NSAdaptiveImageGlyph *adaptiveImageGlyph;

+ (void)initialize;
+ (void)flushInstanceCache;
+ (id)_UTIForEmojiImage;
+ (BOOL)_readsEmojiImageTextAttachmentFromDocumentFormats;
+ (id)emojiImageTextAttachmentForContentIdentifier:(id)a0;
+ (void)setEmojiImageTextAttachment:(id)a0 forContentIdentifier:(id)a1;

- (id)contentIdentifier;
- (id)initWithData:(id)a0;
- (unsigned long long)hash;
- (id)shortDescription;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)strikes;
- (id)_fallbackFileWrapper;
- (struct CGImage { } *)imageForPointSize:(double)a0 scaleFactor:(double)a1 imageOffset:(out struct CGPoint { double x0; double x1; } *)a2 imageSize:(out struct CGSize { double x0; double x1; } *)a3;
- (struct CGImage { } *)imageForProposedSize:(struct CGSize { double x0; double x1; })a0 scaleFactor:(double)a1 imageOffset:(out struct CGPoint { double x0; double x1; } *)a2 imageSize:(out struct CGSize { double x0; double x1; } *)a3;
- (id)initWithFileWrapper:(id)a0;
- (id)adaptiveImageGlyph;
- (BOOL)_isEmojiImage;
- (id)initWithAdaptiveImageGlyph:(id)a0;

@end
