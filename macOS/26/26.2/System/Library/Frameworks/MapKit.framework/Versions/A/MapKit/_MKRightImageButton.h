@class NSString, NSImage, NSArray, MKImageView, _MKUILabel, NSInvocation;

@interface _MKRightImageButton : NSControl {
    BOOL _trackingClick;
    NSInvocation *_actionInvocation;
    BOOL _titleConstraintsAdded;
    NSArray *_titleOnlyConstraints;
    NSArray *_titleAndImageConstraints;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSImage *image;
@property (readonly, nonatomic) _MKUILabel *titleLabel;
@property (readonly, nonatomic) MKImageView *imageView;

- (void)mouseDown:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)mouseUp:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)firstBaselineAnchor;
- (id)lastBaselineAnchor;
- (BOOL)_shouldTrackEvent:(id)a0;
- (void)setTarget:(id)a0 action:(SEL)a1;

@end
