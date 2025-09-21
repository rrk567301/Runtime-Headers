@class NSData, NSDictionary, NSNumber;

@interface WPAdvertisingRequest : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned char clientType;
@property long long priorityValue;
@property (retain, nonatomic) NSData *advertisingData;
@property long long advertisingRate;
@property double updateTime;
@property char connectable;
@property (retain) NSDictionary *advertisingOptions;
@property char isRanging;
@property char stopOnAdvertisingAddressChange;
@property char holdVoucher;
@property char enableEPAForAdvertising;
@property (retain) NSNumber *advertisementRequestedAt;

+ (id)requestForClientType:(unsigned char)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)changePriorityValue:(long long)a0;
- (char)isValidOnConnectableInstance;

@end
