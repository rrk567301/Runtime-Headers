@interface BCSCategoryStyleAttribute : PBCodable <NSCopying> {
    struct { unsigned char key : 1; unsigned char value : 1; } _has;
}

@property (nonatomic) char hasKey;
@property (nonatomic) int key;
@property (nonatomic) char hasValue;
@property (nonatomic) int value;

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
