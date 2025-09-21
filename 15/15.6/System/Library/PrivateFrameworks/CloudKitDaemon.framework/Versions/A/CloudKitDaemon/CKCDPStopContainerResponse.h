@interface CKCDPStopContainerResponse : PBCodable <NSCopying> {
    struct { unsigned char success : 1; } _has;
}

@property (nonatomic) char hasSuccess;
@property (nonatomic) char success;

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
