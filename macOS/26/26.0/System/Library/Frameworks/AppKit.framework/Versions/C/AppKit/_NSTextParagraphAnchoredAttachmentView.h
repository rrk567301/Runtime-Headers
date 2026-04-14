@class NSTextLayoutFragment, NSString, NSTextParagraphAnchoredAttachment, NSTextView;

@interface _NSTextParagraphAnchoredAttachmentView : NSView <NSTextViewportRenderingSurface> {
    NSTextView *_textView;
    NSTextLayoutFragment *_textLayoutFragment;
}

@property (readonly, weak) NSTextParagraphAnchoredAttachment *anchoredAttachment;
@property (weak) NSTextLayoutFragment *textLayoutFragment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)textLayoutFragment;
- (void)setTextLayoutFragment:(id)a0;
- (void)dealloc;
- (void)layout;
- (BOOL)isFlipped;
- (void).cxx_destruct;
- (unsigned long long)autoresizingMask;
- (id)initWithTextView:(id)a0 anchoredAttachment:(id)a1;
- (BOOL)shouldBeArchived;

@end
