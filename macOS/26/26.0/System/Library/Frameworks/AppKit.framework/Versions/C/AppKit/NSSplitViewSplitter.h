@interface NSSplitViewSplitter : NSAccessibilityElement {
    long long _index;
}

+ (id)splitterWithIndex:(long long)a0 parent:(id)a1;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (long long)index;
- (id)accessibilityValue;
- (void)setAccessibilityValue:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (double)_accessibilityMaxValue;
- (double)_accessibilityMinValue;
- (double)_accessibilityMinValueWithoutCollapsing;
- (id)_accessibilityNextContentView;
- (double)_accessibilityNextSplitterMinCoordinate;
- (id)_accessibilityPreviousContentView;
- (double)_accessibilityPreviousSplitterMaxCoordinate;
- (double)_accessibilitySplitterMinCoordinate;
- (id)accessibilityHelp;
- (id)accessibilityMaxValue;
- (id)accessibilityMinValue;
- (id)accessibilityNextContents;
- (long long)accessibilityOrientation;
- (id)accessibilityPreviousContents;
- (BOOL)accessibilityShouldUseUniqueId;
- (id)initWithIndex:(long long)a0 parent:(id)a1;

@end
