@class NSString, NSColor;

@interface NSHardPocketView : NSView {
    void /* unknown type, empty encoding */ captureView;
    void /* unknown type, empty encoding */ captureViewObserverIDs;
    void /* unknown type, empty encoding */ prefersSolidColorHardPocket;
    void /* unknown type, empty encoding */ _edgesWithSeparators;
    void /* unknown type, empty encoding */ blurView;
    void /* unknown type, empty encoding */ backgroundReplay;
    void /* unknown type, empty encoding */ backgroundColorReplay;
    void /* unknown type, empty encoding */ topSeparatorView;
    void /* unknown type, empty encoding */ bottomSeparatorView;
}

@property (nonatomic, copy) NSString *groupName;
@property (nonatomic, retain) NSColor *color;
@property (nonatomic, readonly) long long _scrollPocketElementStyle;
@property (nonatomic, readonly) BOOL _shouldDescendantsContributeToScrollPocket;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (void)viewDidMoveToWindow;
- (id)initWithCoder:(id)a0;
- (void)viewDidChangeEffectiveAppearance;
- (void).cxx_destruct;
- (void)_didChangeAccessibilityOptions;

@end
