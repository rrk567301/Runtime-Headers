@class PBUnknownFields;

@interface GEOPDHoursThreshold : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _closingSoonMessageThresholdSecond;
    unsigned int _openingSoonMessageThresholdSecond;
    struct { unsigned char has_closingSoonMessageThresholdSecond : 1; unsigned char has_openingSoonMessageThresholdSecond : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
