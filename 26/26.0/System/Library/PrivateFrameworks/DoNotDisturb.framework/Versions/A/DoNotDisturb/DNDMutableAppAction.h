@class LNAction;

@interface DNDMutableAppAction : DNDAppAction

@property (copy, nonatomic) LNAction *action;
@property (nonatomic, getter=isEnabled) BOOL enabled;

- (void)setAction:(id)a0;
- (void)setEnabled:(BOOL)a0;

@end
