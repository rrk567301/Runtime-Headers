@class NSString, CNQuickActionButton, NSTextField;

@interface CNQuickActionView : NSView

@property (nonatomic) BOOL didCreateConstraints;
@property (retain, nonatomic) CNQuickActionButton *actionButton;
@property (retain, nonatomic) NSTextField *actionLabel;
@property (retain, nonatomic) NSString *actionName;
@property (nonatomic, getter=isEnabled) BOOL enabled;

+ (id)makeActionLabel;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (BOOL)wantsDefaultClipping;
- (id)initWithActionName:(id)a0 actionIcon:(id)a1;
- (void)commonInitWithActionName:(id)a0 actionIcon:(id)a1;
- (void)updateConstraintsIfNecessary;

@end
