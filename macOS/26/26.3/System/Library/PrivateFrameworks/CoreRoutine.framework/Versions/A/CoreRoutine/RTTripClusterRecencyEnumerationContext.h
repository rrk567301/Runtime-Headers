@class RTTripClusterRecencyEnumerationOptions;

@interface RTTripClusterRecencyEnumerationContext : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) RTTripClusterRecencyEnumerationOptions *options;
@property (readonly, nonatomic) unsigned long long offset;

- (id)description;
- (id)init;
- (id)initWithEnumerationOptions:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToContext:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithEnumerationOptions:(id)a0 offset:(unsigned long long)a1;

@end
