@class NSAttributedString;

@interface RemindersUICore.TTRMResizingTextView : NSTextView {
    void /* unknown type, empty encoding */ shouldAllowVibrancy;
    void /* unknown type, empty encoding */ hasFocus;
    void /* unknown type, empty encoding */ bottomLayoutConstraint;
    void /* unknown type, empty encoding */ superViewHeightConstraint;
    void /* unknown type, empty encoding */ trailingLayoutConstraint;
    void /* unknown type, empty encoding */ $__lazy_storage_$_measurement;
}

@property (nonatomic) long long maxLinesBeforeScroll;
@property (nonatomic) BOOL removesPastedNewlines;
@property (nonatomic) BOOL canChangeLayoutOrientation;
@property (nonatomic, readonly) double firstBaselineOffsetFromTop;
@property (nonatomic, readonly) BOOL allowsVibrancy;
@property (nonatomic, readonly) unsigned long long _axesForDerivingIntrinsicContentSizeFromLayoutSize;
@property (nonatomic, readonly) BOOL _layoutHeightDependsOnWidth;
@property (nonatomic, retain) NSAttributedString *placeholderAttributedString;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)paste:(id)a0;
- (void)layout;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)validateUserInterfaceItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewDidMoveToSuperview;
- (void)didChangeText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;
- (void)viewWillMoveToSuperview:(id)a0;

@end
