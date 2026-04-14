@class NSString;

@interface CTDataUsagePolicies : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *bundleId;
@property (nonatomic) long long cellular;
@property (nonatomic) long long wifi;
@property (nonatomic) BOOL isManaged;
@property (nonatomic) BOOL isRestricted;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init:(id)a0 withCellularPolicy:(long long)a1 andWifiPolicy:(long long)a2;
- (id)init:(id)a0 withCellularPolicy:(long long)a1 wifiPolicy:(long long)a2 isManaged:(BOOL)a3 andIsRestricted:(BOOL)a4;

@end
