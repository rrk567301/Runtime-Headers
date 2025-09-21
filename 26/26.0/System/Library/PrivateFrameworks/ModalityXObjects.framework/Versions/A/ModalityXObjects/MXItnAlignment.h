@interface MXItnAlignment : PBCodable <NSCopying> {
    struct { unsigned char firstPostItnCharPos : 1; unsigned char firstPreItnTokenIndex : 1; unsigned char lastPostItnCharPos : 1; unsigned char lastPreItnTokenIndex : 1; } _has;
}

@property (nonatomic) BOOL hasFirstPreItnTokenIndex;
@property (nonatomic) int firstPreItnTokenIndex;
@property (nonatomic) BOOL hasLastPreItnTokenIndex;
@property (nonatomic) int lastPreItnTokenIndex;
@property (nonatomic) BOOL hasFirstPostItnCharPos;
@property (nonatomic) int firstPostItnCharPos;
@property (nonatomic) BOOL hasLastPostItnCharPos;
@property (nonatomic) int lastPostItnCharPos;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
