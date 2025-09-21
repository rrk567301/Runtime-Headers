@class NSData, SASExpressSettingsPrivacyBundle, NSString;

@interface SASExpressSettings : PBCodable <NSCopying> {
    struct { unsigned char appearanceMode : 1; unsigned char displayZoomOption : 1; unsigned char appAnalyticsOptIn : 1; unsigned char deviceAnalyticsOptIn : 1; unsigned char fileVaultEnabled : 1; unsigned char findMyOptIn : 1; unsigned char locationServicesOptIn : 1; unsigned char screenTimeEnabled : 1; unsigned char siriDataSharingOptIn : 1; unsigned char siriOptIn : 1; unsigned char siriVoiceTriggerEnabled : 1; unsigned char softwareUpdateAutoDownloadEnabled : 1; unsigned char softwareUpdateAutoUpdateEnabled : 1; unsigned char stolenDeviceProtectionEnabled : 1; unsigned char stolenDeviceProtectionStrictModeEnabled : 1; unsigned char unlockWithWatchEnabled : 1; } _has;
}

@property (nonatomic) unsigned int version;
@property (readonly, nonatomic) char hasWatchMigrationData;
@property (retain, nonatomic) NSData *watchMigrationData;
@property (readonly, nonatomic) char hasWalletData;
@property (retain, nonatomic) NSData *walletData;
@property (nonatomic) char hasDeviceAnalyticsOptIn;
@property (nonatomic) char deviceAnalyticsOptIn;
@property (nonatomic) char hasAppAnalyticsOptIn;
@property (nonatomic) char appAnalyticsOptIn;
@property (nonatomic) char hasLocationServicesOptIn;
@property (nonatomic) char locationServicesOptIn;
@property (nonatomic) char hasFindMyOptIn;
@property (nonatomic) char findMyOptIn;
@property (nonatomic) char hasSiriOptIn;
@property (nonatomic) char siriOptIn;
@property (nonatomic) char hasScreenTimeEnabled;
@property (nonatomic) char screenTimeEnabled;
@property (nonatomic) char hasSoftwareUpdateAutoUpdateEnabled;
@property (nonatomic) char softwareUpdateAutoUpdateEnabled;
@property (nonatomic) char hasSoftwareUpdateAutoDownloadEnabled;
@property (nonatomic) char softwareUpdateAutoDownloadEnabled;
@property (nonatomic) char hasSiriDataSharingOptIn;
@property (nonatomic) char siriDataSharingOptIn;
@property (nonatomic) char hasAppearanceMode;
@property (nonatomic) int appearanceMode;
@property (readonly, nonatomic) char hasDeviceAnalyticsPrivacyBundle;
@property (retain, nonatomic) SASExpressSettingsPrivacyBundle *deviceAnalyticsPrivacyBundle;
@property (readonly, nonatomic) char hasAppAnalyticsPrivacyBundle;
@property (retain, nonatomic) SASExpressSettingsPrivacyBundle *appAnalyticsPrivacyBundle;
@property (readonly, nonatomic) char hasLocationServicesPrivacyBundle;
@property (retain, nonatomic) SASExpressSettingsPrivacyBundle *locationServicesPrivacyBundle;
@property (readonly, nonatomic) char hasFindMyPrivacyBundle;
@property (retain, nonatomic) SASExpressSettingsPrivacyBundle *findMyPrivacyBundle;
@property (readonly, nonatomic) char hasSiriPrivacyBundle;
@property (retain, nonatomic) SASExpressSettingsPrivacyBundle *siriPrivacyBundle;
@property (retain, nonatomic) NSString *productType;
@property (retain, nonatomic) NSString *deviceClass;
@property (nonatomic) char hasDisplayZoomOption;
@property (nonatomic) int displayZoomOption;
@property (nonatomic) char hasUnlockWithWatchEnabled;
@property (nonatomic) char unlockWithWatchEnabled;
@property (nonatomic) char hasFileVaultEnabled;
@property (nonatomic) char fileVaultEnabled;
@property (nonatomic) char hasSiriVoiceTriggerEnabled;
@property (nonatomic) char siriVoiceTriggerEnabled;
@property (readonly, nonatomic) char hasProductVersion;
@property (retain, nonatomic) NSString *productVersion;
@property (nonatomic) char hasStolenDeviceProtectionEnabled;
@property (nonatomic) char stolenDeviceProtectionEnabled;
@property (nonatomic) char hasStolenDeviceProtectionStrictModeEnabled;
@property (nonatomic) char stolenDeviceProtectionStrictModeEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsDisplayZoomOption:(id)a0;
- (int)StringAsAppearanceMode:(id)a0;
- (id)appearanceModeAsString:(int)a0;
- (id)displayZoomOptionAsString:(int)a0;

@end
