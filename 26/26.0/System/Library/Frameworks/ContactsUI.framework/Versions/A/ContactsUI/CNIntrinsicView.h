@protocol CNIntrinsicViewDelegate;

@interface CNIntrinsicView : NSView

@property (weak, nonatomic) id<CNIntrinsicViewDelegate> delegate;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;

@end
