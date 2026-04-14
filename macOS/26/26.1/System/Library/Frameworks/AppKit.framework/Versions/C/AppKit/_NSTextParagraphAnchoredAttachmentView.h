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

- (void)setTextLayoutFragment:(id)a0;
- (id)textLayoutFragment;
- (void)layout;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isFlipped;
- (unsigned long long)autoresizingMask;
- (id)initWithTextView:(id)a0 anchoredAttachment:(id)a1;
- (BOOL)shouldBeArchived;

@end
