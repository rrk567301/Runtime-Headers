@interface NSPPrivacyProxyCost : PBCodable <NSCopying> {
    struct { unsigned char limit : 1; unsigned char remaining : 1; } _has;
}

@property (nonatomic) BOOL hasLimit;
@property (nonatomic) double limit;
@property (nonatomic) BOOL hasRemaining;
@property (nonatomic) double remaining;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
