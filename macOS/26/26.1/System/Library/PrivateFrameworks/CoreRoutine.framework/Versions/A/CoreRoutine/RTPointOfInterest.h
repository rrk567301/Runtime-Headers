@class NSUUID, RTLocation, RTPolygon;

@interface RTPointOfInterest : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) BOOL applePaySupport;
@property (readonly, nonatomic) BOOL filtered;
@property (readonly, nonatomic) BOOL fullyCoversTile;
@property (readonly, nonatomic) RTLocation *location;
@property (readonly, nonatomic) unsigned long long muid;
@property (readonly, nonatomic) RTPolygon *polygon;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithIdentifier:(id)a0 applePaySupport:(BOOL)a1 filtered:(BOOL)a2 fullyCoversTile:(BOOL)a3 location:(id)a4 muid:(unsigned long long)a5 polygon:(id)a6;

@end
