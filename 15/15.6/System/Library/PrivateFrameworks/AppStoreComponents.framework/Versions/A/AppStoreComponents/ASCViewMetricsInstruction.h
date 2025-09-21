@class NSSet, ASCMetricsData;

@interface ASCViewMetricsInstruction : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) ASCMetricsData *data;
@property (readonly, copy, nonatomic) NSSet *invocationPoints;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0 invocationPoints:(id)a1;

@end
