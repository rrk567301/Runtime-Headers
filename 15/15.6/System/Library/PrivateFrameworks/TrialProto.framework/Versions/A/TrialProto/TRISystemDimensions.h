@class NSString, NSMutableArray;

@interface TRISystemDimensions : PBCodable <NSCopying> {
    struct { unsigned char appleIntelligenceState : 1; unsigned char targetedPopulation : 1; unsigned char experimentOptOutStatus : 1; unsigned char isAutomatedTestDevice : 1; unsigned char isBetaUser : 1; unsigned char isInternalBuild : 1; } _has;
}

@property (readonly, nonatomic) char hasDeviceClass;
@property (retain, nonatomic) NSString *deviceClass;
@property (nonatomic) char hasIsInternalBuild;
@property (nonatomic) char isInternalBuild;
@property (nonatomic) char hasIsBetaUser;
@property (nonatomic) char isBetaUser;
@property (readonly, nonatomic) char hasVersionTag;
@property (retain, nonatomic) NSString *versionTag;
@property (readonly, nonatomic) char hasOsBuild;
@property (retain, nonatomic) NSString *osBuild;
@property (readonly, nonatomic) char hasUserSettingsLanguageCode;
@property (retain, nonatomic) NSString *userSettingsLanguageCode;
@property (readonly, nonatomic) char hasUserSettingsRegionCode;
@property (retain, nonatomic) NSString *userSettingsRegionCode;
@property (retain, nonatomic) NSMutableArray *userKeyboardEnabledInputModeIdentifiers;
@property (readonly, nonatomic) char hasUserSettingsBcp47DeviceLocale;
@property (retain, nonatomic) NSString *userSettingsBcp47DeviceLocale;
@property (nonatomic) char hasTargetedPopulation;
@property (nonatomic) int targetedPopulation;
@property (readonly, nonatomic) char hasCarrierCountryIsoCode;
@property (retain, nonatomic) NSString *carrierCountryIsoCode;
@property (readonly, nonatomic) char hasCarrierBundleIdentifier;
@property (retain, nonatomic) NSString *carrierBundleIdentifier;
@property (nonatomic) char hasExperimentOptOutStatus;
@property (nonatomic) char experimentOptOutStatus;
@property (readonly, nonatomic) char hasAneVersion;
@property (retain, nonatomic) NSString *aneVersion;
@property (nonatomic) char hasIsAutomatedTestDevice;
@property (nonatomic) char isAutomatedTestDevice;
@property (nonatomic) char hasAppleIntelligenceState;
@property (nonatomic) long long appleIntelligenceState;

+ (Class)userKeyboardEnabledInputModeIdentifiersType;

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
- (int)StringAsTargetedPopulation:(id)a0;
- (void)addUserKeyboardEnabledInputModeIdentifiers:(id)a0;
- (void)clearUserKeyboardEnabledInputModeIdentifiers;
- (id)targetedPopulationAsString:(int)a0;
- (id)userKeyboardEnabledInputModeIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)userKeyboardEnabledInputModeIdentifiersCount;

@end
