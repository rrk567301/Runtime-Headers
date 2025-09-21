@class NSData, NSString;

@interface AWDWiFiOtaSystemInfo : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char channel : 1; unsigned char channelWidth : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasBeaconInfo;
@property (retain, nonatomic) NSData *beaconInfo;
@property (readonly, nonatomic) char hasSsid;
@property (retain, nonatomic) NSString *ssid;
@property (readonly, nonatomic) char hasBssid;
@property (retain, nonatomic) NSString *bssid;
@property (readonly, nonatomic) char hasWpsResponseType;
@property (retain, nonatomic) NSString *wpsResponseType;
@property (readonly, nonatomic) char hasWpsManufacturerElement;
@property (retain, nonatomic) NSString *wpsManufacturerElement;
@property (readonly, nonatomic) char hasWpsModelName;
@property (retain, nonatomic) NSString *wpsModelName;
@property (readonly, nonatomic) char hasWpsModelNumber;
@property (retain, nonatomic) NSString *wpsModelNumber;
@property (readonly, nonatomic) char hasWpsPrimaryDeviceTypeCategory;
@property (retain, nonatomic) NSString *wpsPrimaryDeviceTypeCategory;
@property (readonly, nonatomic) char hasWpsPrimaryDeviceTypeSubCategory;
@property (retain, nonatomic) NSString *wpsPrimaryDeviceTypeSubCategory;
@property (readonly, nonatomic) char hasWpsDeviceNameElement;
@property (retain, nonatomic) NSString *wpsDeviceNameElement;
@property (readonly, nonatomic) char hasWpsDeviceNameData;
@property (retain, nonatomic) NSString *wpsDeviceNameData;
@property (readonly, nonatomic) char hasWpsConfigMethods;
@property (retain, nonatomic) NSString *wpsConfigMethods;
@property (readonly, nonatomic) char hasLocale;
@property (retain, nonatomic) NSString *locale;
@property (readonly, nonatomic) char hasLocaleSource;
@property (retain, nonatomic) NSString *localeSource;
@property (nonatomic) char hasChannel;
@property (nonatomic) unsigned int channel;
@property (nonatomic) char hasChannelWidth;
@property (nonatomic) unsigned int channelWidth;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
