@class SKGLocation, NSArray, NSMutableDictionary, NSString, DDScannerServiceConfiguration, NSCharacterSet;

@interface SKGDataDetector : NSObject {
    DDScannerServiceConfiguration *_config;
    NSCharacterSet *_punctuation;
    struct _SIGeoIndex { } *_geoIndex;
    struct __DDScanner { } *_geoScanner;
    NSArray *_territories;
    NSMutableDictionary *_pirClientForUseCase;
    NSString *_currentRegion;
    SKGLocation *_currentRegionLocation;
    BOOL _forceDataDetection;
}

@property (nonatomic) BOOL forceDataDetection;

+ (id)sharedDetector;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)_addressFromResult:(id)a0;
- (id)_callPIRWithQuery:(id)a0 hitError:(BOOL *)a1 useCase:(id)a2;
- (id)_convertGeoListToLocations:(id)a0;
- (id)_currencyFromResult:(id)a0;
- (id)_dateFromResult:(id)a0 referenceDate:(id)a1 referenceTimezone:(id)a2;
- (id)_emailAddressFromResult:(id)a0;
- (id)_flightFromResult:(id)a0;
- (BOOL)_isPirInitialized;
- (id)_linkFromResult:(id)a0;
- (id)_lookupFromLocalCacheWithString:(id)a0 locale:(id)a1;
- (id)_phoneNumberDigitsFromResult:(id)a0;
- (id)_retrieveLocationFromLocalCache:(id)a0 locale:(id)a1;
- (id)_retrieveLocationFromPIR:(id)a0 locale:(id)a1;
- (BOOL)_shouldFilterLocation:(id)a0 byParentLocations:(id)a1;
- (id)_trackingNumberFromResult:(id)a0;
- (BOOL)enumerateAirportCodesInStringUsingGeoScanner:(id)a0 entityBlock:(id /* block */)a1;
- (BOOL)enumerateDetectedDataInString:(id)a0 locale:(id)a1 referenceDate:(id)a2 referenceTimezone:(id)a3 entityBlock:(id /* block */)a4 rangeBlock:(id /* block */)a5;
- (BOOL)enumerateDetectedDataInString:(id)a0 locale:(id)a1 referenceDate:(id)a2 referenceTimezone:(id)a3 entityCategories:(id)a4 entityBlock:(id /* block */)a5 rangeBlock:(id /* block */)a6;
- (BOOL)enumerateDetectedLocationsInString:(id)a0 locale:(id)a1 entityBlock:(id /* block */)a2 rangeBlock:(id /* block */)a3;
- (BOOL)enumerateLocationStrings:(id)a0 locale:(id)a1 entityBlock:(id /* block */)a2;
- (BOOL)enumerateLocationsInString:(id)a0 locale:(id)a1 latitude:(double)a2 longitude:(double)a3 entityBlock:(id /* block */)a4;
- (BOOL)loadDetector;
- (id)locationFromAddress:(id)a0 locale:(id)a1;
- (unsigned int)typeOfTerritory:(id)a0;

@end
