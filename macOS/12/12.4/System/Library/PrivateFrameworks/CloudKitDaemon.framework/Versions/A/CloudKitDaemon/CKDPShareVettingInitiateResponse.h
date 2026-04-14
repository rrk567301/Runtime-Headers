@interface CKDPShareVettingInitiateResponse : PBCodable <NSCopying> {
    struct { unsigned char vettingError : 1; } _has;
}

@property (nonatomic) BOOL hasVettingError;
@property (nonatomic) int vettingError;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (id)vettingErrorAsString:(int)a0;
- (int)StringAsVettingError:(id)a0;

@end
