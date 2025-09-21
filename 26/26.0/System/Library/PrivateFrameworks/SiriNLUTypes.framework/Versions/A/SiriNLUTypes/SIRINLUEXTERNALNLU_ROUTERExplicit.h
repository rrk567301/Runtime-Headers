@interface SIRINLUEXTERNALNLU_ROUTERExplicit : PBCodable <NSCopying> {
    struct { unsigned char partner : 1; } _has;
}

@property (nonatomic) BOOL hasPartner;
@property (nonatomic) int partner;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (int)StringAsPartner:(id)a0;
- (id)partnerAsString:(int)a0;

@end
