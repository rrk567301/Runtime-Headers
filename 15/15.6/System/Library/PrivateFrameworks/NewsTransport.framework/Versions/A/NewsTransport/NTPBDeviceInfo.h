@class NSString, NSMutableArray;

@interface NTPBDeviceInfo : PBCodable <NSCopying> {
    struct { unsigned char deviceDstOffset : 1; unsigned char deviceUtcOffset : 1; unsigned char deviceDigestMode : 1; unsigned char deviceTokenEnv : 1; } _has;
}

@property (readonly, nonatomic) char hasDevicePushToken;
@property (retain, nonatomic) NSString *devicePushToken;
@property (readonly, nonatomic) char hasDeviceType;
@property (retain, nonatomic) NSString *deviceType;
@property (readonly, nonatomic) char hasDeviceTimezone;
@property (retain, nonatomic) NSString *deviceTimezone;
@property (nonatomic) char hasDeviceTokenEnv;
@property (nonatomic) int deviceTokenEnv;
@property (retain, nonatomic) NSMutableArray *devicePreferredLanguages;
@property (readonly, nonatomic) char hasDeviceOsVersion;
@property (retain, nonatomic) NSString *deviceOsVersion;
@property (nonatomic) char hasDeviceUtcOffset;
@property (nonatomic) long long deviceUtcOffset;
@property (nonatomic) char hasDeviceDstOffset;
@property (nonatomic) long long deviceDstOffset;
@property (readonly, nonatomic) char hasDeviceAppVersion;
@property (retain, nonatomic) NSString *deviceAppVersion;
@property (readonly, nonatomic) char hasDeviceAppBundleId;
@property (retain, nonatomic) NSString *deviceAppBundleId;
@property (nonatomic) char hasDeviceDigestMode;
@property (nonatomic) int deviceDigestMode;

+ (Class)devicePreferredLanguageType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)devicePreferredLanguageAtIndex:(unsigned long long)a0;
- (void)addDevicePreferredLanguage:(id)a0;
- (void)clearDevicePreferredLanguages;
- (unsigned long long)devicePreferredLanguagesCount;

@end
