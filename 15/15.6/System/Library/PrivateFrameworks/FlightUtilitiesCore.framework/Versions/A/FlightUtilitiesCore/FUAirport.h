@class NSString, CLPlacemark, NSTimeZone;

@interface FUAirport : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain) NSString *IATACode;
@property (retain) NSString *name;
@property (retain) NSString *city;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property struct CLLocationCoordinate2D { double latitude; double longitude; } location;
@property (retain) CLPlacemark *placemark;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)fetchPlacemarkWithCompletionHandler:(id /* block */)a0;

@end
