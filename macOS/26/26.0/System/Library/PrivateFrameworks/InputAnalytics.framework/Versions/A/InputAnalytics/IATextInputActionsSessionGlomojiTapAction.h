@class NSString;

@interface IATextInputActionsSessionGlomojiTapAction : IATextInputActionsSessionAction

@property (nonatomic) unsigned long long glomojiType;
@property (copy, nonatomic) NSString *originalInputMode;
@property (copy, nonatomic) NSString *updatedInputMode;
@property (nonatomic) long long mergedActionsCount;

+ (BOOL)supportsSecureCoding;

- (id)initFromDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)toDictionary;
- (long long)inputActionCount;
- (void).cxx_destruct;
- (long long)mergeActionIfPossible:(id)a0;

@end
