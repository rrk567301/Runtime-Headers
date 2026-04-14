@class NSString, _GEOAddressObject;

@interface GEOAddressObject : NSObject <NSSecureCoding> {
    _GEOAddressObject *_pimpl;
    int *_knownAccuracy;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *displayLanguage;
@property (readonly, nonatomic) BOOL hasKnownAccuracy;
@property (readonly, nonatomic) int knownAccuracy;

+ (id)libraryVersion;
+ (id)addressObjectForPlaceData:(id)a0;
+ (BOOL)isMarkingMMStrings;
+ (id)addressObjectWithPlaceDataAddressObject:(id)a0 placeDataAddress:(id)a1 placeDataInfo:(id)a2 placeDataEntity:(id)a3;
+ (BOOL)isLoggingDebug;
+ (void)markMMStrings:(BOOL)a0;
+ (void)setLoggingDebug:(BOOL)a0;

- (id)rawBytes;
- (id)countryName;
- (id)venueShortAddress;
- (id)addressDictionary;
- (id)venueLabel:(long long)a0;
- (void)dealloc;
- (id)fullAddressWithMultiline:(BOOL)a0;
- (id)initWithCountryCode:(id)a0;
- (id)weatherDisplayName;
- (id)initWithContactAddressDictionary:(id)a0 language:(id)a1 country:(id)a2 phoneticLocale:(id)a3;
- (id)cnPostalAddress;
- (id)fullAddressNoCurrentCountryWithMultiline:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;
- (id)cityAndAboveNoCountryWithFallback:(BOOL)a0;
- (id)neighborhoodName:(BOOL)a0;
- (id)weatherLocationName;
- (id)initWithCNPostalAddress:(id)a0 language:(id)a1 country:(id)a2 phoneticLocale:(id)a3;
- (id)parkingDisplayName;
- (id)locationAddress;
- (id)shortAddress;
- (id)spokenAddressForLocale:(id)a0;
- (id)address;
- (id)cityAndAboveWithFallback:(BOOL)a0 relative:(id)a1;
- (id)cityAndAboveNoCurrentCountryWithFallback:(BOOL)a0;
- (id)cityAndAboveWithFallback:(BOOL)a0;
- (id)titlesForMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (id)spokenStructuredAddress;
- (id)venueLevel;
- (id)venueLabel;
- (id)initWithCurrentCountry;
- (id)name;
- (id)spokenAddress;
- (id)initWithCoder:(id)a0;
- (id)phoneticAddress;
- (id)cityDisplayNameWithFallback:(BOOL)a0;
- (id)phoneticName;
- (unsigned long long)hash;
- (id)fullAddressWithMultiline:(BOOL)a0 relative:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)phoneticLocaleIdentifier;
- (void).cxx_destruct;
- (id)spokenName;
- (id)aboveDoorShortAddress;
- (id)initWithProtobufEncodedAsBase64String:(id)a0;
- (id)initWithPlaceDataAddressObject:(id)a0 placeDataAddress:(id)a1 placeDataInfo:(id)a2 placeDataEntity:(id)a3 language:(id)a4 country:(id)a5 phoneticLocale:(id)a6;

@end
