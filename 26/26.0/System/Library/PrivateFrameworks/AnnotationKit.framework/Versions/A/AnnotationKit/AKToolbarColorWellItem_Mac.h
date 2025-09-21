@class AKPopoverColorWell, NSString, NSImageView, NSLayoutConstraint, NSButton;
@protocol AKToolbarColorWellItem_Mac_Delegate;

@interface AKToolbarColorWellItem_Mac : NSView {
    NSLayoutConstraint *_buttonWidthConstraint;
    NSLayoutConstraint *_buttonHeightConstraint;
    NSLayoutConstraint *_pulldownIndicatorWidthConstraint;
    NSImageView *_pulldownIndicatorView;
    NSButton *_highlightButton;
    long long _tag;
}

@property (retain) AKPopoverColorWell *colorWell;
@property (nonatomic) unsigned long long displayMode;
@property (copy, nonatomic) NSString *title;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property long long tag;
@property (weak, nonatomic) id<AKToolbarColorWellItem_Mac_Delegate> colorWellDelegate;

- (void)mouseDown:(id)a0;
- (void)viewDidMoveToWindow;
- (void).cxx_destruct;
- (void)_configureForDisplayMode:(unsigned long long)a0;
- (id)initWithBarButtonSystemItem:(unsigned long long)a0 target:(id)a1 action:(SEL)a2 style:(unsigned long long)a3;

@end
