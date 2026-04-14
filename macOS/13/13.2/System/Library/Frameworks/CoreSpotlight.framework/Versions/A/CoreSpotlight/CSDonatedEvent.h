@class NSString, NSMutableDictionary, NSArray, NSDictionary;

@interface CSDonatedEvent : NSObject <NSCopying>

@property (retain) NSMutableDictionary *mutableAttributes;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSArray *docIDs;
@property (copy, nonatomic) NSDictionary *additionalInfo;
@property (nonatomic) BOOL fromAllowListedSender;
@property (readonly) NSDictionary *attributes;

+ (id)eventFromData:(id)a0;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)data;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(id)a0;
- (id)trackingNumber;
- (id)initWithAttributes:(id)a0;
- (void)setFlightNumber:(id)a0;
- (id)flightNumber;
- (void)setFlightCarrier:(id)a0;
- (id)flightCarrier;
- (void)setFlightStatus:(id)a0;
- (id)flightStatus;
- (void)setCheckInUrl:(id)a0;
- (id)checkInUrl;
- (void)setBookingInfoUrl:(id)a0;
- (id)bookingInfoUrl;
- (void)setArrivalAirportCode:(id)a0;
- (id)arrivalAirportCode;
- (void)setDepartureAirportCode:(id)a0;
- (id)departureAirportCode;
- (void)setArrivalAirportName:(id)a0;
- (id)arrivalAirportName;
- (void)setDepartureAirportName:(id)a0;
- (id)departureAirportName;
- (void)setArrivalTerminal:(id)a0;
- (id)arrivalTerminal;
- (void)setDepartureTerminal:(id)a0;
- (id)departureTerminal;
- (void)setArrivalDateTime:(id)a0;
- (id)arrivalDateTime;
- (void)setDepartureDateTime:(id)a0;
- (id)departureDateTime;
- (void)setConfirmationNumber:(id)a0;
- (id)confirmationNumber;
- (void)setTrackingUrl:(id)a0;
- (id)trackingUrl;
- (void)setTrackingNumber:(id)a0;
- (void)setOrderDateTime:(id)a0;
- (id)orderDateTime;
- (void)setDeliveryDateTime:(id)a0;
- (id)deliveryDateTime;
- (void)setCourierName:(id)a0;
- (id)courierName;
- (void)setMerchantName:(id)a0;
- (id)merchantName;
- (void)setSenderIsCourier:(BOOL)a0;
- (BOOL)senderIsCourier;

@end
