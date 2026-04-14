@class NSTextField;

@interface LockdownModeBarView : NSView {
    NSTextField *_lockdownModeStatusLabel;
}

@property (nonatomic) long long lockdownModeStatus;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_updateLockdownStatusLabel;

@end
