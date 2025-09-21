@class NSImageView;
@protocol SiriSharedUINotificationCenterPlatterCloseViewDelegate;

@interface SiriSharedUINotificationCenterPlatterCloseView : SiriSharedUIStandardView {
    NSImageView *_closeIconImage;
}

@property (weak, nonatomic) id<SiriSharedUINotificationCenterPlatterCloseViewDelegate> delegate;

- (void)mouseDown:(id)a0;
- (void)layout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (BOOL)acceptsFirstMouse:(id)a0;
- (BOOL)accessibilityPerformPress;
- (id)_platterLayer;
- (void)applyMaterial:(unsigned long long)a0 style:(unsigned char)a1;
- (id)initWithMaterial:(unsigned long long)a0 style:(unsigned char)a1 delegate:(id)a2;

@end
