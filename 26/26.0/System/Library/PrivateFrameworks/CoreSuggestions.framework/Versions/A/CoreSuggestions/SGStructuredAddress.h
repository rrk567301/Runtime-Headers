@class NSString, NSMutableArray;

@interface SGStructuredAddress : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasCountry;
@property (retain, nonatomic) NSString *country;
@property (readonly, nonatomic) BOOL hasCountryCode;
@property (retain, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) BOOL hasAdministrativeArea;
@property (retain, nonatomic) NSString *administrativeArea;
@property (readonly, nonatomic) BOOL hasAdministrativeAreaCode;
@property (retain, nonatomic) NSString *administrativeAreaCode;
@property (readonly, nonatomic) BOOL hasSubAdministrativeArea;
@property (retain, nonatomic) NSString *subAdministrativeArea;
@property (readonly, nonatomic) BOOL hasLocality;
@property (retain, nonatomic) NSString *locality;
@property (retain, nonatomic) NSMutableArray *dependentLocalitys;
@property (readonly, nonatomic) BOOL hasThoroughfare;
@property (retain, nonatomic) NSString *thoroughfare;
@property (readonly, nonatomic) BOOL hasSubThroughfare;
@property (retain, nonatomic) NSString *subThroughfare;
@property (readonly, nonatomic) BOOL hasPostCode;
@property (retain, nonatomic) NSString *postCode;

+ (Class)dependentLocalityType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addDependentLocality:(id)a0;
- (void)clearDependentLocalitys;
- (id)dependentLocalityAtIndex:(unsigned long long)a0;
- (unsigned long long)dependentLocalitysCount;

@end
