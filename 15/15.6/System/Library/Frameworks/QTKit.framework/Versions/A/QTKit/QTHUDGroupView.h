@class NSArray, NSMapTable;

@interface QTHUDGroupView : NSView {
    NSArray *_items;
    NSMapTable *_viewItemMap;
    struct __CFRunLoopObserver { } *_observer;
}

+ (void)initialize;
+ (char)automaticallyNotifiesObserversOfItems;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (struct CGSize { double x0; double x1; })maxSize;
- (struct CGSize { double x0; double x1; })minSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)items;
- (void)layoutIfNeeded;
- (void)layoutSubviews;
- (char)needsLayout;
- (void)replaceSubview:(id)a0 with:(id)a1;
- (void)resizeSubviewsWithOldSize:(struct CGSize { double x0; double x1; })a0;
- (void)setBoundsOrigin:(struct CGPoint { double x0; double x1; })a0;
- (void)setBoundsSize:(struct CGSize { double x0; double x1; })a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)setItems:(id)a0;
- (void)setNeedsLayout;
- (void)viewWillDraw;
- (void)getRects:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 forItemsAtIndexes:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForItemAtIndex:(unsigned long long)a0;

@end
