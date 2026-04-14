@class GEOWiFiConnectionQuality, PBUnknownFields;

@interface GEOLogMsgEventWifiConnectionQualityProbe : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOWiFiConnectionQuality *_wifiConnectionQuality;
}

@property (readonly, nonatomic) BOOL hasWifiConnectionQuality;
@property (retain, nonatomic) GEOWiFiConnectionQuality *wifiConnectionQuality;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)readAll:(BOOL)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;

@end
