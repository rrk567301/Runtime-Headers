@interface CMLUseCaseConfig : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long maxShards;
@property (readonly, nonatomic) long long cacheElementCount;
@property (readonly, nonatomic) long long cacheEntryMinutesToLive;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0 maxShards:(long long)a1 cacheElementCount:(long long)a2;
- (id)initWithType:(long long)a0 maxShards:(long long)a1 cacheElementCount:(long long)a2 cacheEntryMinutesToLive:(long long)a3;
- (BOOL)isEqualToUseCaseConfig:(id)a0;

@end
