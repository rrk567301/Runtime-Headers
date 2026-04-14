@class NSString, NSDictionary, NSDate, SDSeedingConfiguration;

@interface SDDevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SDSeedingConfiguration *expectedConfiguration;
@property (retain, nonatomic) SDSeedingConfiguration *currentConfiguration;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long platform;
@property (nonatomic) NSString *deviceClass;
@property (retain, nonatomic) NSString *build;
@property (retain, nonatomic) NSDate *updatedAt;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)deviceName;
+ (id)deviceIdentifier;
+ (id)osBuild;
+ (id)deviceClass;
+ (id)deviceProductType;
+ (unsigned long long)devicePlatform;
+ (id)_currentDevice;
+ (void)getCurrentDevice:(id /* block */)a0;
+ (void)getDevicesMatchingPlatforms:(unsigned long long)a0 completion:(id /* block */)a1;
+ (id)_devicesMatchingPlatforms:(unsigned long long)a0;
+ (BOOL)deviceIsHomePod;
+ (id)deviceClassForProductType:(id)a0;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void)checkIn;
- (void)updateCurrentConfiguration;
- (void)_enrollInBetaProgram:(id)a0;
- (void)_configureDeviceWithExpectedConfiguration;
- (BOOL)_unenroll;
- (BOOL)_isEnrolled;
- (void)_verifyEnrollmentWithCompletion:(id /* block */)a0;

@end
