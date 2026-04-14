@interface CLPCdmaCellTower : PBCodable <NSCopying> {
    struct { unsigned char bsid : 1; unsigned char mcc : 1; unsigned char mnc : 1; unsigned char nid : 1; unsigned char sid : 1; } _has;
}

@property (nonatomic) BOOL hasMcc;
@property (nonatomic) int mcc;
@property (nonatomic) BOOL hasMnc;
@property (nonatomic) int mnc;
@property (nonatomic) BOOL hasSid;
@property (nonatomic) int sid;
@property (nonatomic) BOOL hasNid;
@property (nonatomic) int nid;
@property (nonatomic) BOOL hasBsid;
@property (nonatomic) int bsid;

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
