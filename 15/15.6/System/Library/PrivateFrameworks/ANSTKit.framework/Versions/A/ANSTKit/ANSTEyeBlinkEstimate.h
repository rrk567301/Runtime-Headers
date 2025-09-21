@interface ANSTEyeBlinkEstimate : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long blinkLeft;
@property (readonly, nonatomic) long long blinkRight;

+ (id)new;

- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBlinkLeft:(long long)a0 blinkRight:(long long)a1;

@end
