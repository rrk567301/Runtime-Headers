@class NSString, NSData, NSNumber;

@interface DRSSystemProfile : NSObject

@property (nonatomic) char allowsCustomerAnalyticsOverride;
@property (nonatomic) char allowsBuildVariantOverride;
@property (nonatomic) char allowsAutomatedDeviceGroupOverride;
@property (nonatomic) char overridingCustomerApprovesAnalyticsValue;
@property (nonatomic) char overridingIsCarrier;
@property (nonatomic) char overridingIsSeed;
@property (nonatomic) char overridingIsInternal;
@property (retain, nonatomic) NSString *overridingAutomatedDeviceGroup;
@property (readonly, nonatomic) NSData *deviceSHA256Digest;
@property (readonly, nonatomic) char isInternalVal;
@property (readonly, nonatomic) char isSeedVal;
@property (readonly, nonatomic) char isCarrierVal;
@property (readonly, nonatomic) NSString *build;
@property (readonly, nonatomic) NSString *buildVariant;
@property (readonly, nonatomic) NSString *deviceCategory;
@property (readonly, nonatomic) NSString *deviceModel;
@property (readonly, nonatomic) NSString *platformString;
@property (readonly, nonatomic) NSString *automatedDeviceGroup;
@property (readonly, nonatomic) NSString *hwModel;
@property (readonly, nonatomic) NSNumber *isLikelyCarryGroupNum;
@property (readonly, nonatomic) char hasForbiddenAutomatedDeviceGroup;
@property (readonly, nonatomic) unsigned long long deviceHash;
@property (readonly, nonatomic) unsigned char platform;
@property (readonly, nonatomic) char isInternal;
@property (readonly, nonatomic) char isSeed;
@property (readonly, nonatomic) char isCarrier;
@property (readonly, nonatomic) char customerApprovesAnalytics;
@property (readonly, nonatomic) char isLogUploadEnabled;
@property (readonly, nonatomic) char isTaskingEnabled;
@property (readonly, nonatomic) unsigned long long uploadSessionUploadCapBytes;

+ (id)sharedInstance;
+ (id)SHA256DigestForString:(id)a0;
+ (unsigned long long)hashForSHA256Digest:(id)a0;
+ (unsigned long long)uploadSessionUploadCapBytesWithIsInternal:(char)a0 isSeed:(char)a1 deviceModelHash:(unsigned long long)a2;

- (id)init;
- (void).cxx_destruct;
- (void)_populateBuild;
- (void)_populateBuildVariant;
- (void)_populateCarrier;
- (void)_populateDeviceCategory;
- (void)_populateDeviceHash;
- (void)_populateDeviceModel;
- (void)_populateHWModel;
- (void)_populateIsCarry;
- (void)_populatePlatform;

@end
