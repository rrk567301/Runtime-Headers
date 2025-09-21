@class PBUnknownFields;

@interface GEOPDSSearchRedoButtonThreshold : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    double _panDeltaThresholdInMeters;
    double _zoomInPercentThreshold;
    double _zoomOutPercentThreshold;
    unsigned int _numberOfVisiblePoisThreshold;
    struct { unsigned char has_panDeltaThresholdInMeters : 1; unsigned char has_zoomInPercentThreshold : 1; unsigned char has_zoomOutPercentThreshold : 1; unsigned char has_numberOfVisiblePoisThreshold : 1; } _flags;
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
