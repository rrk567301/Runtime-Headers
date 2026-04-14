@class NSNumber, CCDevice, NSDate;

@interface CCDeviceSite : NSObject <NSSecureCoding, BMOPACKCodable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CCDevice *device;
@property (readonly, nonatomic) NSNumber *resourceGeneration;
@property (readonly, nonatomic) NSNumber *deltaGeneration;
@property (readonly, nonatomic) NSDate *expirationDate;

+ (id)deviceSiteForLocalDeviceUUID:(id)a0 resourceGeneration:(id)a1 idsDeviceId:(id)a2 platform:(long long)a3;
+ (id)deviceSiteFromRecord:(id)a0;

- (id)initFromDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)copyWithExpirationDate:(id)a0;
- (id)initWithDevice:(id)a0 resourceGeneration:(id)a1 deltaGeneration:(id)a2 expirationDate:(id)a3;
- (BOOL)isEqualToDeviceSite:(id)a0;

@end
