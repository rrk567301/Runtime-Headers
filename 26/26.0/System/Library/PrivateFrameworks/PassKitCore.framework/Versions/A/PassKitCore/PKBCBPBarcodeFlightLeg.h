@class NSString;

@interface PKBCBPBarcodeFlightLeg : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *passengerNameRecordNumber;
@property (readonly, copy, nonatomic) NSString *departureAirportCode;
@property (readonly, copy, nonatomic) NSString *destinationAirportCode;
@property (readonly, copy, nonatomic) NSString *airlineCode;
@property (readonly, nonatomic) unsigned long long flightNumber;
@property (readonly, nonatomic) unsigned long long dayOfYear;
@property (readonly, copy, nonatomic) NSString *seatNumber;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPassengerNameRecordNumber:(id)a0 departureAirportCode:(id)a1 destinationAirportCode:(id)a2 airlineCode:(id)a3 flightNumber:(unsigned long long)a4 dayOfYear:(unsigned long long)a5 seatNumber:(id)a6;

@end
