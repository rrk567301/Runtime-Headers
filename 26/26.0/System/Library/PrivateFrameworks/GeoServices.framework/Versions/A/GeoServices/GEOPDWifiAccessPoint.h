@class NSString, PBUnknownFields;

@interface GEOPDWifiAccessPoint : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_macId;
    unsigned long long _scanTimestamp;
    unsigned int _age;
    int _channel;
    int _rssi;
    struct { unsigned char has_scanTimestamp : 1; unsigned char has_age : 1; unsigned char has_channel : 1; unsigned char has_rssi : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithGEOWifiAccessPoint:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
