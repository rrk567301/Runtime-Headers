@class GEOLogMsgStateDeviceIdentifier, PBUnknownFields;

@interface GEOLogMsgStatePairedDevice : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOLogMsgStateDeviceIdentifier *_pairedDeviceIdentifier;
    int _type;
    char _isConnectedAndNearby;
    char _isConnected;
    struct { unsigned char has_type : 1; unsigned char has_isConnectedAndNearby : 1; unsigned char has_isConnected : 1; } _flags;
}

@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (nonatomic) char hasIsConnected;
@property (nonatomic) char isConnected;
@property (readonly, nonatomic) char hasPairedDeviceIdentifier;
@property (retain, nonatomic) GEOLogMsgStateDeviceIdentifier *pairedDeviceIdentifier;
@property (nonatomic) char hasIsConnectedAndNearby;
@property (nonatomic) char isConnectedAndNearby;
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
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
