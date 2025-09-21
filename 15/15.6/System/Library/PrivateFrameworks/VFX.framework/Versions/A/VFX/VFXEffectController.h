@class NSString;

@interface VFXEffectController : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *tag;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
