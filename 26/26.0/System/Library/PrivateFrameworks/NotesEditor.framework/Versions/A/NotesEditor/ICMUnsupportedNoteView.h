@class NSStackView, NSButton, NSTextField;

@interface ICMUnsupportedNoteView : NSView {
    void /* unknown type, empty encoding */ maximumContentWidth;
    void /* unknown type, empty encoding */ $__lazy_storage_$_stackView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_summaryLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_actionButton;
    void /* function */ didClickActionButton;
}

@property (nonatomic, readonly) long long reason;
@property (nonatomic, retain) NSStackView *stackView;
@property (nonatomic, retain) NSTextField *titleLabel;
@property (nonatomic, retain) NSTextField *summaryLabel;
@property (nonatomic, retain) NSButton *actionButton;
@property (nonatomic, copy) id /* block */ didClickActionButton;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithReason:(long long)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)didClickActionButton:(id)a0;

@end
