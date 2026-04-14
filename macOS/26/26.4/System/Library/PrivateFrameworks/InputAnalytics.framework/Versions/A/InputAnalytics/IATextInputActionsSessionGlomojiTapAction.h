@class NSString;

@interface IATextInputActionsSessionGlomojiTapAction : IATextInputActionsSessionAction

@property (nonatomic) unsigned long long glomojiType;
@property (copy, nonatomic) NSString *originalInputMode;
@property (copy, nonatomic) NSString *updatedInputMode;
@property (nonatomic) long long mergedActionsCount;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initFromDictionary:(id)a0;
- (id)init;
- (long long)inputActionCount;
- (id)toDictionary;
- (id)initWithCoder:(id)a0;
- (long long)mergeActionIfPossible:(id)a0;

@end
