@class NSString, PBUnknownFields;

@interface GEOWifiAccessPoint : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_macId;
    unsigned long long _scanTimestamp;
    unsigned int _age;
    int _channel;
    int _rssi;
    struct { unsigned char has_scanTimestamp : 1; unsigned char has_age : 1; unsigned char has_channel : 1; unsigned char has_rssi : 1; } _flags;
}

@property (readonly, nonatomic) char hasMacId;
@property (retain, nonatomic) NSString *macId;
@property (nonatomic) char hasRssi;
@property (nonatomic) int rssi;
@property (nonatomic) char hasChannel;
@property (nonatomic) int channel;
@property (nonatomic) char hasScanTimestamp;
@property (nonatomic) unsigned long long scanTimestamp;
@property (nonatomic) char hasAge;
@property (nonatomic) unsigned int age;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
