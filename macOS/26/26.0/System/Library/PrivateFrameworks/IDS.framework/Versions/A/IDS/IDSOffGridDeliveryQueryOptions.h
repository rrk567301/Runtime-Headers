@interface IDSOffGridDeliveryQueryOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL cached;

+ (id)cached;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithCached:(BOOL)a0;

@end
