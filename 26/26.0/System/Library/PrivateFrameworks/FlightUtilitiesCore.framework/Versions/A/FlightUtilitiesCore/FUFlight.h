@class NSString, NSArray, FUAirline, NSDate, FUFlightStep;

@interface FUFlight : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) FUAirline *displayAirline;
@property (retain) NSString *queriedAirlineTitle;
@property unsigned long long displayFlightNumber;
@property (retain) FUAirline *airline;
@property unsigned long long flightNumber;
@property (retain) NSString *flightIdentifier;
@property (retain) FUAirline *operatorAirline;
@property unsigned long long operatorFlightNumber;
@property (retain) NSString *cancellationMessage;
@property (retain, nonatomic) NSArray *allLegs;
@property (retain) NSArray *legs;
@property (retain, nonatomic) NSString *identifier;
@property unsigned long long departureLegIndex;
@property unsigned long long arrivalLegIndex;
@property (retain) NSDate *expirationDate;
@property (retain) NSString *rawResponse;
@property (readonly) NSString *displayFlightCode;
@property (readonly) NSString *flightCode;
@property (readonly) NSString *operatorFlightCode;
@property (readonly) long long status;
@property (readonly) FUFlightStep *departure;
@property (readonly) FUFlightStep *arrival;
@property (readonly) double duration;

+ (void)loadFlightsWithNumber:(unsigned long long)a0 airlineCode:(id)a1 date:(id)a2 dateType:(long long)a3 completionHandler:(id /* block */)a4;
+ (id)timeFormatterForIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)lastLeg;
- (id)firstLeg;
- (id)initWithDisplayAirline:(id)a0 queriedAirlineTitle:(id)a1 displayFlightNumber:(unsigned long long)a2 airline:(id)a3 flightNumber:(unsigned long long)a4 flightIdentifier:(id)a5 operatorAirline:(id)a6 operatorFlightNumber:(unsigned long long)a7 cancellationMessage:(id)a8 allLegs:(id)a9 legs:(id)a10 identifier:(id)a11 departureLegIndex:(unsigned long long)a12 arrivalLegIndex:(unsigned long long)a13 expirationDate:(id)a14 rawResponse:(id)a15;
- (id)legsAsFlights;
- (id)relevantLeg;
- (void)setDepartureLegIndex:(unsigned long long)a0 arrivalLegIndex:(unsigned long long)a1;

@end
