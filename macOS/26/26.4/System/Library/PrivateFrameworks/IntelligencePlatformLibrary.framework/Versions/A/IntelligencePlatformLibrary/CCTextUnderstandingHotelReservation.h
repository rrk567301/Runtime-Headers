@class CCTextUnderstandingContact, NSString, NSArray;

@interface CCTextUnderstandingHotelReservation : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
}

@property (readonly, nonatomic) CCTextUnderstandingContact *hotel;
@property (readonly, nonatomic) NSString *bookingProvider;
@property (readonly, nonatomic) NSString *confirmationNumber;
@property (readonly, nonatomic) CCTextUnderstandingContact *guest;
@property (readonly, nonatomic) int roomCount;
@property (nonatomic) BOOL hasRoomCount;
@property (readonly, nonatomic) NSString *cost;
@property (readonly, nonatomic) NSString *currencyUnit;
@property (readonly, nonatomic) NSArray *roomNumbers;
@property (readonly, nonatomic) NSString *modifyReservationUrl;
@property (readonly, nonatomic) NSString *hotelCoordinates;
@property (readonly, nonatomic) NSString *hotelTimeZone;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;
+ (unsigned short)typeIdentifierForDescription:(id)a0;

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)jsonDictionary;
- (void).cxx_destruct;
- (BOOL)decodeFieldValuesFromData:(id)a0 error:(id *)a1;
- (BOOL)ensureDecodedWithError:(id *)a0;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (id)initLazyDecodedWithTrustedItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithHotel:(id)a0 bookingProvider:(id)a1 confirmationNumber:(id)a2 guest:(id)a3 roomCount:(id)a4 cost:(id)a5 currencyUnit:(id)a6 roomNumbers:(id)a7 modifyReservationUrl:(id)a8 hotelCoordinates:(id)a9 hotelTimeZone:(id)a10 error:(id *)a11;

@end
