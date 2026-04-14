@class NSString;

@interface IATextInputActionsSessionKBMenuInteractionAction : IATextInputActionsSessionAction

@property (nonatomic) unsigned long long KBMenuInteractionSource;
@property (nonatomic) unsigned long long KBMenuSelectedAction;
@property (copy, nonatomic) NSString *updatedInputMode;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initFromDictionary:(id)a0;
- (long long)inputActionCount;
- (id)toDictionary;
- (id)initWithCoder:(id)a0;

@end
