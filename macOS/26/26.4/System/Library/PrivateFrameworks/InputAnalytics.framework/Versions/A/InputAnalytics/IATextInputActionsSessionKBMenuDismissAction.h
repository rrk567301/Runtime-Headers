@interface IATextInputActionsSessionKBMenuDismissAction : IATextInputActionsSessionAction

@property (nonatomic) unsigned long long KBMenuDismissSource;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initFromDictionary:(id)a0;
- (long long)inputActionCount;
- (id)toDictionary;
- (id)initWithCoder:(id)a0;

@end
