@interface IATextInputActionsSessionDictationBeganAction : IATextInputActionsSessionAction

@property (nonatomic) unsigned long long dictationBeganCount;
@property (nonatomic) unsigned long long modelessUsedAtLeastOnceCount;
@property (nonatomic) unsigned long long multiModalDictationBeganCount;

+ (BOOL)supportsSecureCoding;

- (id)initFromDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)toDictionary;
- (long long)inputActionCount;
- (long long)mergeActionIfPossible:(id)a0;

@end
