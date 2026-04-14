@interface IDSOffGridDeliveryQueryOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL cached;

+ (id)cached;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCached:(BOOL)a0;

@end
