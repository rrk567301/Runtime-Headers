@class NSString, _GEOAddressObject;

@interface GEOAddressObject : NSObject <NSSecureCoding> {
    _GEOAddressObject *_pimpl;
    int *_knownAccuracy;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *displayLanguage;
@property (readonly, nonatomic) BOOL hasKnownAccuracy;
@property (readonly, nonatomic) int knownAccuracy;

+ (BOOL)isLoggingDebug;
+ (void)setLoggingDebug:(BOOL)a0;
+ (id)addressObjectForPlaceData:(id)a0;
+ (BOOL)isMarkingMMStrings;
+ (id)addressObjectWithPlaceDataAddressObject:(id)a0 placeDataAddress:(id)a1 placeDataInfo:(id)a2 placeDataEntity:(id)a3;
+ (void)markMMStrings:(BOOL)a0;
+ (id)libraryVersion;

- (id)countryName;
- (id)rawBytes;
- (id)cityAndAboveNoCountryWithFallback:(BOOL)a0;
- (id)addressDictionary;
- (id)name;
- (id)weatherDisplayName;
- (id)phoneticAddress;
- (id)spokenAddressForLocale:(id)a0;
- (id)titlesForMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (id)initWithCNPostalAddress:(id)a0 language:(id)a1 country:(id)a2 phoneticLocale:(id)a3;
- (id)initWithCurrentCountry;
- (id)venueLevel;
- (id)shortAddress;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCountryCode:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)locationAddress;
- (id)venueLabel;
- (id)initWithProtobufEncodedAsBase64String:(id)a0;
- (id)venueLabel:(long long)a0;
- (id)spokenAddress;
- (id)fullAddressWithMultiline:(BOOL)a0;
- (id)address;
- (id)fullAddressNoCurrentCountryWithMultiline:(BOOL)a0;
- (id)weatherLocationName;
- (id)initWithContactAddressDictionary:(id)a0 language:(id)a1 country:(id)a2 phoneticLocale:(id)a3;
- (id)initWithPlaceDataAddressObject:(id)a0 placeDataAddress:(id)a1 placeDataInfo:(id)a2 placeDataEntity:(id)a3 language:(id)a4 country:(id)a5 phoneticLocale:(id)a6;
- (void).cxx_destruct;
- (id)aboveDoorShortAddress;
- (unsigned long long)hash;
- (id)neighborhoodName:(BOOL)a0;
- (id)cityDisplayNameWithFallback:(BOOL)a0;
- (id)cityAndAboveWithFallback:(BOOL)a0;
- (id)phoneticLocaleIdentifier;
- (id)cityAndAboveNoCurrentCountryWithFallback:(BOOL)a0;
- (id)fullAddressWithMultiline:(BOOL)a0 relative:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)phoneticName;
- (id)spokenStructuredAddress;
- (id)venueShortAddress;
- (void)dealloc;
- (id)parkingDisplayName;
- (id)spokenName;
- (id)cnPostalAddress;
- (id)cityAndAboveWithFallback:(BOOL)a0 relative:(id)a1;

@end
