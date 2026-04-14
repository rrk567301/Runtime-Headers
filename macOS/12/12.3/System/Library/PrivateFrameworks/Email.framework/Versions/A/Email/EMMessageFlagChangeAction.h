@class ECMessageFlagChange;

@interface EMMessageFlagChangeAction : EMMessageChangeAction

@property (readonly, nonatomic) ECMessageFlagChange *flagChange;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (long long)signpostType;
- (id)initWithMessageListItems:(id)a0 flagChange:(id)a1;

@end
