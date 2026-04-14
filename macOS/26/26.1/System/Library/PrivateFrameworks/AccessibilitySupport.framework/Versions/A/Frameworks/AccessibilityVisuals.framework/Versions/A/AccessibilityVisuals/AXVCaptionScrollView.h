@class AXVCaptionTextView;

@interface AXVCaptionScrollView : NSScrollView

@property (retain, nonatomic, setter=_setCaptionTextView:) AXVCaptionTextView *_captionTextView;

+ (Class)_horizontalScrollerClass;
+ (Class)_verticalScrollerClass;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
