@interface ICPAPlayModeDictionary : PBCodable <NSCopying> {
    int _autoPlayMode;
    int _repeatPlayMode;
    int _shufflePlayMode;
    struct { unsigned char autoPlayMode : 1; unsigned char repeatPlayMode : 1; unsigned char shufflePlayMode : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
