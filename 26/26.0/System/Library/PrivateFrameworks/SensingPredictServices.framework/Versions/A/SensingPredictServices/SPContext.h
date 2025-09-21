@interface SPContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned char locationCategory;
@property (readonly, nonatomic) unsigned int noiseLevel;

- (void)encodeWithCoder:(id)a0;
- (id)descriptionWithLevel:(int)a0;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
