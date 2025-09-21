@interface AWDWiFiMetricHotspotTransportType : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char bt : 1; unsigned char usb : 1; unsigned char wifi : 1; } _has;
}

@property (nonatomic) char hasWifi;
@property (nonatomic) unsigned int wifi;
@property (nonatomic) char hasBt;
@property (nonatomic) unsigned int bt;
@property (nonatomic) char hasUsb;
@property (nonatomic) unsigned int usb;
@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

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
