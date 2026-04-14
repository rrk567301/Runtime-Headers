@class NSView;

@interface NSContentMaskingView : NSView {
    void /* unknown type, empty encoding */ _contentConstraints;
    void /* unknown type, empty encoding */ _maskConstraints;
}

@property (nonatomic, retain) NSView *contentView;
@property (nonatomic, retain) NSView *maskView;
@property (nonatomic) float contentMaskEquivalencePriority;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
