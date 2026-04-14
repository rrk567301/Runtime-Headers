@class NSString;

@interface CLPPoiWifiAccessPoint : PBCodable <NSCopying> {
    struct { unsigned char age : 1; unsigned char scanTimestamp : 1; } _has;
}

@property (retain, nonatomic) NSString *mac;
@property (nonatomic) int rssi;
@property (nonatomic) int channel;
@property (nonatomic) BOOL hasAge;
@property (nonatomic) double age;
@property (nonatomic) BOOL hasScanTimestamp;
@property (nonatomic) double scanTimestamp;

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
