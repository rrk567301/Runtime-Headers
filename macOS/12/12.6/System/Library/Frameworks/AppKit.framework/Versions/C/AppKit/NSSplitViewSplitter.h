@interface NSSplitViewSplitter : NSAccessibilityElement {
    long long _index;
}

+ (id)splitterWithIndex:(long long)a0 parent:(id)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (long long)index;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (BOOL)accessibilityShouldUseUniqueId;
- (id)accessibilityValue;
- (void)setAccessibilityValue:(id)a0;
- (id)accessibilityNextContents;
- (long long)accessibilityOrientation;
- (id)accessibilityPreviousContents;
- (id)accessibilityMinValue;
- (id)accessibilityMaxValue;
- (id)accessibilityHelp;
- (id)initWithIndex:(long long)a0 parent:(id)a1;
- (double)_accessibilityPreviousSplitterMaxCoordinate;
- (double)_accessibilityNextSplitterMinCoordinate;
- (double)_accessibilityMinValueWithoutCollapsing;
- (double)_accessibilitySplitterMinCoordinate;
- (double)_accessibilityMaxValue;
- (double)_accessibilityMinValue;
- (id)_accessibilityPreviousContentView;
- (id)_accessibilityNextContentView;

@end
