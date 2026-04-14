@class NSString, NSDate;

@interface NDODevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *name;
@property (retain) NSString *serialNumber;
@property (retain) NSDate *activationDate;
@property unsigned long long deviceType;
@property (retain) NSString *productID;
@property (retain) NSString *productName;
@property BOOL isICloudDevice;
@property BOOL isVisibleInCC;

+ (id)deviceWithName:(id)a0 serialNumber:(id)a1 activationDate:(id)a2 deviceType:(unsigned long long)a3;
+ (id)deviceWithName:(id)a0 serialNumber:(id)a1 activationDate:(id)a2 deviceType:(unsigned long long)a3 productID:(id)a4 productName:(id)a5;
+ (id)deviceWithName:(id)a0 serialNumber:(id)a1 activationDate:(id)a2 deviceType:(unsigned long long)a3 productID:(id)a4 productName:(id)a5 isICloudDevice:(BOOL)a6;
+ (id)deviceWithName:(id)a0 serialNumber:(id)a1 activationDate:(id)a2 deviceType:(unsigned long long)a3 productID:(id)a4 productName:(id)a5 isVisibleInCC:(BOOL)a6;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)deviceTypeString;
- (id)initWithName:(id)a0 serialNumber:(id)a1 activationDate:(id)a2 deviceType:(unsigned long long)a3 productID:(id)a4 productName:(id)a5 isICloudDevice:(BOOL)a6 isVisibleInCC:(BOOL)a7;
- (id)productPlaceholderImage;

@end
