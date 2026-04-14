@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLNotabilityScore : PBCodable <NSCopying> {
    struct { unsigned char score : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) float score;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)typeAsString:(int)a0;
- (int)StringAsType:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
