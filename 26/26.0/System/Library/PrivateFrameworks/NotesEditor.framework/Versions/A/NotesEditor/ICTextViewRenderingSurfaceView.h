@class NSString;

@interface ICTextViewRenderingSurfaceView : NSView <NSTextViewportRenderingSurface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isFlipped;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;

@end
