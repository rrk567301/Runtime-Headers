@interface XCTVideoEncoding : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long codec;
@property (readonly, nonatomic) double frameRate;

- (id)description;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCodec:(long long)a0 frameRate:(double)a1;

@end
