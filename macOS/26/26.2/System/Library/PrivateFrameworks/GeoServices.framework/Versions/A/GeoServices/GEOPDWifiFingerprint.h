@class PBUnknownFields;

@interface GEOPDWifiFingerprint : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _confidence;
    int _labelType;
    int _status;
    struct { unsigned char has_confidence : 1; unsigned char has_labelType : 1; unsigned char has_status : 1; } _flags;
}

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;

@end
