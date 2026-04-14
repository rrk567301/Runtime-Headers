@class NSString, NSData;

@interface SGStorageLocation : NSObject <NSCopying, NSSecureCoding, SGEventLocationForGeocode>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int locationType;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *address;
@property (readonly, nonatomic) NSString *airportCode;
@property (readonly, nonatomic) double latitude;
@property (readonly, nonatomic) double longitude;
@property (readonly, nonatomic) double accuracy;
@property (readonly, nonatomic) double quality;
@property (readonly, nonatomic) NSData *handle;
@property (readonly, nonatomic) NSString *country;
@property (readonly, nonatomic) NSString *state;
@property (readonly, nonatomic) NSString *city;
@property (readonly, nonatomic) NSString *thoroughfare;
@property (readonly, nonatomic) NSString *subThoroughfare;
@property (readonly, nonatomic) NSString *postalCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (double)geocodeAccuracy;
- (double)geocodeLatitude;
- (id)geocodeAddress;
- (id)geocodeAirportCode;
- (id)geocodeCity;
- (id)geocodeCountry;
- (id)geocodeHandle;
- (BOOL)geocodeIsEnd;
- (BOOL)geocodeIsStart;
- (id)geocodeLabel;
- (double)geocodeLongitude;
- (id)geocodePostalCode;
- (id)geocodeState;
- (id)geocodeSubThoroughfare;
- (id)geocodeThoroughfare;
- (id)geocodedLocationWithLabel:(id)a0 address:(id)a1 latitude:(double)a2 longitude:(double)a3 accuracy:(double)a4 handle:(id)a5 country:(id)a6 state:(id)a7 city:(id)a8 thoroughfare:(id)a9 subThoroughfare:(id)a10 postalCode:(id)a11;
- (id)geocodedLocationWithLatitude:(double)a0 longitude:(double)a1 accuracy:(double)a2 handle:(id)a3 country:(id)a4 state:(id)a5 city:(id)a6 thoroughfare:(id)a7 subThoroughfare:(id)a8 postalCode:(id)a9;
- (id)convertToLocationWithId:(id)a0 origin:(id)a1;
- (id)initWithType:(int)a0 label:(id)a1 address:(id)a2 airportCode:(id)a3 accuracy:(double)a4 quality:(double)a5;
- (id)initWithType:(int)a0 label:(id)a1 address:(id)a2 airportCode:(id)a3 latitude:(double)a4 longitude:(double)a5 accuracy:(double)a6 quality:(double)a7 handle:(id)a8;
- (id)initWithType:(int)a0 label:(id)a1 address:(id)a2 airportCode:(id)a3 latitude:(double)a4 longitude:(double)a5 accuracy:(double)a6 quality:(double)a7 handle:(id)a8 country:(id)a9 state:(id)a10 city:(id)a11 thoroughfare:(id)a12 subThoroughfare:(id)a13 postalCode:(id)a14;
- (id)initWithType:(int)a0 label:(id)a1 airportCode:(id)a2 latitude:(double)a3 longitude:(double)a4 accuracy:(double)a5 quality:(double)a6;
- (BOOL)isEqualToStorageLocation:(id)a0;

@end
