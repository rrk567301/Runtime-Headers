@class PBUnknownFields;

@interface GEOLaneWidth : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _offset;
    unsigned int _width;
    unsigned int _zilchPathIndex;
    struct { unsigned char has_offset : 1; unsigned char has_width : 1; unsigned char has_zilchPathIndex : 1; } _flags;
}

@property (nonatomic) char hasWidth;
@property (nonatomic) unsigned int width;
@property (nonatomic) char hasOffset;
@property (nonatomic) unsigned int offset;
@property (nonatomic) char hasZilchPathIndex;
@property (nonatomic) unsigned int zilchPathIndex;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

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
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
