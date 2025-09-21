@interface NTPBNetworkSession : PBCodable <NSCopying> {
    struct { unsigned char sessionID : 1; unsigned char cellularRadioAccessTechnology : 1; unsigned char wifiReachable : 1; } _has;
}

@property (nonatomic) char hasSessionID;
@property (nonatomic) unsigned long long sessionID;
@property (nonatomic) char hasWifiReachable;
@property (nonatomic) char wifiReachable;
@property (nonatomic) char hasCellularRadioAccessTechnology;
@property (nonatomic) int cellularRadioAccessTechnology;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
