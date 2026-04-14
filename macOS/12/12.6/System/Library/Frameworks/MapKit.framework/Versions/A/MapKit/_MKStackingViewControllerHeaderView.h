@class NSString, _MKUILabel;

@interface _MKStackingViewControllerHeaderView : NSView {
    _MKUILabel *_titleLabel;
}

@property (copy, nonatomic) NSString *title;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
