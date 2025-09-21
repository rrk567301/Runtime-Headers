@class NSData, NSString;

@interface PHAssetPhotosOneUpProperties : PHAssetPropertySet

@property (readonly, nonatomic) char reverseLocationDataIsValid;
@property (readonly, nonatomic) NSData *reverseLocationData;
@property (readonly, nonatomic) char shiftedLocationIsValid;
@property (readonly, nonatomic) NSString *addressString;
@property (readonly, nonatomic) unsigned long long variationSuggestionStates;
@property (readonly, nonatomic) short viewPresentation;

+ (id)propertiesToFetch;
+ (id)propertySetName;

- (void).cxx_destruct;
- (id)_locationInfo;
- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(char)a2;
- (id)localizedGeoDescriptionIsHome:(char *)a0;
- (id)placeNamesForLocalizedDetailedDescriptionIsHome:(char *)a0;

@end
