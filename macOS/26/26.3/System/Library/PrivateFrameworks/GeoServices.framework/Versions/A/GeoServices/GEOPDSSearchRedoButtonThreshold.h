@class PBUnknownFields;

@interface GEOPDSSearchRedoButtonThreshold : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    double _panDeltaThresholdInMeters;
    double _zoomInPercentThreshold;
    double _zoomOutPercentThreshold;
    unsigned int _numberOfVisiblePoisThreshold;
    struct { unsigned char has_panDeltaThresholdInMeters : 1; unsigned char has_zoomInPercentThreshold : 1; unsigned char has_zoomOutPercentThreshold : 1; unsigned char has_numberOfVisiblePoisThreshold : 1; } _flags;
}

- (id)dictionaryRepresentation;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
