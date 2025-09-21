@interface CKDPListPosition : PBCodable <NSCopying> {
    struct { unsigned char index : 1; unsigned char isReversed : 1; } _has;
}

@property (nonatomic) char hasIndex;
@property (nonatomic) int index;
@property (nonatomic) char hasIsReversed;
@property (nonatomic) char isReversed;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)_CKLogToFileHandle:(id)a0 atDepth:(int)a1;

@end
