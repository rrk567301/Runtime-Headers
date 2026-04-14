@class ICCameraFile, NSImageView;

@interface IKCameraIconCellView : NSTableCellView

@property ICCameraFile *cameraItem;
@property NSImageView *lockIcon;
@property NSImageView *successIcon;
@property NSImageView *burstIcon;
@property NSImageView *livePhotoIcon;

- (void)setObjectValue:(id)a0;
- (void)drawRectxxx:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
