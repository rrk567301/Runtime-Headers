@interface IMSimulatedEntryConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL indexImmediately;
@property (nonatomic) long long clientBatchSize;
@property (nonatomic) long long daemonBatchSize;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;

@end
