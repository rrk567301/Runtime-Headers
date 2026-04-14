@interface BWPreviewStitcherFencedAnimationInfo : BWFencedAnimationInfo

@property double primaryCaptureAspectRatio;
@property struct CGPoint { double x; double y; } primaryCaptureRectCenter;
@property int primaryCaptureRectCenterXPixelOffset;
@property int primaryCaptureRectCenterYPixelOffset;

+ (id)fencedAnimationInfoWithAspectRatio:(double)a0 center:(struct CGPoint { double x0; double x1; })a1 centerXPixelOffset:(int)a2 centerYPixelOffset:(int)a3 fencePortSendRight:(id)a4;

- (id)description;

@end
