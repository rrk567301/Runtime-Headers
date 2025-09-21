@class NSString, GEORPCategoryCorrections, PBDataReader, PBUnknownFields, GEORPAmenityCorrections, NSMutableArray, GEORPPlaceContainmentCorrections, GEORPAddressCorrections;

@interface GEORPPoiCorrections : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPAddressCorrections *_address;
    GEORPAmenityCorrections *_amenity;
    NSMutableArray *_businessHours;
    GEORPCategoryCorrections *_category;
    GEORPPlaceContainmentCorrections *_containmentCorrections;
    NSString *_hoursText;
    NSString *_name;
    NSString *_originalName;
    NSString *_originalPhone;
    NSString *_originalUrl;
    NSString *_phone;
    NSString *_url;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    char _flagBadCuratedCollectionDescription;
    char _flagBrokenCuratedCollectionUrl;
    char _flagHoursIncorrect;
    char _flagNotAtThisAddress;
    struct { unsigned char has_flagBadCuratedCollectionDescription : 1; unsigned char has_flagBrokenCuratedCollectionUrl : 1; unsigned char has_flagHoursIncorrect : 1; unsigned char has_flagNotAtThisAddress : 1; unsigned char read_unknownFields : 1; unsigned char read_address : 1; unsigned char read_amenity : 1; unsigned char read_businessHours : 1; unsigned char read_category : 1; unsigned char read_containmentCorrections : 1; unsigned char read_hoursText : 1; unsigned char read_name : 1; unsigned char read_originalName : 1; unsigned char read_originalPhone : 1; unsigned char read_originalUrl : 1; unsigned char read_phone : 1; unsigned char read_url : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) char hasPhone;
@property (retain, nonatomic) NSString *phone;
@property (readonly, nonatomic) char hasAddress;
@property (retain, nonatomic) GEORPAddressCorrections *address;
@property (retain, nonatomic) NSMutableArray *businessHours;
@property (readonly, nonatomic) char hasUrl;
@property (retain, nonatomic) NSString *url;
@property (readonly, nonatomic) char hasCategory;
@property (retain, nonatomic) GEORPCategoryCorrections *category;
@property (readonly, nonatomic) char hasAmenity;
@property (retain, nonatomic) GEORPAmenityCorrections *amenity;
@property (nonatomic) char hasFlagHoursIncorrect;
@property (nonatomic) char flagHoursIncorrect;
@property (nonatomic) char hasFlagNotAtThisAddress;
@property (nonatomic) char flagNotAtThisAddress;
@property (readonly, nonatomic) char hasOriginalName;
@property (retain, nonatomic) NSString *originalName;
@property (readonly, nonatomic) char hasOriginalPhone;
@property (retain, nonatomic) NSString *originalPhone;
@property (readonly, nonatomic) char hasOriginalUrl;
@property (retain, nonatomic) NSString *originalUrl;
@property (readonly, nonatomic) char hasHoursText;
@property (retain, nonatomic) NSString *hoursText;
@property (readonly, nonatomic) char hasContainmentCorrections;
@property (retain, nonatomic) GEORPPlaceContainmentCorrections *containmentCorrections;
@property (nonatomic) char hasFlagBrokenCuratedCollectionUrl;
@property (nonatomic) char flagBrokenCuratedCollectionUrl;
@property (nonatomic) char hasFlagBadCuratedCollectionDescription;
@property (nonatomic) char flagBadCuratedCollectionDescription;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)businessHoursType;
+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addBusinessHours:(id)a0;
- (id)businessHoursAtIndex:(unsigned long long)a0;
- (unsigned long long)businessHoursCount;
- (void)clearBusinessHours;
- (void)clearUnknownFields:(char)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
