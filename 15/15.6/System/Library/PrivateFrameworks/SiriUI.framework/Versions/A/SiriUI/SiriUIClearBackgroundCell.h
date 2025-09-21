@class NSString, NSView, NSValue, SiriUISnippetViewController;

@interface SiriUIClearBackgroundCell : NSView <NSCollectionViewElement, SiriUIReusableView> {
    char _selected;
    NSView *_backgroundView;
    NSView *_selectedBackgroundView;
    NSValue *_selectionFrameValue;
}

@property (getter=isSelected) char selected;
@property long long highlightStyle;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } selectionFrame;
@property (retain) NSView *backgroundView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSString *identifier;
@property (weak, nonatomic) SiriUISnippetViewController *snippetViewController;

+ (id)reuseIdentifier;
+ (id)elementKind;
+ (double)defaultHeight;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layout;
- (char)isFlipped;
- (void)updateLayer;
- (char)wantsUpdateLayer;
- (id)selectedBackgroundView;
- (void)setSelectedBackgroundView:(id)a0;
- (void)updateSelectionBackground;

@end
