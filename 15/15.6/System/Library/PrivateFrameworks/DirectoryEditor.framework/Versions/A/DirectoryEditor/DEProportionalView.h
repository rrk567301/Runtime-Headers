@class NSMutableDictionary;

@interface DEProportionalView : NSView {
    NSMutableDictionary *initialSubviewLocationDict;
    char _proportionalOff;
}

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)commonInit;
- (void)didAddSubview:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)resizeSubviewsWithOldSize:(struct CGSize { double x0; double x1; })a0;
- (void)willRemoveSubview:(id)a0;
- (void)setProportionalOff:(char)a0;

@end
