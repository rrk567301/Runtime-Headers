@class PBDataReader, NSString, GEOLocation, GEOPDMapsSuggestionsTouristInfo, NSMutableArray, GEOPDAutocompleteParameters;

@interface GEOPDMIFAutocompleteRequestParameters : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { int *list; unsigned long long count; unsigned long long size; } _clientRevisions;
    struct { int *list; unsigned long long count; unsigned long long size; } _knownClientResolvedTypes;
    GEOPDAutocompleteParameters *_autocompleteParameters;
    NSString *_deviceCountryCode;
    NSString *_deviceDisplayLanguage;
    GEOLocation *_deviceExtendedLocation;
    NSString *_deviceKeyboardLanguage;
    NSString *_deviceSpokenLanguage;
    NSMutableArray *_displayLanguages;
    NSString *_displayRegion;
    GEOPDMapsSuggestionsTouristInfo *_mapsSuggestionsTouristInfo;
    NSMutableArray *_spokenLanguages;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _dayOfWeek;
    unsigned int _hourOfDay;
    unsigned int _timeSinceMapEnteredForeground;
    struct { unsigned char has_dayOfWeek : 1; unsigned char has_hourOfDay : 1; unsigned char has_timeSinceMapEnteredForeground : 1; unsigned char read_clientRevisions : 1; unsigned char read_knownClientResolvedTypes : 1; unsigned char read_autocompleteParameters : 1; unsigned char read_deviceCountryCode : 1; unsigned char read_deviceDisplayLanguage : 1; unsigned char read_deviceExtendedLocation : 1; unsigned char read_deviceKeyboardLanguage : 1; unsigned char read_deviceSpokenLanguage : 1; unsigned char read_displayLanguages : 1; unsigned char read_displayRegion : 1; unsigned char read_mapsSuggestionsTouristInfo : 1; unsigned char read_spokenLanguages : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)initWithData:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
