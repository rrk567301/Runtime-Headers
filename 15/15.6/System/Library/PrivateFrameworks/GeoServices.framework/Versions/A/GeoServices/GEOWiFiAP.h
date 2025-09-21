@class NSString;

@interface GEOWiFiAP : PBCodable <NSCopying> {
    NSString *_uniqueID;
    unsigned int _channel;
    int _origin;
    int _rssi;
    struct { unsigned char has_channel : 1; unsigned char has_origin : 1; unsigned char has_rssi : 1; } _flags;
}

@property (readonly, nonatomic) char hasUniqueID;
@property (retain, nonatomic) NSString *uniqueID;
@property (nonatomic) char hasRssi;
@property (nonatomic) int rssi;
@property (nonatomic) char hasChannel;
@property (nonatomic) unsigned int channel;
@property (nonatomic) char hasOrigin;
@property (nonatomic) int origin;

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
- (int)StringAsOrigin:(id)a0;
- (id)originAsString:(int)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
