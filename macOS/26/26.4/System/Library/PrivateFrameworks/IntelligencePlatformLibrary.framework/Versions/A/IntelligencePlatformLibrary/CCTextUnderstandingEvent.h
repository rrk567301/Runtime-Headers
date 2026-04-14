@class CCTextUnderstandingCarRental, CCTextUnderstandingShow, CCTextUnderstandingAppointment, CCTextUnderstandingParty, NSString, CCTextUnderstandingRestaurantReservation, CCTextUnderstandingHotelReservation, CCTextUnderstandingTicketedTransport, NSDate, CCTextUnderstandingGenericEvent, CCTextUnderstandingFlight;

@interface CCTextUnderstandingEvent : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
    BOOL _hasRaw_startTime;
    double _raw_startTime;
    BOOL _hasRaw_endTime;
    double _raw_endTime;
    BOOL _hasRaw_extractedStartTimeComponents;
    double _raw_extractedStartTimeComponents;
    BOOL _hasRaw_extractedEndTimeComponents;
    double _raw_extractedEndTimeComponents;
}

@property (readonly, nonatomic) CCTextUnderstandingFlight *flight;
@property (readonly, nonatomic) CCTextUnderstandingHotelReservation *hotelReservation;
@property (readonly, nonatomic) CCTextUnderstandingRestaurantReservation *restaurantReservation;
@property (readonly, nonatomic) CCTextUnderstandingTicketedTransport *ticketedTransport;
@property (readonly, nonatomic) CCTextUnderstandingShow *show;
@property (readonly, nonatomic) CCTextUnderstandingCarRental *carRental;
@property (readonly, nonatomic) CCTextUnderstandingAppointment *appointment;
@property (readonly, nonatomic) CCTextUnderstandingParty *party;
@property (readonly, nonatomic) CCTextUnderstandingGenericEvent *genericEvent;
@property (readonly, nonatomic) unsigned int status;
@property (readonly, nonatomic) NSString *url;
@property (readonly, nonatomic) unsigned int algorithm;
@property (readonly, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) NSDate *endTime;
@property (readonly, nonatomic) NSDate *extractedStartTimeComponents;
@property (readonly, nonatomic) NSDate *extractedEndTimeComponents;
@property (readonly, nonatomic) BOOL isAllDay;
@property (nonatomic) BOOL hasIsAllDay;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *notes;
@property (readonly, nonatomic) unsigned int categoryType;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;
+ (unsigned short)typeIdentifierForDescription:(id)a0;

- (id)startTime;
- (id)endTime;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)jsonDictionary;
- (void).cxx_destruct;
- (BOOL)decodeFieldValuesFromData:(id)a0 error:(id *)a1;
- (BOOL)ensureDecodedWithError:(id *)a0;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (id)initLazyDecodedWithTrustedItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithItemMessageData:(id)a0 error:(id *)a1;
- (id)extractedEndTimeComponents;
- (id)extractedStartTimeComponents;
- (id)initWithCategory:(id)a0 categoryType:(unsigned int)a1 status:(unsigned int)a2 url:(id)a3 algorithm:(unsigned int)a4 startTime:(id)a5 endTime:(id)a6 extractedStartTimeComponents:(id)a7 extractedEndTimeComponents:(id)a8 isAllDay:(id)a9 title:(id)a10 notes:(id)a11 error:(id *)a12;

@end
