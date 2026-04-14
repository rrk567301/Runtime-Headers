@class CCAppIntentsExtractedEntityTicketedShow, CCAppIntentsExtractedEntityTransitCard, CCAppIntentsExtractedEntityAppointment, CCAppIntentsExtractedEntityMedicalInsuranceCard, CCAppIntentsExtractedEntityFlightReservation, CCAppIntentsExtractedEntityHotelReservation, CCAppIntentsExtractedEntityRestaurantReservation, CCAppIntentsExtractedEntityParty, CCAppIntentsExtractedEntityPersonalId, CCAppIntentsExtractedEntityBusinessMembershipCard, CCAppIntentsExtractedEntityRentalCarReservation, CCAppIntentsExtractedEntityTicketedTransportation;

@interface CCAppIntentsExtractedEntityContent : CCItemMessage <CCItemContent, CCItemFieldEnumerable, CCJSONDescribing> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
}

@property (readonly, nonatomic) CCAppIntentsExtractedEntityFlightReservation *flightReservation;
@property (readonly, nonatomic) CCAppIntentsExtractedEntityHotelReservation *hotelReservation;
@property (readonly, nonatomic) CCAppIntentsExtractedEntityRestaurantReservation *restaurantReservation;
@property (readonly, nonatomic) CCAppIntentsExtractedEntityRentalCarReservation *rentalCarReservation;
@property (readonly, nonatomic) CCAppIntentsExtractedEntityTicketedTransportation *ticketedTransportation;
@property (readonly, nonatomic) CCAppIntentsExtractedEntityTicketedShow *ticketedShow;
@property (readonly, nonatomic) CCAppIntentsExtractedEntityAppointment *appointment;
@property (readonly, nonatomic) CCAppIntentsExtractedEntityParty *party;
@property (readonly, nonatomic) CCAppIntentsExtractedEntityPersonalId *personalId;
@property (readonly, nonatomic) CCAppIntentsExtractedEntityMedicalInsuranceCard *medicalInsuranceCard;
@property (readonly, nonatomic) CCAppIntentsExtractedEntityBusinessMembershipCard *businessMembershipCard;
@property (readonly, nonatomic) CCAppIntentsExtractedEntityTransitCard *transitCard;
@property (readonly, nonatomic) unsigned int entityType;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;
+ (unsigned short)typeIdentifierForDescription:(id)a0;

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)jsonDictionary;
- (void).cxx_destruct;
- (id)initWithEntity:(id)a0 entityType:(unsigned int)a1 error:(id *)a2;
- (BOOL)decodeFieldValuesFromData:(id)a0 error:(id *)a1;
- (BOOL)ensureDecodedWithError:(id *)a0;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (id)initLazyDecodedWithTrustedItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithItemMessageData:(id)a0 error:(id *)a1;

@end
