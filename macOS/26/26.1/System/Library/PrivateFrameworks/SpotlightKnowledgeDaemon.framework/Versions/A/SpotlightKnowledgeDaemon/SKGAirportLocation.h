@class NSString;

@interface SKGAirportLocation : SKGEntity

@property (copy, nonatomic) NSString *airportCode;
@property (copy, nonatomic) NSString *airportLocality;
@property (copy, nonatomic) NSString *airportRegion;
@property (copy, nonatomic) NSString *airportCountry;
@property (nonatomic) BOOL isDepartureAirport;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
