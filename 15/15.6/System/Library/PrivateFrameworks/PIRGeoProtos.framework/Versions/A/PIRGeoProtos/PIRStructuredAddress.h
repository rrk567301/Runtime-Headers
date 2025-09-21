@class NSString, NSMutableArray;

@interface PIRStructuredAddress : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasCountry;
@property (retain, nonatomic) NSString *country;
@property (readonly, nonatomic) char hasCountryCode;
@property (retain, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) char hasAdministrativeArea;
@property (retain, nonatomic) NSString *administrativeArea;
@property (readonly, nonatomic) char hasAdministrativeAreaCode;
@property (retain, nonatomic) NSString *administrativeAreaCode;
@property (readonly, nonatomic) char hasSubAdministrativeArea;
@property (retain, nonatomic) NSString *subAdministrativeArea;
@property (readonly, nonatomic) char hasLocality;
@property (retain, nonatomic) NSString *locality;
@property (readonly, nonatomic) char hasPostCode;
@property (retain, nonatomic) NSString *postCode;
@property (readonly, nonatomic) char hasThoroughfare;
@property (retain, nonatomic) NSString *thoroughfare;
@property (readonly, nonatomic) char hasSubThoroughfare;
@property (retain, nonatomic) NSString *subThoroughfare;
@property (retain, nonatomic) NSMutableArray *dependentLocalitys;

+ (Class)dependentLocalityType;

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
- (void)addDependentLocality:(id)a0;
- (void)clearDependentLocalitys;
- (id)dependentLocalityAtIndex:(unsigned long long)a0;
- (unsigned long long)dependentLocalitysCount;

@end
