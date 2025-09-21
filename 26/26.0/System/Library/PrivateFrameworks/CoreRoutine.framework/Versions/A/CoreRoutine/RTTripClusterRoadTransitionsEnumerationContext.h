@class RTTripClusterRoadTransitionsEnumerationOptions;

@interface RTTripClusterRoadTransitionsEnumerationContext : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) RTTripClusterRoadTransitionsEnumerationOptions *options;
@property (readonly, nonatomic) unsigned long long offset;

- (id)initWithEnumerationOptions:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithEnumerationOptions:(id)a0 offset:(unsigned long long)a1;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToContext:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
