@class PBUnknownFields;

@interface GEOCoverageExtent : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct GEOCoverageException { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x5; } *_coverageExceptions;
    unsigned long long _coverageExceptionsCount;
    unsigned long long _coverageExceptionsSpace;
    unsigned int _maxX;
    unsigned int _maxY;
    unsigned int _minX;
    unsigned int _minY;
    unsigned int _zoom;
    struct { unsigned char has_maxX : 1; unsigned char has_maxY : 1; unsigned char has_minX : 1; unsigned char has_minY : 1; unsigned char has_zoom : 1; } _flags;
}

@property (nonatomic) char hasMinX;
@property (nonatomic) unsigned int minX;
@property (nonatomic) char hasMinY;
@property (nonatomic) unsigned int minY;
@property (nonatomic) char hasMaxX;
@property (nonatomic) unsigned int maxX;
@property (nonatomic) char hasMaxY;
@property (nonatomic) unsigned int maxY;
@property (nonatomic) char hasZoom;
@property (nonatomic) unsigned int zoom;
@property (readonly, nonatomic) unsigned long long coverageExceptionsCount;
@property (readonly, nonatomic) struct GEOCoverageException { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x5; } *coverageExceptions;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (void)dealloc;
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
- (void)addCoverageException:(struct GEOCoverageException { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x5; })a0;
- (void)clearCoverageExceptions;
- (void)clearUnknownFields:(char)a0;
- (struct GEOCoverageException { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x5; })coverageExceptionAtIndex:(unsigned long long)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (void)setCoverageExceptions:(struct GEOCoverageException { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x5; } *)a0 count:(unsigned long long)a1;

@end
