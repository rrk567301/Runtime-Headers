@class NSMutableDictionary;

@interface DEProportionalView : NSView {
    NSMutableDictionary *initialSubviewLocationDict;
    BOOL _proportionalOff;
}

- (void)didAddSubview:(id)a0;
- (void)willRemoveSubview:(id)a0;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)resizeSubviewsWithOldSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)setProportionalOff:(BOOL)a0;

@end
