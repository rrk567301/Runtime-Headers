@interface ANSTEyeBlinkEstimate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long blinkLeft;
@property (readonly, nonatomic) long long blinkRight;

+ (id)new;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithBlinkLeft:(long long)a0 blinkRight:(long long)a1;

@end
