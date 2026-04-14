@class NSArray, NSString, NSURL, NSDictionary;

@interface OSPSecureBootBundle : NSObject

@property (retain) NSURL *restoreBundleURL;
@property (retain) NSArray *variants;
@property (retain) NSArray *devices;
@property (retain) NSString *buildVersion;
@property (retain) NSString *buildTrain;
@property (retain) NSDictionary *supportedDevicesByVariant;

+ (id)recommendedBundleForVolume:(id)a0 variant:(id)a1;
+ (id)recommendedBundleForVolume:(id)a0 variant:(id)a1 mountedPreboot:(BOOL *)a2;

- (id)description;
- (void).cxx_destruct;
- (id)initWithBundleURL:(id)a0;
- (id)buildIdentityForVariant:(id)a0 device:(id)a1;
- (id)firstSupportedVariantForDevice:(id)a0;
- (struct __AMAuthInstall { } *)_amaiFromDevice:(id)a0;
- (BOOL)_loadManifestInfo;
- (BOOL)variantIsSupported:(id)a0 byDevice:(id)a1;

@end
