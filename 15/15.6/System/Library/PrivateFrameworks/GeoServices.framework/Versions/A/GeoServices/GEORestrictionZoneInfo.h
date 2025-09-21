@class NSMutableArray, PBUnknownFields;

@interface GEORestrictionZoneInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_restrictedZoneIds;
    int _environmentalCongestionZoneImpact;
    int _licensePlateRestrictionImpact;
    int _tollCongestionZoneImpact;
    struct { unsigned char has_environmentalCongestionZoneImpact : 1; unsigned char has_licensePlateRestrictionImpact : 1; unsigned char has_tollCongestionZoneImpact : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *restrictedZoneIds;
@property (nonatomic) char hasLicensePlateRestrictionImpact;
@property (nonatomic) int licensePlateRestrictionImpact;
@property (nonatomic) char hasEnvironmentalCongestionZoneImpact;
@property (nonatomic) int environmentalCongestionZoneImpact;
@property (nonatomic) char hasTollCongestionZoneImpact;
@property (nonatomic) int tollCongestionZoneImpact;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;
+ (Class)restrictedZoneIdsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsEnvironmentalCongestionZoneImpact:(id)a0;
- (int)StringAsTollCongestionZoneImpact:(id)a0;
- (int)StringAsLicensePlateRestrictionImpact:(id)a0;
- (void)addRestrictedZoneIds:(id)a0;
- (void)clearRestrictedZoneIds;
- (void)clearUnknownFields:(char)a0;
- (id)environmentalCongestionZoneImpactAsString:(int)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)licensePlateRestrictionImpactAsString:(int)a0;
- (void)readAll:(char)a0;
- (id)restrictedZoneIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)restrictedZoneIdsCount;
- (id)tollCongestionZoneImpactAsString:(int)a0;

@end
