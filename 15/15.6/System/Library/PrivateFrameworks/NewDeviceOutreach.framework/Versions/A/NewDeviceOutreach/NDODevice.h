@class NSString, NSNumber, NSDate;

@interface NDODevice : NSObject <NSSecureCoding, SalesPayloadProvider>

@property (class, readonly) char supportsSecureCoding;

@property (retain) NSString *name;
@property (retain) NSString *serialNumber;
@property (retain) NSDate *activationDate;
@property unsigned long long deviceType;
@property (retain) NSString *productID;
@property (retain) NSString *productName;
@property char isVisibleInCC;
@property char cachingPolicy;
@property (retain) NSString *color;
@property (retain) NSString *enclosureColor;
@property (retain) NSNumber *coverGlassColor;
@property char isActiveWatch;
@property char isAltAccountWatch;
@property char acOfferEligible;
@property (retain) NSString *coverageLocalizedLabel;
@property (retain) NSString *acLocalizedOfferStatusLabel;
@property (retain) NSString *acLocalizedUnlinkedPlanStatusLabel;
@property char covered;
@property (retain) NSString *deviceImageUrl;
@property (retain) NSString *deviceDesc;
@property (retain) NSString *sgId;
@property (retain) NSString *pfcId;
@property (retain) NSString *pgfId;
@property (retain) NSString *parentId;
@property (retain) NSDate *acOfferEligibleUntil;
@property (readonly) NSString *sourceFromDeviceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)deviceWithCBDevice:(id)a0;
+ (id)deviceWithCBDevice:(id)a0 isVisibleInCC:(char)a1;
+ (id)deviceWithDeviceListDevice:(id)a0;
+ (id)deviceWithName:(id)a0 serialNumber:(id)a1 activationDate:(id)a2 deviceType:(unsigned long long)a3;
+ (id)deviceWithName:(id)a0 serialNumber:(id)a1 activationDate:(id)a2 deviceType:(unsigned long long)a3 productID:(id)a4 productName:(id)a5;
+ (id)deviceWithName:(id)a0 serialNumber:(id)a1 activationDate:(id)a2 deviceType:(unsigned long long)a3 productID:(id)a4 productName:(id)a5 color:(id)a6 enclosureColor:(id)a7 coverGlassColor:(id)a8;
+ (id)deviceWithName:(id)a0 serialNumber:(id)a1 activationDate:(id)a2 deviceType:(unsigned long long)a3 productID:(id)a4 productName:(id)a5 isVisibleInCC:(char)a6;
+ (id)watchDeviceWithName:(id)a0 serialNumber:(id)a1 activationDate:(id)a2 isActive:(char)a3 productID:(id)a4 productName:(id)a5 isAltAccount:(char)a6;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)deviceTypeString;
- (id)initWithName:(id)a0 serialNumber:(id)a1 activationDate:(id)a2 deviceType:(unsigned long long)a3 productID:(id)a4 productName:(id)a5 color:(id)a6 enclosureColor:(id)a7 coverGlassColor:(id)a8 isVisibleInCC:(char)a9 cachingPolicy:(char)a10;
- (void)updateWithWarranty:(id)a0;

@end
