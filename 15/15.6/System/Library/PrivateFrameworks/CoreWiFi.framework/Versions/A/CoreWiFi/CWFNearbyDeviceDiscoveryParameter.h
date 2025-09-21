@class NSArray;

@interface CWFNearbyDeviceDiscoveryParameter : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *filters;
@property (nonatomic) long long channel;
@property (nonatomic) long long band;
@property (nonatomic) long long bandwidth;
@property (nonatomic) long long type;
@property (nonatomic) long long operation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToNDDParameters:(id)a0;

@end
