@interface CKDPListPosition : PBCodable <NSCopying> {
    struct { unsigned char index : 1; unsigned char isReversed : 1; } _has;
}

@property (nonatomic) BOOL hasIndex;
@property (nonatomic) int index;
@property (nonatomic) BOOL hasIsReversed;
@property (nonatomic) BOOL isReversed;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)_CKLogToFileHandle:(id)a0 atDepth:(int)a1;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
