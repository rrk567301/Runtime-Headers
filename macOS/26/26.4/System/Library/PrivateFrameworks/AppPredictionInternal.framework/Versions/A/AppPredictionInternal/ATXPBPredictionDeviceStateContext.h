@class NSString;

@interface ATXPBPredictionDeviceStateContext : PBCodable <NSCopying> {
    struct { unsigned char inAirplaneMode : 1; unsigned char onWifi : 1; } _has;
}

@property (nonatomic) BOOL hasOnWifi;
@property (nonatomic) BOOL onWifi;
@property (readonly, nonatomic) BOOL hasWifiSSID;
@property (retain, nonatomic) NSString *wifiSSID;
@property (nonatomic) BOOL hasInAirplaneMode;
@property (nonatomic) BOOL inAirplaneMode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
