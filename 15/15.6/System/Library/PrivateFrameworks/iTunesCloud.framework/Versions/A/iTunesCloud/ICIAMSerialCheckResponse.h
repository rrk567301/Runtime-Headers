@interface ICIAMSerialCheckResponse : PBCodable <NSCopying> {
    struct { unsigned char commandSerialNumber : 1; } _has;
}

@property (nonatomic) char hasCommandSerialNumber;
@property (nonatomic) long long commandSerialNumber;

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
