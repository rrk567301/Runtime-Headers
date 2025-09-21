@interface CHSWidgetDescriptorsPredicate : NSObject <NSSecureCoding, NSCopying>

@property (class, nonatomic) char supportsSecureCoding;
@property (class, nonatomic, readonly) CHSWidgetDescriptorsPredicate *visible;

@property (nonatomic, readonly) long long hash;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
