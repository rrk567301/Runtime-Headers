@class NSString, NSArray, NSDictionary;

@interface UARPSettingsAccessory : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary *_originalSettings;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly) NSString *name;
@property (readonly) NSString *serialNumber;
@property (readonly) NSString *modelNumber;
@property (readonly) NSString *hwFusing;
@property (readonly) NSString *hwRevision;
@property (readonly) NSString *activeVersion;
@property (readonly) NSArray *partnerSerialNumbers;
@property (readonly) char otaDisabled;
@property (readonly) char authListingEnabled;
@property (readonly) char personalizationRequired;
@property (readonly) char accessoryReachable;
@property (readonly) char supportsDeveloperSettings;
@property (readonly) NSString *assetLocation;
@property (readonly) NSString *customTrain;
@property (readonly) NSString *customBuild;
@property (readonly) NSString *supplementalAssetLocation;
@property (readonly) NSString *supplementalCustomTrain;
@property (readonly) NSString *supplementalCustomBuild;
@property (readonly) NSString *downloadedVersion;
@property (readonly) NSString *dropboxVersion;
@property (readonly) NSString *assetURLOverride;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)setName:(id)a0;
- (void)setSerialNumber:(id)a0;
- (void)setModelNumber:(id)a0;
- (void)setHwRevision:(id)a0;
- (void)setPartnerSerialNumbers:(id)a0;
- (void)setSupportsDeveloperSettings:(char)a0;
- (void)setAssetLocation:(id)a0;
- (void)setCustomTrain:(id)a0;
- (void)setOtaDisabled:(char)a0;
- (void)setCustomBuild:(id)a0;
- (id)encodeAsChangedDictionary;
- (id)encodeAsDictionary;
- (void)setAccessoryReachable:(char)a0;
- (void)setActiveVersion:(id)a0;
- (void)setAssetURLOverride:(id)a0;
- (void)setAuthListingEnabled:(char)a0;
- (void)setDownloadedVersion:(id)a0;
- (void)setDropboxVersion:(id)a0;
- (void)setHwFusing:(id)a0;
- (void)setPersonalizationRequired:(char)a0;
- (void)setSupplementalAssetLocation:(id)a0;
- (void)setSupplementalCustomBuild:(id)a0;
- (void)setSupplementalCustomTrain:(id)a0;

@end
