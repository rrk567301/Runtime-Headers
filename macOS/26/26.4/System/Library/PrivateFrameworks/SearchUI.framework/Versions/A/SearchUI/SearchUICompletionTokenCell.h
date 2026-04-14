@class NSImage, NSSearchField, NSFont;

@interface SearchUICompletionTokenCell : TLKTokenAttachmentCell <NSCopying>

@property (retain) NSImage *tokenImage;
@property (retain) NSFont *tokenFont;
@property BOOL showsImagePlaceholder;
@property (weak) NSSearchField *searchField;
@property BOOL useClearToken;

+ (double)cornerRadius;
+ (double)interItemSpacing;
+ (double)horizontalPadding;
+ (double)trailingPadding;

- (BOOL)isEditable;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_textAttributes;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cellFrameForTextContainer:(id)a0 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 glyphPosition:(struct CGPoint { double x0; double x1; })a2 characterIndex:(unsigned long long)a3;
- (struct CGSize { double x0; double x1; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawTokenWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })drawingRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithText:(id)a0 image:(id)a1 showsImagePlaceholder:(BOOL)a2 drawMode:(unsigned long long)a3 font:(id)a4 searchField:(id)a5;
- (id)initWithText:(id)a0 image:(id)a1 showsImagePlaceholder:(BOOL)a2 font:(id)a3 searchField:(id)a4;
- (double)intrinsicTitlePadding;
- (struct CGSize { double x0; double x1; })intrinsicTitleSize;
- (struct CGSize { double x0; double x1; })tokenImageSize;

@end
