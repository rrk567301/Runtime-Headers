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
+ (void)setLoggingDebug:(BOOL)a0;
+ (id)libraryVersion;
+ (id)addressObjectForPlaceData:(id)a0;
+ (id)addressObjectWithPlaceDataAddressObject:(id)a0 placeDataAddress:(id)a1 placeDataInfo:(id)a2 placeDataEntity:(id)a3;
+ (void)markMMStrings:(BOOL)a0;
+ (BOOL)isLoggingDebug;

- (id)spokenAddress;
- (id)addressDictionary;
- (id)address;
- (id)weatherDisplayName;
- (id)spokenStructuredAddress;
- (id)cnPostalAddress;
- (unsigned long long)hash;
- (id)initWithContactAddressDictionary:(id)a0 language:(id)a1 country:(id)a2 phoneticLocale:(id)a3;
- (id)cityAndAboveWithFallback:(BOOL)a0;
- (id)locationAddress;
- (id)shortAddress;
- (id)cityAndAboveWithFallback:(BOOL)a0 relative:(id)a1;
- (id)initWithCountryCode:(id)a0;
- (id)fullAddressWithMultiline:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;
- (id)fullAddressNoCurrentCountryWithMultiline:(BOOL)a0;
- (id)aboveDoorShortAddress;
- (void)dealloc;
- (id)initWithProtobufEncodedAsBase64String:(id)a0;
- (id)cityAndAboveNoCountryWithFallback:(BOOL)a0;
- (id)initWithPlaceDataAddressObject:(id)a0 placeDataAddress:(id)a1 placeDataInfo:(id)a2 placeDataEntity:(id)a3 language:(id)a4 country:(id)a5 phoneticLocale:(id)a6;
- (id)venueLabel;
- (id)parkingDisplayName;
- (id)spokenName;
- (id)initWithCoder:(id)a0;
- (id)countryName;
- (id)cityAndAboveNoCurrentCountryWithFallback:(BOOL)a0;
- (void).cxx_destruct;
- (id)fullAddressWithMultiline:(BOOL)a0 relative:(id)a1;
- (id)venueLevel;
- (id)name;
- (id)venueShortAddress;
- (id)spokenAddressForLocale:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)phoneticLocaleIdentifier;
- (id)neighborhoodName:(BOOL)a0;
- (id)weatherLocationName;
- (id)rawBytes;
- (id)phoneticName;
- (id)titlesForMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (id)phoneticAddress;
- (id)cityDisplayNameWithFallback:(BOOL)a0;
- (id)initWithCurrentCountry;
- (id)initWithCNPostalAddress:(id)a0 language:(id)a1 country:(id)a2 phoneticLocale:(id)a3;
- (id)venueLabel:(long long)a0;

@end
