@class NSData;

@interface HMAccessoryInfoProtoAirportInfoEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasSsid;
@property (retain, nonatomic) NSData *ssid;
@property (readonly, nonatomic) BOOL hasBssid;
@property (retain, nonatomic) NSData *bssid;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
