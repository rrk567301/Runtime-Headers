@class ECMessageFlagChange;

@interface EMMessageFlagChangeAction : EMMessageChangeAction

@property (readonly, nonatomic) ECMessageFlagChange *flagChange;

+ (BOOL)supportsSecureCoding;

- (long long)signpostType;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithObjectIDs:(id)a0 origin:(long long)a1 actor:(long long)a2 flagChange:(id)a3;
- (id)initWithMessageListItems:(id)a0 origin:(long long)a1 actor:(long long)a2 flagChange:(id)a3;
- (id)initWithQuery:(id)a0 origin:(long long)a1 actor:(long long)a2 flagChange:(id)a3;

@end
