@interface UXSegmentedControl : NSSegmentedControl

@property long long selectedSegmentIndex;
@property char userInteractionEnabled;

- (id)initWithItems:(id)a0;
- (long long)numberOfSegments;
- (void)insertSegmentWithTitle:(id)a0 atIndex:(unsigned long long)a1 animated:(char)a2;
- (void)removeAllSegments;
- (void)setTitle:(id)a0 forSegmentAtIndex:(unsigned long long)a1;

@end
