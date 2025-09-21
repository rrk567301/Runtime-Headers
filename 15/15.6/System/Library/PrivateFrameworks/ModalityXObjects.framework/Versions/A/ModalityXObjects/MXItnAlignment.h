@interface MXItnAlignment : PBCodable <NSCopying> {
    struct { unsigned char firstPostItnCharPos : 1; unsigned char firstPreItnTokenIndex : 1; unsigned char lastPostItnCharPos : 1; unsigned char lastPreItnTokenIndex : 1; } _has;
}

@property (nonatomic) char hasFirstPreItnTokenIndex;
@property (nonatomic) int firstPreItnTokenIndex;
@property (nonatomic) char hasLastPreItnTokenIndex;
@property (nonatomic) int lastPreItnTokenIndex;
@property (nonatomic) char hasFirstPostItnCharPos;
@property (nonatomic) int firstPostItnCharPos;
@property (nonatomic) char hasLastPostItnCharPos;
@property (nonatomic) int lastPostItnCharPos;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
