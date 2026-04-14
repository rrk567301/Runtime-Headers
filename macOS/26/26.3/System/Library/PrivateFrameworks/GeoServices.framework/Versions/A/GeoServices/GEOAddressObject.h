@class NSString, _GEOAddressObject;

@interface GEOAddressObject : NSObject <NSSecureCoding> {
    _GEOAddressObject *_pimpl;
    int *_knownAccuracy;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *displayLanguage;
@property (readonly, nonatomic) BOOL hasKnownAccuracy;
@property (readonly, nonatomic) int knownAccuracy;

+ (BOOL)isMarkingMMStrings;
+ (id)addressObjectWithPlaceDataAddressObject:(id)a0 placeDataAddress:(id)a1 placeDataInfo:(id)a2 placeDataEntity:(id)a3;
+ (BOOL)isLoggingDebug;
+ (id)addressObjectForPlaceData:(id)a0;
+ (id)libraryVersion;
+ (void)markMMStrings:(BOOL)a0;
+ (void)setLoggingDebug:(BOOL)a0;

- (id)spokenAddress;
- (id)weatherDisplayName;
- (id)phoneticAddress;
- (id)addressDictionary;
- (id)initWithPlaceDataAddressObject:(id)a0 placeDataAddress:(id)a1 placeDataInfo:(id)a2 placeDataEntity:(id)a3 language:(id)a4 country:(id)a5 phoneticLocale:(id)a6;
- (id)countryName;
- (id)neighborhoodName:(BOOL)a0;
- (id)venueLabel;
- (id)initWithContactAddressDictionary:(id)a0 language:(id)a1 country:(id)a2 phoneticLocale:(id)a3;
- (id)locationAddress;
- (id)fullAddressWithMultiline:(BOOL)a0;
- (id)cityAndAboveWithFallback:(BOOL)a0;
- (id)cityAndAboveNoCountryWithFallback:(BOOL)a0;
- (id)aboveDoorShortAddress;
- (id)address;
- (id)initWithCurrentCountry;
- (id)phoneticName;
- (id)fullAddressWithMultiline:(BOOL)a0 relative:(id)a1;
- (id)fullAddressNoCurrentCountryWithMultiline:(BOOL)a0;
- (id)venueShortAddress;
- (id)spokenName;
- (id)titlesForMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (id)cnPostalAddress;
- (id)weatherLocationName;
- (id)cityAndAboveWithFallback:(BOOL)a0 relative:(id)a1;
- (id)name;
- (id)cityDisplayNameWithFallback:(BOOL)a0;
- (id)initWithProtobufEncodedAsBase64String:(id)a0;
- (id)spokenStructuredAddress;
- (void).cxx_destruct;
- (id)phoneticLocaleIdentifier;
- (id)venueLevel;
- (id)initWithCNPostalAddress:(id)a0 language:(id)a1 country:(id)a2 phoneticLocale:(id)a3;
- (id)spokenAddressForLocale:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)venueLabel:(long long)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)shortAddress;
- (id)cityAndAboveNoCurrentCountryWithFallback:(BOOL)a0;
- (unsigned long long)hash;
- (id)parkingDisplayName;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCountryCode:(id)a0;
- (id)rawBytes;

@end
