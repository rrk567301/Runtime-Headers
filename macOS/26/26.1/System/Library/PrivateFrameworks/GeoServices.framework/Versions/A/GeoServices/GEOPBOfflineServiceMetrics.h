@interface GEOPBOfflineServiceMetrics : PBCodable <NSCopying> {
    unsigned long long _startTimeMs;
    unsigned long long _stopTimeMs;
    int _serviceId;
    struct { unsigned char has_startTimeMs : 1; unsigned char has_stopTimeMs : 1; unsigned char has_serviceId : 1; } _flags;
}

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)jsonRepresentation;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
