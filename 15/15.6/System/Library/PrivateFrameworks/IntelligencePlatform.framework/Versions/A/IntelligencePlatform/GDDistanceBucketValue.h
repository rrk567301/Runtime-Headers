@interface GDDistanceBucketValue : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long bucket;
@property (readonly, nonatomic) double bucketValue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBucket:(long long)a0 bucketValue:(double)a1;

@end
