@class NSString, PBUnknownFields;

@interface GEOPDExtendedGeoLookupResult : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_dataSourceId;
    int _status;
    BOOL _primaryFeatureMatched;
    struct { unsigned char has_status : 1; unsigned char has_primaryFeatureMatched : 1; } _flags;
}

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)jsonRepresentation;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
