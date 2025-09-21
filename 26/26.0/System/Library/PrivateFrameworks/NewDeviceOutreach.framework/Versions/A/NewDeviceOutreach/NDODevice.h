@class NSString, NSNumber, NSDate;

@interface NDODevice : NSObject <NSSecureCoding, SalesPayloadProvider>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *name;
@property (retain) NSString *serialNumber;
@property (retain) NSDate *activationDate;
@property unsigned long long deviceType;
@property (retain) NSString *productID;
@property (retain) NSString *productName;
@property BOOL isVisibleInCC;
@property BOOL cachingPolicy;
@property (retain) NSString *color;
@property (retain) NSString *enclosureColor;
@property (retain) NSNumber *coverGlassColor;
@property BOOL isActiveWatch;
@property BOOL isAltAccountWatch;
@property BOOL acOfferEligible;
@property (retain) NSString *coverageLocalizedLabel;
@property (retain) NSString *acLocalizedOfferStatusLabel;
@property (retain) NSString *acLocalizedUnlinkedPlanStatusLabel;
@property BOOL covered;
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
+ (id)deviceWithCBDevice:(id)a0 isVisibleInCC:(BOOL)a1;
+ (id)deviceWithDeviceListDevice:(id)a0;
+ (id)deviceWithName:(id)a0 serialNumber:(id)a1 activationDate:(id)a2 deviceType:(unsigned long long)a3;
+ (id)deviceWithName:(id)a0 serialNumber:(id)a1 activationDate:(id)a2 deviceType:(unsigned long long)a3 productID:(id)a4 productName:(id)a5;
+ (id)deviceWithName:(id)a0 serialNumber:(id)a1 activationDate:(id)a2 deviceType:(unsigned long long)a3 productID:(id)a4 productName:(id)a5 color:(id)a6 enclosureColor:(id)a7 coverGlassColor:(id)a8;
+ (id)deviceWithName:(id)a0 serialNumber:(id)a1 activationDate:(id)a2 deviceType:(unsigned long long)a3 productID:(id)a4 productName:(id)a5 isVisibleInCC:(BOOL)a6;
+ (id)watchDeviceWithName:(id)a0 serialNumber:(id)a1 activationDate:(id)a2 isActive:(BOOL)a3 productID:(id)a4 productName:(id)a5 isAltAccount:(BOOL)a6;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)deviceTypeString;
- (id)initWithName:(id)a0 serialNumber:(id)a1 activationDate:(id)a2 deviceType:(unsigned long long)a3 productID:(id)a4 productName:(id)a5 color:(id)a6 enclosureColor:(id)a7 coverGlassColor:(id)a8 isVisibleInCC:(BOOL)a9 cachingPolicy:(BOOL)a10;
- (void)updateWithWarranty:(id)a0;

@end
