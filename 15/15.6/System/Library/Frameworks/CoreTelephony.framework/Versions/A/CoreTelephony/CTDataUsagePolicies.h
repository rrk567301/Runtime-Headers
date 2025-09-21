@class NSString;

@interface CTDataUsagePolicies : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *bundleId;
@property (nonatomic) long long cellular;
@property (nonatomic) long long wifi;
@property (nonatomic) char isManaged;
@property (nonatomic) char isRestricted;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init:(id)a0 withCellularPolicy:(long long)a1 andWifiPolicy:(long long)a2;
- (id)init:(id)a0 withCellularPolicy:(long long)a1 wifiPolicy:(long long)a2 isManaged:(char)a3 andIsRestricted:(char)a4;

@end
