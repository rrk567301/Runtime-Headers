@class NSMutableArray;

@interface CKDPAncestryEtag : PBCodable <NSCopying> {
    struct { unsigned char validationType : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *ancestorInformations;
@property (nonatomic) BOOL hasValidationType;
@property (nonatomic) int validationType;

+ (Class)ancestorInformationType;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (int)StringAsValidationType:(id)a0;
- (void)addAncestorInformation:(id)a0;
- (id)ancestorInformationAtIndex:(unsigned long long)a0;
- (unsigned long long)ancestorInformationsCount;
- (void)clearAncestorInformations;
- (id)validationTypeAsString:(int)a0;

@end
