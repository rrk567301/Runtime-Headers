@class NSString;

@interface AWDNWL2Report : PBCodable <NSCopying> {
    struct { unsigned char cellularBand : 1; unsigned char cellularBandInfo : 1; unsigned char cellularBandwidth : 1; unsigned char cellularBars : 1; unsigned char cellularLqm : 1; unsigned char cellularMcc : 1; unsigned char cellularMnc : 1; unsigned char cellularPid : 1; unsigned char cellularPowerCostDownload : 1; unsigned char cellularPowerCostUpload : 1; unsigned char cellularRadioTechnology : 1; unsigned char cellularTac : 1; unsigned char cellularUarfcn : 1; unsigned char wifiLqm : 1; unsigned char wifiRadioTechnology : 1; unsigned char wifiRssi : 1; unsigned char cellularKnownGood : 1; unsigned char wifiKnownGood : 1; } _has;
}

@property (nonatomic) char hasCellularLqm;
@property (nonatomic) int cellularLqm;
@property (nonatomic) char hasCellularPowerCostDownload;
@property (nonatomic) int cellularPowerCostDownload;
@property (nonatomic) char hasCellularPowerCostUpload;
@property (nonatomic) int cellularPowerCostUpload;
@property (nonatomic) char hasCellularKnownGood;
@property (nonatomic) char cellularKnownGood;
@property (nonatomic) char hasCellularRadioTechnology;
@property (nonatomic) int cellularRadioTechnology;
@property (nonatomic) char hasWifiLqm;
@property (nonatomic) int wifiLqm;
@property (nonatomic) char hasWifiRssi;
@property (nonatomic) int wifiRssi;
@property (nonatomic) char hasWifiKnownGood;
@property (nonatomic) char wifiKnownGood;
@property (nonatomic) char hasWifiRadioTechnology;
@property (nonatomic) int wifiRadioTechnology;
@property (nonatomic) char hasCellularMnc;
@property (nonatomic) int cellularMnc;
@property (nonatomic) char hasCellularMcc;
@property (nonatomic) int cellularMcc;
@property (nonatomic) char hasCellularUarfcn;
@property (nonatomic) int cellularUarfcn;
@property (nonatomic) char hasCellularPid;
@property (nonatomic) int cellularPid;
@property (nonatomic) char hasCellularBandInfo;
@property (nonatomic) int cellularBandInfo;
@property (readonly, nonatomic) char hasCellularCellType;
@property (retain, nonatomic) NSString *cellularCellType;
@property (nonatomic) char hasCellularBandwidth;
@property (nonatomic) int cellularBandwidth;
@property (nonatomic) char hasCellularTac;
@property (nonatomic) int cellularTac;
@property (nonatomic) char hasCellularBars;
@property (nonatomic) int cellularBars;
@property (nonatomic) char hasCellularBand;
@property (nonatomic) int cellularBand;

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
- (int)StringAsCellularBand:(id)a0;
- (int)StringAsCellularPowerCostDownload:(id)a0;
- (int)StringAsCellularRadioTechnology:(id)a0;
- (int)StringAsCellularPowerCostUpload:(id)a0;
- (int)StringAsWifiRadioTechnology:(id)a0;
- (id)cellularBandAsString:(int)a0;
- (id)cellularPowerCostDownloadAsString:(int)a0;
- (id)cellularPowerCostUploadAsString:(int)a0;
- (id)cellularRadioTechnologyAsString:(int)a0;
- (id)wifiRadioTechnologyAsString:(int)a0;

@end
