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

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isFlipped;
- (void)removeFromSuperview;
- (id)accessibilityChildren;
- (BOOL)acceptsFirstResponder;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void)setAccessibilityLabel:(id)a0;
- (void)setNextKeyView:(id)a0;
- (void)setAccessibilityChildren:(id)a0;
- (void)viewDidEndLiveResize;
- (void)updateKeyViewLoop;
- (void)_commonSidebarContainerViewInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 topBarView:(id)a1 contentView:(id)a2;

@end
