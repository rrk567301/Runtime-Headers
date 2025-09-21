@interface IATextInputActionsSessionKBMenuDismissAction : IATextInputActionsSessionAction

@property (nonatomic) unsigned long long KBMenuDismissSource;

+ (char)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)inputActionCount;

@end
