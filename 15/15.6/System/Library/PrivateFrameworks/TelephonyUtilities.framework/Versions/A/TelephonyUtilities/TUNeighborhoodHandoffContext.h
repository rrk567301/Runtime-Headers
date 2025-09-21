@interface TUNeighborhoodHandoffContext : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long pullContext;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithHandoffType:(long long)a0;
- (id)initWithPullContext:(long long)a0;

@end
