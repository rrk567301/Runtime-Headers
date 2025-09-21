@class NSString, NSMutableArray;

@interface NTPBTelemetry : PBCodable <NSCopying> {
    struct { unsigned char appBuild : 1; unsigned char contentEnvironment : 1; unsigned char osInstallVariant : 1; } _has;
}

@property (readonly, nonatomic) char hasDeviceModel;
@property (retain, nonatomic) NSString *deviceModel;
@property (readonly, nonatomic) char hasDevicePlatform;
@property (retain, nonatomic) NSString *devicePlatform;
@property (readonly, nonatomic) char hasOsVersion;
@property (retain, nonatomic) NSString *osVersion;
@property (readonly, nonatomic) char hasAppVersion;
@property (retain, nonatomic) NSString *appVersion;
@property (nonatomic) char hasAppBuild;
@property (nonatomic) long long appBuild;
@property (readonly, nonatomic) char hasCountryCode;
@property (retain, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) char hasLanguageCode;
@property (retain, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) char hasCarrier;
@property (retain, nonatomic) NSString *carrier;
@property (readonly, nonatomic) char hasMobileCountryCode;
@property (retain, nonatomic) NSString *mobileCountryCode;
@property (readonly, nonatomic) char hasMobileNetworkCode;
@property (retain, nonatomic) NSString *mobileNetworkCode;
@property (readonly, nonatomic) char hasOsCountryCode;
@property (retain, nonatomic) NSString *osCountryCode;
@property (nonatomic) char hasOsInstallVariant;
@property (nonatomic) int osInstallVariant;
@property (nonatomic) char hasContentEnvironment;
@property (nonatomic) int contentEnvironment;
@property (readonly, nonatomic) char hasUserId;
@property (retain, nonatomic) NSString *userId;
@property (readonly, nonatomic) char hasUserStorefrontId;
@property (retain, nonatomic) NSString *userStorefrontId;
@property (retain, nonatomic) NSMutableArray *networkEventGroups;
@property (readonly, nonatomic) char hasAppBuildNumber;
@property (retain, nonatomic) NSString *appBuildNumber;

+ (Class)networkEventGroupsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsOsInstallVariant:(id)a0;
- (void)addNetworkEventGroups:(id)a0;
- (void)clearNetworkEventGroups;
- (id)networkEventGroupsAtIndex:(unsigned long long)a0;
- (unsigned long long)networkEventGroupsCount;
- (id)osInstallVariantAsString:(int)a0;

@end
