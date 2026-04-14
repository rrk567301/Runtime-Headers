@class NSString, NSMutableArray;

@interface CKDPZoneEtagValidationInformation : PBCodable <NSCopying> {
    struct { unsigned char validationType : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *ancestorInformations;
@property (nonatomic) BOOL hasValidationType;
@property (nonatomic) int validationType;
@property (readonly, nonatomic) BOOL hasLocalZoneEtag;
@property (retain, nonatomic) NSString *localZoneEtag;

+ (Class)ancestorInformationType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (int)StringAsValidationType:(id)a0;
- (void)addAncestorInformation:(id)a0;
- (id)ancestorInformationAtIndex:(unsigned long long)a0;
- (unsigned long long)ancestorInformationsCount;
- (void)clearAncestorInformations;
- (id)validationTypeAsString:(int)a0;

@end
