@class NSString, PBUnknownFields;

@interface GEOPDExtendedGeoLookupResult : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_dataSourceId;
    int _status;
    BOOL _primaryFeatureMatched;
    struct { unsigned char has_status : 1; unsigned char has_primaryFeatureMatched : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
