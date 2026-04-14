@class NSString, NSTimeZone;

@interface PKAirport : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *code;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *city;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } location;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)asDictionary;
- (BOOL)isValid;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithAirportCode:(id)a0 name:(id)a1 city:(id)a2 timeZone:(id)a3 location:(struct CLLocationCoordinate2D { double x0; double x1; })a4;
- (id)initWithMockAirportDictionary:(id)a0;

@end
