@class CCTextUnderstandingContact, NSString;

@interface CCTextUnderstandingRestaurantReservation : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
}

@property (readonly, nonatomic) CCTextUnderstandingContact *restaurant;
@property (readonly, nonatomic) NSString *bookingProvider;
@property (readonly, nonatomic) NSString *confirmationNumber;
@property (readonly, nonatomic) CCTextUnderstandingContact *customer;
@property (readonly, nonatomic) int partySize;
@property (nonatomic) BOOL hasPartySize;
@property (readonly, nonatomic) NSString *restaurantCoordinates;
@property (readonly, nonatomic) NSString *restaurantTimeZone;

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
- (id)initWithRestaurant:(id)a0 bookingProvider:(id)a1 confirmationNumber:(id)a2 customer:(id)a3 partySize:(id)a4 restaurantCoordinates:(id)a5 restaurantTimeZone:(id)a6 error:(id *)a7;

@end
