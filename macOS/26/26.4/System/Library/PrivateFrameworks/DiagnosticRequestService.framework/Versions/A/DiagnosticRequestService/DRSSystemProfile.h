@class NSString, NSData, NSNumber;

@interface DRSSystemProfile : NSObject

@property (nonatomic) BOOL allowsCustomerAnalyticsOverride;
@property (nonatomic) BOOL allowsBuildVariantOverride;
@property (nonatomic) BOOL allowsAutomatedDeviceGroupOverride;
@property (nonatomic) BOOL overridingCustomerApprovesAnalyticsValue;
@property (nonatomic) BOOL overridingIsCarrier;
@property (nonatomic) BOOL overridingIsSeed;
@property (nonatomic) BOOL overridingIsInternal;
@property (retain, nonatomic) NSString *overridingAutomatedDeviceGroup;
@property (readonly, nonatomic) NSData *deviceSHA256Digest;
@property (readonly, nonatomic) BOOL isInternalVal;
@property (readonly, nonatomic) BOOL isSeedVal;
@property (readonly, nonatomic) BOOL isCarrierVal;
@property (readonly, nonatomic) NSString *build;
@property (readonly, nonatomic) NSString *buildVariant;
@property (readonly, nonatomic) NSString *deviceCategory;
@property (readonly, nonatomic) NSString *deviceModel;
@property (readonly, nonatomic) NSString *platformString;
@property (readonly, nonatomic) NSString *automatedDeviceGroup;
@property (readonly, nonatomic) NSString *hwModel;
@property (readonly, nonatomic) NSNumber *isLikelyCarryGroupNum;
@property (readonly, nonatomic) BOOL hasForbiddenAutomatedDeviceGroup;
@property (readonly, nonatomic) unsigned long long deviceHash;
@property (readonly, nonatomic) unsigned char platform;
@property (readonly, nonatomic) BOOL isInternal;
@property (readonly, nonatomic) BOOL isSeed;
@property (readonly, nonatomic) BOOL isCarrier;
@property (readonly, nonatomic) BOOL customerApprovesAnalytics;
@property (readonly, nonatomic) BOOL isLogUploadEnabled;
@property (readonly, nonatomic) BOOL isTaskingEnabled;
@property (readonly, nonatomic) unsigned long long uploadSessionUploadCapBytes;

+ (id)sharedInstance;
+ (unsigned long long)uploadSessionUploadCapBytesWithIsInternal:(BOOL)a0 isSeed:(BOOL)a1 deviceModelHash:(unsigned long long)a2;
+ (unsigned long long)hashForSHA256Digest:(id)a0;
+ (id)SHA256DigestForString:(id)a0;

- (void)_populateCarrier;
- (void)_populateDeviceModel;
- (void)_populateDeviceHash;
- (void)_populateIsCarry;
- (void)_populateBuild;
- (void).cxx_destruct;
- (void)_populateDeviceCategory;
- (id)init;
- (void)_populateBuildVariant;
- (void)_populateHWModel;
- (void)_populatePlatform;

@end
