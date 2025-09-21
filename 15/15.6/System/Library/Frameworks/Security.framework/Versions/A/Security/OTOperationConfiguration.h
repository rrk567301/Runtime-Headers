@interface OTOperationConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned long long timeoutWaitForCKAccount;
@property (nonatomic) long long qualityOfService;
@property (nonatomic) char discretionaryNetwork;
@property (nonatomic) char useCachedAccountStatus;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
