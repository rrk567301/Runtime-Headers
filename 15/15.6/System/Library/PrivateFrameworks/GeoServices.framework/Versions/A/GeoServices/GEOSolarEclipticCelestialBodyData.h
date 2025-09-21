@interface GEOSolarEclipticCelestialBodyData : NSObject

@property (readonly, nonatomic) double latitude;
@property (readonly, nonatomic) double longitude;

- (id)initWithDate:(id)a0 body:(long long)a1;
- (id)initWithDate:(id)a0 body:(long long)a1 useHighPrecision:(char)a2;
- (id)initWithJulianDay:(double)a0 body:(long long)a1 useHighPrecision:(char)a2;

@end
