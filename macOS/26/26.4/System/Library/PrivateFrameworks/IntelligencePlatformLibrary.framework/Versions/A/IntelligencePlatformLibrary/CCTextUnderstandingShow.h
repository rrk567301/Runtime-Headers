@class NSString, CCTextUnderstandingContact, NSArray;

@interface CCTextUnderstandingShow : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
}

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) CCTextUnderstandingContact *venue;
@property (readonly, nonatomic) unsigned int category;
@property (readonly, nonatomic) NSString *bookingProvider;
@property (readonly, nonatomic) NSString *confirmationNumber;
@property (readonly, nonatomic) CCTextUnderstandingContact *customer;
@property (readonly, nonatomic) NSArray *seatNumbers;
@property (readonly, nonatomic) NSString *ticketType;
@property (readonly, nonatomic) NSString *cost;
@property (readonly, nonatomic) NSString *currencyUnit;
@property (readonly, nonatomic) NSString *venueCoordinates;
@property (readonly, nonatomic) NSString *venueTimeZone;

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
- (id)initWithTitle:(id)a0 venue:(id)a1 category:(unsigned int)a2 bookingProvider:(id)a3 confirmationNumber:(id)a4 customer:(id)a5 seatNumbers:(id)a6 ticketType:(id)a7 cost:(id)a8 currencyUnit:(id)a9 venueCoordinates:(id)a10 venueTimeZone:(id)a11 error:(id *)a12;

@end
