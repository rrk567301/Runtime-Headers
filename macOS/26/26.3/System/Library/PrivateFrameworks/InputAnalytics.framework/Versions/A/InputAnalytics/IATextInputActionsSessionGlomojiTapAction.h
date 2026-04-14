@class NSString;

@interface IATextInputActionsSessionGlomojiTapAction : IATextInputActionsSessionAction

@property (nonatomic) unsigned long long glomojiType;
@property (copy, nonatomic) NSString *originalInputMode;
@property (copy, nonatomic) NSString *updatedInputMode;
@property (nonatomic) long long mergedActionsCount;

+ (BOOL)supportsSecureCoding;

- (id)initFromDictionary:(id)a0;
- (id)init;
- (id)toDictionary;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (long long)inputActionCount;
- (void)encodeWithCoder:(id)a0;
- (long long)mergeActionIfPossible:(id)a0;

@end
