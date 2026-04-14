@class NSView, SiriUIKeyline, CALayer;

@interface SVSSirilandView : NSView {
    NSView *_contentView;
    NSView *_errorView;
    SiriUIKeyline *_keyline;
    CALayer *_contentMaskingLayer;
}

@property (nonatomic) struct UIOffset { double horizontal; double vertical; } topChevronOffset;
@property (retain, nonatomic) NSView *conversationView;
@property (retain, nonatomic) NSView *errorView;
@property (readonly, nonatomic, getter=isShowingDeviceLockView) BOOL showingDeviceLockView;
@property (nonatomic) BOOL masksContent;
@property (nonatomic, getter=isPageTransitionKeylineVisible) BOOL pageTransitionKeylineVisible;

+ (id)sirilandView;

- (void).cxx_destruct;
- (void)layout;
- (BOOL)isFlipped;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
