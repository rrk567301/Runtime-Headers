@class NSString;

@interface IATextInputActionsSessionKBMenuInteractionAction : IATextInputActionsSessionAction

@property (nonatomic) unsigned long long KBMenuInteractionSource;
@property (nonatomic) unsigned long long KBMenuSelectedAction;
@property (copy, nonatomic) NSString *updatedInputMode;

+ (BOOL)supportsSecureCoding;

- (id)initFromDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)toDictionary;
- (long long)inputActionCount;
- (void).cxx_destruct;

@end
