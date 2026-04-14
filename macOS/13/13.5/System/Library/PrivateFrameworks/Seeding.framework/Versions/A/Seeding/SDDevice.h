@class NSString, NSDictionary, NSDate, SDSeedingConfiguration;

@interface SDDevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SDSeedingConfiguration *expectedConfiguration;
@property (retain, nonatomic) SDSeedingConfiguration *currentConfiguration;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long platform;
@property (retain, nonatomic) NSString *deviceClass;
@property (retain, nonatomic) NSString *build;
@property (retain, nonatomic) NSDate *updatedAt;
@property (nonatomic) BOOL isFeedbackAssistantAvailable;
@property (nonatomic) BOOL isRunningSeedBuild;
@property (nonatomic) BOOL hasDeviceManagementRestriction;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)deviceIdentifier;
+ (id)deviceName;
+ (id)osBuild;
+ (id)deviceClass;
+ (id)currentDevice;
+ (id)deviceProductType;
+ (unsigned long long)devicePlatform;
+ (id)_currentDevice;
+ (BOOL)deviceIsHomePod;
+ (id)_devicesMatchingPlatforms:(unsigned long long)a0;
+ (id)deviceClassForProductType:(id)a0;
+ (void)getCurrentDevice:(id /* block */)a0;
+ (void)getDevicesMatchingPlatforms:(unsigned long long)a0 completion:(id /* block */)a1;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void)checkIn;
- (BOOL)_canFileFeedback;
- (void)_configureDeviceWithExpectedConfiguration;
- (void)_configureDeviceWithExpectedConfigurationWithUserIdentifier:(id)a0;
- (void)_enrollInBetaProgram:(id)a0;
- (void)_enrollInBetaProgram:(id)a0 userIdentifier:(id)a1;
- (id)_enrolledBetaProgram;
- (BOOL)_isEnrolled;
- (BOOL)_unenrollWithUserIdentifier:(id)a0;
- (void)_verifyEnrollmentWithUserIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)updateCurrentConfiguration;

@end
