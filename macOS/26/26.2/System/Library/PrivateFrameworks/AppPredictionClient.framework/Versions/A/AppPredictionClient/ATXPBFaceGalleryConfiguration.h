@class NSMutableArray;

@interface ATXPBFaceGalleryConfiguration : PBCodable <NSCopying> {
    NSMutableArray *_sections;
    int _source;
    struct { unsigned char source : 1; } _has;
}

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;

@end
