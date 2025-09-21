@class NSString, CLPlacemark, NSTimeZone;

@interface FUAirport : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *IATACode;
@property (retain) NSString *name;
@property (retain) NSString *city;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property struct CLLocationCoordinate2D { double latitude; double longitude; } location;
@property (retain) CLPlacemark *placemark;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)fetchPlacemarkWithCompletionHandler:(id /* block */)a0;

@end
