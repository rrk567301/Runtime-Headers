@interface UXSegmentedControl : NSSegmentedControl

@property long long selectedSegmentIndex;
@property BOOL userInteractionEnabled;

- (id)initWithItems:(id)a0;
- (long long)numberOfSegments;
- (void)removeAllSegments;
- (void)insertSegmentWithTitle:(id)a0 atIndex:(unsigned long long)a1 animated:(BOOL)a2;
- (void)setTitle:(id)a0 forSegmentAtIndex:(unsigned long long)a1;

@end
