@class NSString;

@interface IATextInputActionsSessionKBMenuInteractionAction : IATextInputActionsSessionAction

@property (nonatomic) unsigned long long KBMenuInteractionSource;
@property (nonatomic) unsigned long long KBMenuSelectedAction;
@property (copy, nonatomic) NSString *updatedInputMode;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (long long)inputActionCount;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initFromDictionary:(id)a0;

@end
