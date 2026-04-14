@class NSString;

@interface VGChargingNetwork : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long globalBrandID;
@property (readonly, nonatomic) NSString *name;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithChargingNetworkStorage:(id)a0;
- (id)initWithBrandInfoMapping:(id)a0;

@end
