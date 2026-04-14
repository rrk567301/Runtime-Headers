@class NSString, NSMutableArray, PBDataReader;

@interface GEOPDSearchQueryClassificationMetadata : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_classiferId;
    NSMutableArray *_modelVersions;
    NSMutableArray *_predictions;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    float _localGlobalThreshold;
    float _poiGeoThreshold;
    struct { unsigned char has_localGlobalThreshold : 1; unsigned char has_poiGeoThreshold : 1; unsigned char read_classiferId : 1; unsigned char read_modelVersions : 1; unsigned char read_predictions : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)init;
- (void)writeTo:(id)a0;

@end
