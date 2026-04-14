@interface IATextInputActionsSessionKBMenuDismissAction : IATextInputActionsSessionAction

@property (nonatomic) unsigned long long KBMenuDismissSource;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (long long)inputActionCount;
- (void)encodeWithCoder:(id)a0;
- (id)toDictionary;
- (id)initFromDictionary:(id)a0;

@end
