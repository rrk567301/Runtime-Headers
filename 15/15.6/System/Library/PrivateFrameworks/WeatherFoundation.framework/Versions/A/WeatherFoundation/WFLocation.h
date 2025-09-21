@class NSTimeZone, NSString, CLLocation, NSDate;

@interface WFLocation : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *wf_weatherChannelGeocodeValue;
@property long long archiveVersion;
@property (copy, nonatomic) CLLocation *geoLocation;
@property (copy, nonatomic) NSString *locationID;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *weatherDisplayName;
@property (copy, nonatomic) NSString *weatherLocationName;
@property (copy, nonatomic) NSString *city;
@property (copy, nonatomic) NSString *county;
@property (copy, nonatomic) NSString *state;
@property (copy, nonatomic) NSString *stateAbbreviation;
@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSString *countryAbbreviation;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (retain, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) char shouldQueryForAirQualityData;
@property (readonly, nonatomic) char needsGeocoding;

+ (id)locationsByFilteringDuplicates:(id)a0;
+ (long long)currentArchiveVersion;
+ (id)knownKeys;
+ (id)locationsByConsolidatingDuplicates:(id)a0 originalOrder:(id)a1;
+ (id)locationsByConsolidatingDuplicatesInBucket:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPlacemark:(id)a0;
- (id)summary;
- (id)initWithMapItem:(id)a0;
- (id)sunriseForDate:(id)a0;
- (id)_sunAlmanacForDate:(id)a0;
- (id)cloudDictionaryRepresentation;
- (id)initWithCloudDictionaryRepresentation:(id)a0;
- (id)initWithLocalDataRepresentation:(id)a0;
- (id)initWithMapItem:(id)a0 isCurrentLocation:(char)a1;
- (id)initWithSearchResponse:(id)a0;
- (char)isDay;
- (char)isDayForDate:(id)a0;
- (id)localDataRepresentation;
- (id)summaryThatIsCompact:(char)a0;
- (void)sunrise:(id *)a0 andSunset:(id *)a1 forDate:(id)a2;
- (id)sunsetForDate:(id)a0;

@end
