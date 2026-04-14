@class ReaderContainerView, NSView, BrowserWKView;
@protocol PageWithHeaderViewDelegate;

@interface PageWithHeaderView : NSView

@property (weak, nonatomic) BrowserWKView *browserWKView;
@property (weak, nonatomic) ReaderContainerView *readerContainerView;
@property (weak, nonatomic) id<PageWithHeaderViewDelegate> delegate;
@property (readonly, nonatomic) NSView *contentView;

- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_pageContentFrame;

@end
