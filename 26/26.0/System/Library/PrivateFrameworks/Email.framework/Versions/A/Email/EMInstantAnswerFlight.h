@class NSTimeZone, NSString, NSURL, NSDateComponents;

@interface EMInstantAnswerFlight : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *checkInUrl;
@property (readonly, nonatomic) NSDateComponents *departureDateComponents;
@property (readonly, nonatomic) NSDateComponents *arrivalDateComponents;
@property (readonly, nonatomic) NSTimeZone *departureTimeZone;
@property (readonly, nonatomic) NSTimeZone *arrivalTimeZone;
@property (readonly, nonatomic) NSString *arrivalAirportCode;
@property (readonly, nonatomic) NSString *departureAirportCode;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCSInstantAnswers:(id)a0;

@end
