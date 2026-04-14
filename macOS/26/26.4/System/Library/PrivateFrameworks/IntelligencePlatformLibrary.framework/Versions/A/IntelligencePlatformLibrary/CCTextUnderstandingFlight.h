@class CCTextUnderstandingLocation, NSString, NSArray, NSDate;

@interface CCTextUnderstandingFlight : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
    BOOL _hasRaw_boardingTime;
    double _raw_boardingTime;
}

@property (readonly, nonatomic) CCTextUnderstandingLocation *departureAirport;
@property (readonly, nonatomic) CCTextUnderstandingLocation *arrivalAirport;
@property (readonly, nonatomic) NSString *carrierName;
@property (readonly, nonatomic) NSString *carrierCode;
@property (readonly, nonatomic) NSString *flightNumber;
@property (readonly, nonatomic) NSString *flightDesignator;
@property (readonly, nonatomic) NSString *confirmationNumber;
@property (readonly, nonatomic) NSString *bookingProvider;
@property (readonly, nonatomic) NSArray *passengers;
@property (readonly, nonatomic) NSArray *seatNumbers;
@property (readonly, nonatomic) NSDate *boardingTime;
@property (readonly, nonatomic) NSString *checkInUrl;
@property (readonly, nonatomic) NSString *duration;
@property (readonly, nonatomic) NSString *cost;
@property (readonly, nonatomic) NSString *currencyUnit;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;
+ (unsigned short)typeIdentifierForDescription:(id)a0;

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)jsonDictionary;
- (void).cxx_destruct;
- (id)boardingTime;
- (BOOL)decodeFieldValuesFromData:(id)a0 error:(id *)a1;
- (BOOL)ensureDecodedWithError:(id *)a0;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (id)initLazyDecodedWithTrustedItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithDepartureAirport:(id)a0 arrivalAirport:(id)a1 carrierName:(id)a2 carrierCode:(id)a3 flightNumber:(id)a4 flightDesignator:(id)a5 confirmationNumber:(id)a6 bookingProvider:(id)a7 passengers:(id)a8 seatNumbers:(id)a9 boardingTime:(id)a10 checkInUrl:(id)a11 duration:(id)a12 cost:(id)a13 currencyUnit:(id)a14 error:(id *)a15;

@end
