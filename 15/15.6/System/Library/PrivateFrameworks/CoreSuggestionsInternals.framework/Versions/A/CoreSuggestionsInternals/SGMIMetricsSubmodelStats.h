@interface SGMIMetricsSubmodelStats : PBCodable <NSCopying> {
    struct { unsigned char ageOfTheSubmodelInDays : 1; unsigned char nbExtremelyDiscriminantTokensForIgnorability : 1; unsigned char nbExtremelyDiscriminantTokensForSaliency : 1; unsigned char nbHighlyDiscriminantTokensForIgnorability : 1; unsigned char nbHighlyDiscriminantTokensForSaliency : 1; } _has;
}

@property (nonatomic) char hasAgeOfTheSubmodelInDays;
@property (nonatomic) unsigned int ageOfTheSubmodelInDays;
@property (nonatomic) char hasNbHighlyDiscriminantTokensForSaliency;
@property (nonatomic) unsigned int nbHighlyDiscriminantTokensForSaliency;
@property (nonatomic) char hasNbHighlyDiscriminantTokensForIgnorability;
@property (nonatomic) unsigned int nbHighlyDiscriminantTokensForIgnorability;
@property (nonatomic) char hasNbExtremelyDiscriminantTokensForSaliency;
@property (nonatomic) unsigned int nbExtremelyDiscriminantTokensForSaliency;
@property (nonatomic) char hasNbExtremelyDiscriminantTokensForIgnorability;
@property (nonatomic) unsigned int nbExtremelyDiscriminantTokensForIgnorability;

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
