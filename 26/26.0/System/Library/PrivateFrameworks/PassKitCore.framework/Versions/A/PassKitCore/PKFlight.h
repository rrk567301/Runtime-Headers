@class NSString, PKFlightStep, NSDate;

@interface PKFlight : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *airlineCode;
@property (retain, nonatomic) NSString *airlineName;
@property (nonatomic) unsigned long long flightNumber;
@property (retain, nonatomic) NSString *operatorAirlineCode;
@property (nonatomic) unsigned long long operatorFlightNumber;
@property (retain, nonatomic) PKFlightStep *departure;
@property (retain, nonatomic) PKFlightStep *arrival;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSDate *staleDate;
@property (retain, nonatomic) NSDate *publishedDate;
@property (retain, nonatomic) NSDate *lastUpdatedDate;
@property (nonatomic) unsigned long long dataSource;
@property (readonly, nonatomic) NSString *shortDescription;
@property (readonly, nonatomic) double progress;

- (BOOL)isValid;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAirlineCode:(id)a0 airlineName:(id)a1 flightNumber:(unsigned long long)a2 operatorAirlineCode:(id)a3 operatorFlightNumber:(unsigned long long)a4 departure:(id)a5 arrival:(id)a6 state:(unsigned long long)a7 publishedDate:(id)a8 staleDate:(id)a9 dataSource:(unsigned long long)a10;
- (id)initWithMockFlightDictionary:(id)a0;

@end
