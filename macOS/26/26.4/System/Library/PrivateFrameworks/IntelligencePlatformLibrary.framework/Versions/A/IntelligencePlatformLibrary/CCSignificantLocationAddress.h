@class NSString, NSArray;

@interface CCSignificantLocationAddress : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
}

@property (readonly, nonatomic) NSString *thoroughfare;
@property (readonly, nonatomic) NSString *subLocality;
@property (readonly, nonatomic) NSString *locality;
@property (readonly, nonatomic) NSString *country;
@property (readonly, nonatomic) NSArray *subPremises;
@property (readonly, nonatomic) NSString *subThoroughfare;
@property (readonly, nonatomic) NSString *subAministrativeArea;
@property (readonly, nonatomic) NSString *administrativeArea;
@property (readonly, nonatomic) NSString *administrativeAreaCode;
@property (readonly, nonatomic) NSString *postalCode;
@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) NSString *inlandWater;
@property (readonly, nonatomic) NSString *ocean;
@property (readonly, nonatomic) NSArray *areasOfInterest;
@property (readonly, nonatomic) BOOL isIsland;
@property (nonatomic) BOOL hasIsIsland;
@property (readonly, nonatomic) NSString *iso3166CountryCode;
@property (readonly, nonatomic) NSString *iso3166SubdivisionCode;
@property (readonly, nonatomic) NSString *mergedThoroughfare;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;
+ (unsigned short)typeIdentifierForDescription:(id)a0;

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)jsonDictionary;
- (void).cxx_destruct;
- (BOOL)decodeFieldValuesFromData:(id)a0 error:(id *)a1;
- (BOOL)ensureDecodedWithError:(id *)a0;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (id)initLazyDecodedWithTrustedItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithThoroughfare:(id)a0 subLocality:(id)a1 locality:(id)a2 country:(id)a3 error:(id *)a4;
- (id)initWithThoroughfare:(id)a0 subLocality:(id)a1 locality:(id)a2 country:(id)a3 subPremises:(id)a4 subThoroughfare:(id)a5 subAministrativeArea:(id)a6 administrativeArea:(id)a7 administrativeAreaCode:(id)a8 postalCode:(id)a9 countryCode:(id)a10 inlandWater:(id)a11 ocean:(id)a12 areasOfInterest:(id)a13 isIsland:(id)a14 iso3166CountryCode:(id)a15 iso3166SubdivisionCode:(id)a16 mergedThoroughfare:(id)a17 error:(id *)a18;

@end
