@class NSString;

@interface IATextInputActionsSessionGlomojiTapAction : IATextInputActionsSessionAction

@property (nonatomic) unsigned long long glomojiType;
@property (copy, nonatomic) NSString *originalInputMode;
@property (copy, nonatomic) NSString *updatedInputMode;
@property (nonatomic) long long mergedActionsCount;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (long long)inputActionCount;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initFromDictionary:(id)a0;
- (id)init;
- (long long)mergeActionIfPossible:(id)a0;

@end
