@class NSString, NSDate;

@interface NDODevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *name;
@property (retain) NSString *serialNumber;
@property (retain) NSDate *activationDate;
@property unsigned long long deviceType;
@property (retain) NSString *productID;
@property (retain) NSString *productName;
@property BOOL isVisibleInCC;
@property BOOL cachingPolicy;
@property long long colorCode;
@property BOOL acOfferEligible;
@property (retain) NSString *coverageLocalizedLabel;
@property (retain) NSString *acLocalizedOfferStatusLabel;
@property BOOL covered;
@property (retain) NSString *deviceImageUrl;
@property (readonly) NSString *sourceFromDeviceType;

+ (id)deviceWithCBDevice:(id)a0;
+ (id)deviceWithCBDevice:(id)a0 isVisibleInCC:(BOOL)a1;
+ (id)deviceWithDeviceListDevice:(id)a0;
+ (id)deviceWithName:(id)a0 serialNumber:(id)a1 activationDate:(id)a2 deviceType:(unsigned long long)a3;
+ (id)deviceWithName:(id)a0 serialNumber:(id)a1 activationDate:(id)a2 deviceType:(unsigned long long)a3 productID:(id)a4 productName:(id)a5;
+ (id)deviceWithName:(id)a0 serialNumber:(id)a1 activationDate:(id)a2 deviceType:(unsigned long long)a3 productID:(id)a4 productName:(id)a5 isVisibleInCC:(BOOL)a6;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)deviceTypeString;
- (id)initWithName:(id)a0 serialNumber:(id)a1 activationDate:(id)a2 deviceType:(unsigned long long)a3 productID:(id)a4 productName:(id)a5 isVisibleInCC:(BOOL)a6 cachingPolicy:(BOOL)a7;
- (id)productPlaceholderImage;
- (void)updateWithWarranty:(id)a0;

@end
