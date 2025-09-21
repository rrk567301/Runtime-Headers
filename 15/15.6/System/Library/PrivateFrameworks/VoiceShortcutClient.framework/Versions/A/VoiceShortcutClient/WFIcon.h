@interface WFIcon : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char hasClearBackground;
@property (readonly, nonatomic) char hasTransparentBackground;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;

@end
