@class NSString, _GEOAddressObject;

@interface GEOAddressObject : NSObject <GEOAddressObjectProtocol> {
    _GEOAddressObject *_pimpl;
    int *_knownAccuracy;
}

@property (readonly, nonatomic) NSString *displayLanguage;
@property (readonly, nonatomic) BOOL hasKnownAccuracy;
@property (readonly, nonatomic) int knownAccuracy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)addressObjectForPlaceData:(id)a0;
+ (id)addressObjectWithPlaceDataAddressObject:(id)a0 placeDataAddress:(id)a1 placeDataInfo:(id)a2 placeDataEntity:(id)a3;
+ (BOOL)isLoggingDebug;
+ (BOOL)isMarkingMMStrings;
+ (void)setLoggingDebug:(BOOL)a0;
+ (id)libraryVersion;
+ (void)markMMStrings:(BOOL)a0;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)name;
- (void).cxx_destruct;
- (id)address;
- (id)addressDictionary;
- (id)shortAddress;
- (id)weatherDisplayName;
- (id)countryName;
- (id)spokenName;
- (id)spokenAddress;
- (id)phoneticName;
- (id)phoneticLocaleIdentifier;
- (id)spokenAddressForLocale:(id)a0;
- (id)venueShortAddress;
- (id)phoneticAddress;
- (id)spokenStructuredAddress;
- (id)cityDisplayNameWithFallback:(BOOL)a0;
- (id)initWithCurrentCountry;
- (id)fullAddressWithMultiline:(BOOL)a0 relative:(id)a1;
- (id)venueLabel:(long long)a0;
- (id)initWithPlaceDataAddressObject:(id)a0 placeDataAddress:(id)a1 placeDataInfo:(id)a2 placeDataEntity:(id)a3 language:(id)a4 country:(id)a5 phoneticLocale:(id)a6;
- (id)initWithContactAddressDictionary:(id)a0 langauge:(id)a1 country:(id)a2 phoneticLocale:(id)a3;
- (id)initWithCNPostalAddress:(id)a0 langauge:(id)a1 country:(id)a2 phoneticLocale:(id)a3;
- (id)cnPostalAddress;
- (id)fullAddressWithMultiline:(BOOL)a0;
- (id)fullAddressNoCurrentCountryWithMultiline:(BOOL)a0;
- (id)weatherLocationName;
- (id)parkingDisplayName;
- (id)venueLabel;
- (id)venueLevel;
- (id)locationAddress;
- (id)titlesForMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (id)rawBytes;

@end
