@class NSView, SiriSharedUINotificationCenterPlatterCloseView, NSTrackingArea;
@protocol SiriSharedUIStackableContentActionHandling;

@interface SiriSharedUINotificationCenterPlatterView : SiriSharedUIStandardView <NCMaterialDelegate, SiriSharedUINotificationCenterPlatterCloseViewDelegate> {
    NSView *_contentView;
    SiriSharedUINotificationCenterPlatterCloseView *_closeView;
    NSTrackingArea *_trackingArea;
    BOOL _offersDismissal;
    NSView *_backgroundView;
}

@property (weak, nonatomic) id<SiriSharedUIStackableContentActionHandling> dismissalActionHandler;
@property (readonly, nonatomic) NSView *customContentView;

- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layout;
- (void)setBackgroundView:(id)a0;
- (void).cxx_destruct;
- (void)appearanceChanged:(BOOL)a0;
- (void)materialChanged:(unsigned char)a0;
- (void)setOffersDismissal:(BOOL)a0 actionHandler:(id)a1;
- (unsigned long long)_materialTypeForMode:(BOOL)a0;
- (id)_platterLayer;
- (double)appliedCornerRadius;
- (void)closeViewTapped:(id)a0;

@end
