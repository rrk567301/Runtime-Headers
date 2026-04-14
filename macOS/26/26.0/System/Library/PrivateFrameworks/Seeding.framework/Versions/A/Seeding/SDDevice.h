@class NSString, NSDictionary, NSDate, SDSeedingConfiguration;

@interface SDDevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) SDSeedingConfiguration *expectedConfiguration;
@property (retain) SDSeedingConfiguration *currentConfiguration;
@property (retain) NSString *name;
@property (retain) NSString *identifier;
@property unsigned long long platform;
@property (retain) NSString *deviceClass;
@property (retain) NSString *build;
@property (retain) NSDate *updatedAt;
@property BOOL isFeedbackAssistantAvailable;
@property BOOL isRunningSeedBuild;
@property BOOL hasDeviceManagementRestriction;
@property (readonly) NSDictionary *dictionaryRepresentation;

+ (id)deviceClass;
+ (id)productVersion;
+ (id)deviceName;
+ (id)currentDevice;
+ (id)deriveMacDeviceClassForProductType:(id)a0;
+ (id)deviceProductType;
+ (id)deviceClassForProductType:(id)a0;
+ (id)deviceIdentifier;
+ (id)osBuild;
+ (id)marketingProductName;
+ (unsigned long long)devicePlatform;
+ (BOOL)deviceIsHomePod;
+ (id)_currentDevice;
+ (id)_devicesMatchingPlatforms:(unsigned long long)a0;
+ (id)_valueFromSystemInfo:(struct __CFString { } *)a0;
+ (id)blankDeviceWithErrorMessage:(id)a0;
+ (unsigned long long)currentDevicePlatform;
+ (void)getCurrentDevice:(id /* block */)a0;
+ (void)getDevicesMatchingPlatforms:(unsigned long long)a0 completion:(id /* block */)a1;

- (void)checkIn;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)_canFileFeedback;
- (void)_configureDeviceWithExpectedConfiguration;
- (void)_configureDeviceWithExpectedConfigurationWithUserIdentifier:(id)a0;
- (void)_enrollInBetaProgram:(id)a0;
- (void)_enrollInBetaProgram:(id)a0 userIdentifier:(id)a1;
- (id)_enrolledBetaProgram;
- (BOOL)_isEnrolled;
- (BOOL)_unenrollWithUserIdentifier:(id)a0;
- (void)_verifyEnrollmentWithUserIdentifier:(id)a0 completion:(id /* block */)a1;
- (BOOL)isErrorDevice;
- (void)updateCurrentConfiguration;

@end
