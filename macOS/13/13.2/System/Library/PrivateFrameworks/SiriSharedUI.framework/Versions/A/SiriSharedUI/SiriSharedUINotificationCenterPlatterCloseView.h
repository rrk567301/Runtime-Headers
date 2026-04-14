@class NSImageView;
@protocol SiriSharedUINotificationCenterPlatterCloseViewDelegate;

@interface SiriSharedUINotificationCenterPlatterCloseView : SiriSharedUIStandardView {
    NSImageView *_closeIconImage;
}

@property (weak, nonatomic) id<SiriSharedUINotificationCenterPlatterCloseViewDelegate> delegate;

- (void).cxx_destruct;
- (void)layout;
- (void)mouseDown:(id)a0;
- (BOOL)accessibilityPerformPress;
- (BOOL)acceptsFirstMouse:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_platterLayer;
- (id)initWithMaterial:(unsigned long long)a0 style:(unsigned char)a1 delegate:(id)a2;
- (void)applyMaterial:(unsigned long long)a0 style:(unsigned char)a1;

@end
