@interface MNNavigationServiceCallbackParameters : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
