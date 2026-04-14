@interface NSSplitViewSplitter : NSAccessibilityElement {
    long long _index;
}

+ (id)splitterWithIndex:(long long)a0 parent:(id)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (long long)index;
- (BOOL)accessibilityShouldUseUniqueId;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityValue;
- (void)setAccessibilityValue:(id)a0;
- (id)accessibilityNextContents;
- (long long)accessibilityOrientation;
- (id)accessibilityPreviousContents;
- (id)accessibilityMinValue;
- (id)accessibilityMaxValue;
- (id)accessibilityHelp;
- (id)initWithIndex:(long long)a0 parent:(id)a1;
- (double)_accessibilitySplitterMinCoordinate;
- (double)_accessibilityPreviousSplitterMaxCoordinate;
- (double)_accessibilityNextSplitterMinCoordinate;
- (double)_accessibilityMinValueWithoutCollapsing;
- (double)_accessibilityMinValue;
- (double)_accessibilityMaxValue;
- (id)_accessibilityPreviousContentView;
- (id)_accessibilityNextContentView;

@end
