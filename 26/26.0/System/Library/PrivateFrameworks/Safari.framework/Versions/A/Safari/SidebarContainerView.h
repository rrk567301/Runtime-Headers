@class NSView, NSString;
@protocol SafariViewDelegate;

@interface SidebarContainerView : NSView <SafariDelegatingView> {
    NSView *_externalNextKeyView;
}

@property (retain, nonatomic) NSView *topBarView;
@property (retain, nonatomic) NSView *contentView;
@property (weak, nonatomic) id<SafariViewDelegate> safariViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accessibilityLabel;
- (void)removeFromSuperview;
- (void)dealloc;
- (BOOL)isFlipped;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (void)setAccessibilityLabel:(id)a0;
- (void).cxx_destruct;
- (void)setNextKeyView:(id)a0;
- (BOOL)acceptsFirstResponder;
- (id)accessibilityChildren;
- (void)setAccessibilityChildren:(id)a0;
- (void)updateKeyViewLoop;
- (void)viewDidEndLiveResize;
- (void)_commonSidebarContainerViewInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 topBarView:(id)a1 contentView:(id)a2;

@end
