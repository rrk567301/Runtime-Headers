@interface IDSOffGridDeliveryQueryOptions : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char cached;

+ (id)cached;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCached:(char)a0;

@end
