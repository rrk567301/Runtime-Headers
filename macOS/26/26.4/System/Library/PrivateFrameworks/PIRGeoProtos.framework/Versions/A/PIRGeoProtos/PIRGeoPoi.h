@class NSString, PIRPoint, PIRMapRegion, PIRStructuredAddress, PIRTimezone;

@interface PIRGeoPoi : PBCodable <NSCopying> {
    struct { unsigned char administrativeAreaEncryptedMuid : 1; unsigned char countryEncryptedMuid : 1; unsigned char encryptedMuid : 1; unsigned char popularityCartoScore : 1; unsigned char subAdministrativeAreaEncryptedMuid : 1; unsigned char zioId : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasApolloId;
@property (retain, nonatomic) NSString *apolloId;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasPrefGeocode;
@property (retain, nonatomic) PIRPoint *prefGeocode;
@property (readonly, nonatomic) BOOL hasAddress;
@property (retain, nonatomic) PIRStructuredAddress *address;
@property (nonatomic) BOOL hasZioId;
@property (nonatomic) unsigned long long zioId;
@property (readonly, nonatomic) BOOL hasTimezone;
@property (retain, nonatomic) PIRTimezone *timezone;
@property (nonatomic) BOOL hasPopularityCartoScore;
@property (nonatomic) double popularityCartoScore;
@property (readonly, nonatomic) BOOL hasModernPrimaryCategoryId;
@property (retain, nonatomic) NSString *modernPrimaryCategoryId;
@property (readonly, nonatomic) BOOL hasBoundingBox;
@property (retain, nonatomic) PIRMapRegion *boundingBox;
@property (readonly, nonatomic) BOOL hasPrefName;
@property (retain, nonatomic) NSString *prefName;
@property (nonatomic) BOOL hasEncryptedMuid;
@property (nonatomic) unsigned long long encryptedMuid;
@property (nonatomic) BOOL hasCountryEncryptedMuid;
@property (nonatomic) unsigned long long countryEncryptedMuid;
@property (nonatomic) BOOL hasAdministrativeAreaEncryptedMuid;
@property (nonatomic) unsigned long long administrativeAreaEncryptedMuid;
@property (nonatomic) BOOL hasSubAdministrativeAreaEncryptedMuid;
@property (nonatomic) unsigned long long subAdministrativeAreaEncryptedMuid;

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

@end
