@class NSString, NSArray, GEOLocation, GEOPDMIFAutocompleteRequestParameters, GEOPDAutocompleteParameters;

@interface GEOMIFAutocompleteRequestParameters : NSObject {
    GEOPDMIFAutocompleteRequestParameters *requestParamaters;
    GEOPDAutocompleteParameters *autocompleteParameters;
}

@property (readonly, nonatomic) NSString *deviceCountryCode;
@property (readonly, nonatomic) NSArray *displayLanguages;
@property (readonly, nonatomic) NSArray *spokenLanguages;
@property (readonly, nonatomic) NSString *deviceDisplayLanguage;
@property (readonly, nonatomic) NSString *deviceKeyboardLanguage;
@property (readonly, nonatomic) NSString *deviceSpokenLanguage;
@property (readonly, nonatomic) unsigned int timeSinceMapEnteredForeground;
@property (readonly, nonatomic) unsigned int hourOfDay;
@property (readonly, nonatomic) unsigned int dayOfWeek;
@property (readonly, nonatomic) GEOLocation *deviceExtendedLocation;
@property (readonly, nonatomic) double isTourist;
@property (readonly, nonatomic) NSString *displayRegion;

- (id)initWithTraits:(id)a0;
- (void).cxx_destruct;
- (void)configureWithAutocompleteParameters:(id)a0;
- (id)pdAutocompleteParameters;

@end
