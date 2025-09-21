@interface BPSTuple : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id first;
@property (readonly, nonatomic) id second;

+ (id)new;

- (id)initWithFirst:(id)a0 second:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
