@class NSArray;

@interface CWFNearbyDeviceDiscoveryParameter : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *filters;
@property (nonatomic) long long channel;
@property (nonatomic) long long band;
@property (nonatomic) long long bandwidth;
@property (nonatomic) long long type;
@property (nonatomic) long long operation;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (BOOL)isEqualToNDDParameters:(id)a0;

@end
