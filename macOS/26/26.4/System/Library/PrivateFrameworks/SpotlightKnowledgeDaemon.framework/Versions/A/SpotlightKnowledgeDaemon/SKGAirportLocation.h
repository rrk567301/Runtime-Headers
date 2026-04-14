@class NSString;

@interface SKGAirportLocation : SKGEntity

@property (copy, nonatomic) NSString *airportCode;
@property (copy, nonatomic) NSString *airportLocality;
@property (copy, nonatomic) NSString *airportRegion;
@property (copy, nonatomic) NSString *airportCountry;
@property (nonatomic) BOOL isDepartureAirport;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;

@end
