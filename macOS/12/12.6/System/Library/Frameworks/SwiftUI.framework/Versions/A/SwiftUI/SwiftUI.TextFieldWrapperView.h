@protocol _TtP7SwiftUI28PlatformAccessibilityElement_;

@interface SwiftUI.TextFieldWrapperView : NSControl {
    void /* unknown type, empty encoding */ cachedIdealWidth;
    void /* unknown type, empty encoding */ textField;
}

@property (nonatomic, readonly) id<_TtP7SwiftUI28PlatformAccessibilityElement_> knownRepresentedElement;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } alignmentRectInsets;
@property (nonatomic) unsigned long long controlSize;
@property (nonatomic) BOOL enabled;
@property (nonatomic, readonly) BOOL canBecomeKeyView;
@property (nonatomic, readonly) double firstBaselineOffsetFromTop;
@property (nonatomic, readonly) double lastBaselineOffsetFromBottom;

+ (BOOL)accessibilityIsSingleCelled;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEnabled;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct { double x0; double x1; })_baselineOffsetsAtSize:(struct CGSize { double x0; double x1; })a0;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)a0;

@end
