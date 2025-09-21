@class NSString, IKStatusLayer;

@interface IKNStatusView : NSView {
    IKStatusLayer *_status;
    char _updateStatusTextAfterMovingToWindow;
}

@property (copy) NSString *statusText;
@property double progress;
@property char canCancel;
@property id delegate;

- (void)setFrameOrigin:(struct CGPoint { double x0; double x1; })a0;
- (void)mouseDown:(id)a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)setWantsLayer:(char)a0;
- (void)viewWillMoveToWindow:(id)a0;
- (void)resetStatus;
- (void)resizeStatusLayer;

@end
