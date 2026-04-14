@class RTTripClusterScheduleEnumerationOptions;

@interface RTTripClusterScheduleEnumerationContext : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) RTTripClusterScheduleEnumerationOptions *options;
@property (readonly, nonatomic) unsigned long long offset;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEnumerationOptions:(id)a0 offset:(unsigned long long)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithEnumerationOptions:(id)a0;
- (id)init;
- (BOOL)isEqualToContext:(id)a0;

@end
