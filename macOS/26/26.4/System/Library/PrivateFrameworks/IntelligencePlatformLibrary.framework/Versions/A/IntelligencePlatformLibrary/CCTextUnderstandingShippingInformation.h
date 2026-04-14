@class CCTextUnderstandingContact, NSString, NSDate;

@interface CCTextUnderstandingShippingInformation : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
    BOOL _hasRaw_shippingDate;
    double _raw_shippingDate;
    BOOL _hasRaw_estimatedDeliveryStartDate;
    double _raw_estimatedDeliveryStartDate;
    BOOL _hasRaw_estimatedDeliveryEndDate;
    double _raw_estimatedDeliveryEndDate;
    BOOL _hasRaw_deliveryDate;
    double _raw_deliveryDate;
}

@property (readonly, nonatomic) CCTextUnderstandingContact *recipient;
@property (readonly, nonatomic) unsigned int status;
@property (readonly, nonatomic) NSString *shippingMethod;
@property (readonly, nonatomic) NSString *carrierName;
@property (readonly, nonatomic) NSString *trackingNumber;
@property (readonly, nonatomic) NSDate *shippingDate;
@property (readonly, nonatomic) NSDate *estimatedDeliveryStartDate;
@property (readonly, nonatomic) NSDate *estimatedDeliveryEndDate;
@property (readonly, nonatomic) NSDate *deliveryDate;
@property (readonly, nonatomic) unsigned int emailType;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;
+ (unsigned short)typeIdentifierForDescription:(id)a0;

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)jsonDictionary;
- (void).cxx_destruct;
- (id)deliveryDate;
- (id)estimatedDeliveryEndDate;
- (id)estimatedDeliveryStartDate;
- (id)shippingDate;
- (BOOL)decodeFieldValuesFromData:(id)a0 error:(id *)a1;
- (BOOL)ensureDecodedWithError:(id *)a0;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (id)initLazyDecodedWithTrustedItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithRecipient:(id)a0 status:(unsigned int)a1 shippingMethod:(id)a2 carrierName:(id)a3 trackingNumber:(id)a4 shippingDate:(id)a5 estimatedDeliveryStartDate:(id)a6 estimatedDeliveryEndDate:(id)a7 deliveryDate:(id)a8 emailType:(unsigned int)a9 error:(id *)a10;

@end
