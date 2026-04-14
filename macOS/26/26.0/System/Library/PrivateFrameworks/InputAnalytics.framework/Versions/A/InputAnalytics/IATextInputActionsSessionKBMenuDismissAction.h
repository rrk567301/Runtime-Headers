@interface IATextInputActionsSessionKBMenuDismissAction : IATextInputActionsSessionAction

@property (nonatomic) unsigned long long KBMenuDismissSource;

+ (BOOL)supportsSecureCoding;

- (id)initFromDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)toDictionary;
- (long long)inputActionCount;

@end
