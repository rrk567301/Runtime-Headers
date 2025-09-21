@interface EMUnsubscribeAction : EMMessageChangeAction

@property (nonatomic) BOOL shouldStopDeletingMessages;

+ (BOOL)supportsSecureCoding;

- (long long)signpostType;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
