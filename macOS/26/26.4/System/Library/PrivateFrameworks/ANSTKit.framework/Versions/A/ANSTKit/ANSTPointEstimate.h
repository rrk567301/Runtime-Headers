@interface ANSTPointEstimate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct CGPoint { double x; double y; } point;
@property (readonly, nonatomic) long long confidence;
@property (readonly, nonatomic) long long occluded;

+ (id)new;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithPoint:(struct CGPoint { double x0; double x1; })a0 confidence:(long long)a1 occluded:(long long)a2;

@end
