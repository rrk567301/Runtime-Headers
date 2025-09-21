@class NSData, NSDictionary, NSNumber;

@interface WPAdvertisingRequest : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned char clientType;
@property long long priorityValue;
@property (retain, nonatomic) NSData *advertisingData;
@property long long advertisingRate;
@property double updateTime;
@property BOOL connectable;
@property (retain) NSDictionary *advertisingOptions;
@property BOOL isRanging;
@property BOOL stopOnAdvertisingAddressChange;
@property BOOL holdVoucher;
@property BOOL enableEPAForAdvertising;
@property (retain) NSNumber *advertisementRequestedAt;
@property (retain, nonatomic) NSData *advertisingRandomData;

+ (id)requestForClientType:(unsigned char)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)changePriorityValue:(long long)a0;
- (BOOL)isValidOnConnectableInstance;

@end
