@interface GEOEquatorialCelestialBodyData : NSObject

@property (readonly, nonatomic) double rightAscension;
@property (readonly, nonatomic) double declination;

- (id)initWithDate:(id)a0 body:(long long)a1;
- (id)initWithDate:(id)a0 body:(long long)a1 useHighPrecision:(char)a2;
- (id)initWithJulianDay:(double)a0 body:(long long)a1;
- (id)initWithJulianDay:(double)a0 body:(long long)a1 useHighPrecision:(char)a2;

@end
