@class LNAction;

@interface DNDMutableAppAction : DNDAppAction

@property (copy, nonatomic) LNAction *action;
@property (nonatomic, getter=isEnabled) char enabled;

- (void)setEnabled:(char)a0;
- (void)setAction:(id)a0;

@end
