@class FUAirline;

@interface FUFlightCodeShare : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain) FUAirline *airline;
@property unsigned long long flightNumber;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
