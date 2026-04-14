@interface ICIAMSerialCheckResponse : PBCodable <NSCopying> {
    struct { unsigned char commandSerialNumber : 1; } _has;
}

@property (nonatomic) BOOL hasCommandSerialNumber;
@property (nonatomic) long long commandSerialNumber;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;

@end
