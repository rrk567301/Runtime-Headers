@interface CLPNrCellTower : PBCodable <NSCopying> {
    struct { unsigned char ci : 1; unsigned char mcc : 1; unsigned char mnc : 1; unsigned char tac : 1; } _has;
}

@property (nonatomic) BOOL hasMcc;
@property (nonatomic) int mcc;
@property (nonatomic) BOOL hasMnc;
@property (nonatomic) int mnc;
@property (nonatomic) BOOL hasTac;
@property (nonatomic) int tac;
@property (nonatomic) BOOL hasCi;
@property (nonatomic) long long ci;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
