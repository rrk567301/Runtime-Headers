@interface EMSenderBlockingAction : EMMessageChangeAction

@property (readonly, nonatomic) BOOL blockSender;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)signpostType;
- (id)initWithMessageListItems:(id)a0 blockSender:(BOOL)a1;

@end
