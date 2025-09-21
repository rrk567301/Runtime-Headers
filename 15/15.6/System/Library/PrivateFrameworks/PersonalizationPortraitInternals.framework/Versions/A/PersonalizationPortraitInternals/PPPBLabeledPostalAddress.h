@class NSString;

@interface PPPBLabeledPostalAddress : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasLabel;
@property (retain, nonatomic) NSString *label;
@property (readonly, nonatomic) char hasStreet;
@property (retain, nonatomic) NSString *street;
@property (readonly, nonatomic) char hasSubLocality;
@property (retain, nonatomic) NSString *subLocality;
@property (readonly, nonatomic) char hasCity;
@property (retain, nonatomic) NSString *city;
@property (readonly, nonatomic) char hasSubAdministrativeArea;
@property (retain, nonatomic) NSString *subAdministrativeArea;
@property (readonly, nonatomic) char hasState;
@property (retain, nonatomic) NSString *state;
@property (readonly, nonatomic) char hasPostalCode;
@property (retain, nonatomic) NSString *postalCode;
@property (readonly, nonatomic) char hasCountry;
@property (retain, nonatomic) NSString *country;
@property (readonly, nonatomic) char hasIsoCountryCode;
@property (retain, nonatomic) NSString *isoCountryCode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
