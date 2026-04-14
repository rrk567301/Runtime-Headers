@class NSScrollView, PKFlippedClipView, NSArray, PKPaymentAuthorizationLayout, NSStackView;
@protocol PKPaymentAuthorizationItemsViewDataSource, PKPaymentAuthorizationItemsViewDelegate;

@interface PKPaymentAuthorizationItemsView : NSView

@property (retain, nonatomic) NSScrollView *paymentItemsScrollView;
@property (retain, nonatomic) PKFlippedClipView *paymentItemsClipView;
@property (retain, nonatomic) NSStackView *stackView;
@property (retain, nonatomic) NSArray *itemViews;
@property (retain, nonatomic) NSArray *itemViewTrackingAreas;
@property (retain, nonatomic) PKPaymentAuthorizationLayout *paymentAuthorizationLayout;
@property (weak, nonatomic) id<PKPaymentAuthorizationItemsViewDataSource> dataSource;
@property (weak, nonatomic) id<PKPaymentAuthorizationItemsViewDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)reloadData;
- (void)updateTrackingAreas;
- (void)_prepareConstraints;
- (void)_createSubviews;
- (void)_addTrackingAreas;
- (unsigned long long)_itemIndexForEvent:(id)a0;
- (void)_removeTrackingAreas;
- (id)itemViewAtIndex:(unsigned long long)a0;

@end
