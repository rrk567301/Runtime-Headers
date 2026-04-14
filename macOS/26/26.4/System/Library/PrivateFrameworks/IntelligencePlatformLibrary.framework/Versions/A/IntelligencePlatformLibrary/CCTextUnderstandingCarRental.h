@class CCTextUnderstandingLocation, CCTextUnderstandingContact, NSString;

@interface CCTextUnderstandingCarRental : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
}

@property (readonly, nonatomic) CCTextUnderstandingLocation *pickupLocation;
@property (readonly, nonatomic) CCTextUnderstandingLocation *dropoffLocation;
@property (readonly, nonatomic) CCTextUnderstandingContact *provider;
@property (readonly, nonatomic) NSString *confirmationNumber;
@property (readonly, nonatomic) NSString *bookingProvider;
@property (readonly, nonatomic) CCTextUnderstandingContact *customer;
@property (readonly, nonatomic) NSString *vehicleName;
@property (readonly, nonatomic) NSString *cost;
@property (readonly, nonatomic) NSString *currencyUnit;
@property (readonly, nonatomic) NSString *pickupPhoneNumber;
@property (readonly, nonatomic) NSString *dropoffPhoneNumber;
@property (readonly, nonatomic) unsigned int category;

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
- (id)initWithPickupLocation:(id)a0 dropoffLocation:(id)a1 provider:(id)a2 confirmationNumber:(id)a3 bookingProvider:(id)a4 customer:(id)a5 vehicleName:(id)a6 cost:(id)a7 currencyUnit:(id)a8 pickupPhoneNumber:(id)a9 dropoffPhoneNumber:(id)a10 category:(unsigned int)a11 error:(id *)a12;

@end
