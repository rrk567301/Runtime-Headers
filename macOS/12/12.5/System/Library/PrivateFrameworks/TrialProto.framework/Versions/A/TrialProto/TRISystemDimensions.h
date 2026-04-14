@class NSString, NSMutableArray;

@interface TRISystemDimensions : PBCodable <NSCopying> {
    struct { unsigned char targetedPopulation : 1; unsigned char isBetaUser : 1; unsigned char isInternalBuild : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasDeviceClass;
@property (retain, nonatomic) NSString *deviceClass;
@property (nonatomic) BOOL hasIsInternalBuild;
@property (nonatomic) BOOL isInternalBuild;
@property (nonatomic) BOOL hasIsBetaUser;
@property (nonatomic) BOOL isBetaUser;
@property (readonly, nonatomic) BOOL hasVersionTag;
@property (retain, nonatomic) NSString *versionTag;
@property (readonly, nonatomic) BOOL hasOsBuild;
@property (retain, nonatomic) NSString *osBuild;
@property (readonly, nonatomic) BOOL hasUserSettingsLanguageCode;
@property (retain, nonatomic) NSString *userSettingsLanguageCode;
@property (readonly, nonatomic) BOOL hasUserSettingsRegionCode;
@property (retain, nonatomic) NSString *userSettingsRegionCode;
@property (retain, nonatomic) NSMutableArray *userKeyboardEnabledInputModeIdentifiers;
@property (readonly, nonatomic) BOOL hasUserSettingsBcp47DeviceLocale;
@property (retain, nonatomic) NSString *userSettingsBcp47DeviceLocale;
@property (nonatomic) BOOL hasTargetedPopulation;
@property (nonatomic) int targetedPopulation;

+ (Class)userKeyboardEnabledInputModeIdentifiersType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)addUserKeyboardEnabledInputModeIdentifiers:(id)a0;
- (unsigned long long)userKeyboardEnabledInputModeIdentifiersCount;
- (void)clearUserKeyboardEnabledInputModeIdentifiers;
- (id)userKeyboardEnabledInputModeIdentifiersAtIndex:(unsigned long long)a0;
- (id)targetedPopulationAsString:(int)a0;
- (int)StringAsTargetedPopulation:(id)a0;

@end
