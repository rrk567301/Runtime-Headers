@interface _ICLLAvailability : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _repeatModes;
    struct { int *list; unsigned long long count; unsigned long long size; } _shuffleModes;
    char _autoPlay;
    struct { unsigned char autoPlay : 1; } _has;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
