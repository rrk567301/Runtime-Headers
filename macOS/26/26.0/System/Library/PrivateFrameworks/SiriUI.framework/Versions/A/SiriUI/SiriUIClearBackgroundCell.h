@class NSString, NSView, NSValue, SiriUISnippetViewController;

@interface SiriUIClearBackgroundCell : NSView <NSCollectionViewElement, SiriUIReusableView> {
    BOOL _selected;
    NSView *_backgroundView;
    NSView *_selectedBackgroundView;
    NSValue *_selectionFrameValue;
}

@property (getter=isSelected) BOOL selected;
@property long long highlightStyle;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } selectionFrame;
@property (retain) NSView *backgroundView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSString *identifier;
@property (weak, nonatomic) SiriUISnippetViewController *snippetViewController;

+ (id)elementKind;
+ (double)defaultHeight;
+ (id)reuseIdentifier;

- (void)updateLayer;
- (void)layout;
- (BOOL)isFlipped;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (BOOL)wantsUpdateLayer;
- (id)selectedBackgroundView;
- (void)setSelectedBackgroundView:(id)a0;
- (void)updateSelectionBackground;

@end
