@class NSString;

@interface IATextInputActionsSessionKBMenuInteractionAction : IATextInputActionsSessionAction

@property (nonatomic) unsigned long long KBMenuInteractionSource;
@property (nonatomic) unsigned long long KBMenuSelectedAction;
@property (copy, nonatomic) NSString *updatedInputMode;

+ (BOOL)supportsSecureCoding;

- (id)initFromDictionary:(id)a0;
- (id)toDictionary;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (long long)inputActionCount;
- (void)encodeWithCoder:(id)a0;

@end
