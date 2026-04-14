@class NSData;

@interface HMAccessoryInfoProtoAirportInfoEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasSsid;
@property (retain, nonatomic) NSData *ssid;
@property (readonly, nonatomic) BOOL hasBssid;
@property (retain, nonatomic) NSData *bssid;

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
