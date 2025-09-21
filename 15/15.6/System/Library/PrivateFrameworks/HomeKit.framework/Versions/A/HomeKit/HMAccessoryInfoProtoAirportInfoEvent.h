@class NSData;

@interface HMAccessoryInfoProtoAirportInfoEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasSsid;
@property (retain, nonatomic) NSData *ssid;
@property (readonly, nonatomic) char hasBssid;
@property (retain, nonatomic) NSData *bssid;

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

@end
