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
+ (BOOL)isMarkingMMStrings;
+ (id)addressObjectForPlaceData:(id)a0;
+ (void)markMMStrings:(BOOL)a0;
+ (id)addressObjectWithPlaceDataAddressObject:(id)a0 placeDataAddress:(id)a1 placeDataInfo:(id)a2 placeDataEntity:(id)a3;
+ (void)setLoggingDebug:(BOOL)a0;
+ (BOOL)isLoggingDebug;

- (id)addressDictionary;
- (id)venueLabel;
- (id)initWithCountryCode:(id)a0;
- (id)weatherDisplayName;
- (id)spokenName;
- (id)initWithCoder:(id)a0;
- (id)weatherLocationName;
- (id)spokenAddressForLocale:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)titlesForMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (id)initWithCurrentCountry;
- (id)address;
- (id)spokenStructuredAddress;
- (id)phoneticLocaleIdentifier;
- (id)cityAndAboveNoCurrentCountryWithFallback:(BOOL)a0;
- (void).cxx_destruct;
- (id)aboveDoorShortAddress;
- (id)initWithContactAddressDictionary:(id)a0 language:(id)a1 country:(id)a2 phoneticLocale:(id)a3;
- (id)locationAddress;
- (id)fullAddressWithMultiline:(BOOL)a0;
- (id)shortAddress;
- (id)name;
- (id)cityAndAboveNoCountryWithFallback:(BOOL)a0;
- (id)rawBytes;
- (id)venueLevel;
- (id)countryName;
- (id)initWithCNPostalAddress:(id)a0 language:(id)a1 country:(id)a2 phoneticLocale:(id)a3;
- (id)initWithPlaceDataAddressObject:(id)a0 placeDataAddress:(id)a1 placeDataInfo:(id)a2 placeDataEntity:(id)a3 language:(id)a4 country:(id)a5 phoneticLocale:(id)a6;
- (id)fullAddressWithMultiline:(BOOL)a0 relative:(id)a1;
- (id)venueLabel:(long long)a0;
- (id)fullAddressNoCurrentCountryWithMultiline:(BOOL)a0;
- (id)spokenAddress;
- (id)cnPostalAddress;
- (id)neighborhoodName:(BOOL)a0;
- (id)parkingDisplayName;
- (id)cityDisplayNameWithFallback:(BOOL)a0;
- (id)phoneticName;
- (id)venueShortAddress;
- (id)cityAndAboveWithFallback:(BOOL)a0;
- (id)initWithProtobufEncodedAsBase64String:(id)a0;
- (id)cityAndAboveWithFallback:(BOOL)a0 relative:(id)a1;
- (void)dealloc;
- (id)phoneticAddress;

@end
