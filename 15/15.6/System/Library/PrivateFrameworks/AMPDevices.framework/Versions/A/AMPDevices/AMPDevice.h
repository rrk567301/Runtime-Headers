@class NSString, NSImage, NSData, NSNumber;

@interface AMPDevice : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *deviceName;
@property (retain, nonatomic) NSString *deviceIdentifier;
@property (retain, nonatomic) NSString *deviceClass;
@property (retain, nonatomic) NSString *productType;
@property (retain, nonatomic) NSString *marketingName;
@property (retain, nonatomic) NSString *productVersion;
@property (retain, nonatomic) NSString *buildVersion;
@property (retain, nonatomic) NSString *userSerialNumber;
@property (retain, nonatomic) NSString *uniqueIdentifier;
@property (retain, nonatomic) NSNumber *ecid;
@property (retain, nonatomic) NSString *deviceUTI;
@property (retain, nonatomic) NSImage *deviceImage;
@property (retain, nonatomic) NSImage *sidebarIcon;
@property (retain, nonatomic) NSData *sidebarIconSuite;
@property (retain, nonatomic) NSString *sidebarSymbolName;
@property (nonatomic) unsigned long long deviceType;
@property (nonatomic) unsigned long long deviceMode;
@property (nonatomic, getter=isEjectable) char ejectable;
@property (nonatomic) char needsPairing;
@property (nonatomic) char needsUnlock;
@property (nonatomic, getter=isWiFiConnected) char wifiConnected;
@property (retain, nonatomic) NSNumber *totalDataCapacity;
@property (retain, nonatomic) NSString *color;
@property (retain, nonatomic) NSString *enclosureColor;
@property (nonatomic) unsigned short familyID;
@property (readonly, nonatomic) char isIOSDeviceType;
@property (readonly, nonatomic) char isClassicIPodDeviceType;
@property (readonly, nonatomic) char isIPodShuffleDeviceType;

+ (id)frameworkBundle;
+ (id)sidebarIconSuiteWithName:(id)a0;
+ (id)sidebarIconWithName:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
