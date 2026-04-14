@interface SIRINLUEXTERNALNLU_ROUTERExplicit : PBCodable <NSCopying> {
    struct { unsigned char partner : 1; } _has;
}

@property (nonatomic) BOOL hasPartner;
@property (nonatomic) int partner;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsPartner:(id)a0;
- (id)partnerAsString:(int)a0;

@end
