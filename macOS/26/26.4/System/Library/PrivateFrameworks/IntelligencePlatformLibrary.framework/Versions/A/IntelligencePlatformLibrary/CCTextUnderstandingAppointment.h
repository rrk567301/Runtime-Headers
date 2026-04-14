@class NSString, CCTextUnderstandingContact;

@interface CCTextUnderstandingAppointment : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
}

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) CCTextUnderstandingContact *provider;
@property (readonly, nonatomic) CCTextUnderstandingContact *customer;
@property (readonly, nonatomic) CCTextUnderstandingContact *agent;
@property (readonly, nonatomic) NSString *duration;
@property (readonly, nonatomic) NSString *cost;
@property (readonly, nonatomic) NSString *currencyUnit;
@property (readonly, nonatomic) NSString *confirmationNumber;
@property (readonly, nonatomic) NSString *providerCoordinates;
@property (readonly, nonatomic) NSString *providerTimeZone;

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
- (id)initWithTitle:(id)a0 provider:(id)a1 customer:(id)a2 agent:(id)a3 duration:(id)a4 cost:(id)a5 currencyUnit:(id)a6 confirmationNumber:(id)a7 providerCoordinates:(id)a8 providerTimeZone:(id)a9 error:(id *)a10;

@end
