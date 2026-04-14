@interface IMSimulatedMessageConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL indexImmediately;
@property (nonatomic) long long clientBatchSize;
@property (nonatomic) long long daemonBatchSize;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
