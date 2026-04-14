@class CCTextUnderstandingLocation, CCTextUnderstandingContact, NSString, NSArray;

@interface CCTextUnderstandingTicketedTransport : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
}

@property (readonly, nonatomic) CCTextUnderstandingLocation *departureLocation;
@property (readonly, nonatomic) CCTextUnderstandingLocation *arrivalLocation;
@property (readonly, nonatomic) unsigned int category;
@property (readonly, nonatomic) CCTextUnderstandingContact *provider;
@property (readonly, nonatomic) NSString *confirmationNumber;
@property (readonly, nonatomic) NSString *bookingProvider;
@property (readonly, nonatomic) NSArray *passengers;
@property (readonly, nonatomic) NSArray *seatNumbers;
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
- (BOOL)decodeFieldValuesFromData:(id)a0 error:(id *)a1;
- (BOOL)ensureDecodedWithError:(id *)a0;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (id)initLazyDecodedWithTrustedItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithDepartureLocation:(id)a0 arrivalLocation:(id)a1 category:(unsigned int)a2 provider:(id)a3 confirmationNumber:(id)a4 bookingProvider:(id)a5 passengers:(id)a6 seatNumbers:(id)a7 duration:(id)a8 cost:(id)a9 currencyUnit:(id)a10 error:(id *)a11;

@end
