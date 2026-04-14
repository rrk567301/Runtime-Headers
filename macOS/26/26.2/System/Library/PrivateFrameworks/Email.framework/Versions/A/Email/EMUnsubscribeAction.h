@interface EMUnsubscribeAction : EMMessageChangeAction

@property (nonatomic) BOOL shouldStopDeletingMessages;

+ (BOOL)supportsSecureCoding;

- (long long)signpostType;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
