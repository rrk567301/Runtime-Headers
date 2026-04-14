@interface CLPLteCellTower : PBCodable <NSCopying> {
    struct { unsigned char ci : 1; unsigned char mcc : 1; unsigned char mnc : 1; unsigned char tac : 1; } _has;
}

@property (nonatomic) BOOL hasMcc;
@property (nonatomic) int mcc;
@property (nonatomic) BOOL hasMnc;
@property (nonatomic) int mnc;
@property (nonatomic) BOOL hasTac;
@property (nonatomic) int tac;
@property (nonatomic) BOOL hasCi;
@property (nonatomic) int ci;

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
