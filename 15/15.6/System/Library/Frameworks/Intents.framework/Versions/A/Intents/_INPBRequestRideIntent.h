@class NSString, _INPBDateTimeRange, _INPBInteger, _INPBPaymentMethod, _INPBDataString, _INPBLocation, _INPBIntentMetadata;

@interface _INPBRequestRideIntent : PBCodable <_INPBRequestRideIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char usesApplePayForPayment : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBLocation *dropOffLocation;
@property (readonly, nonatomic) char hasDropOffLocation;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) char hasIntentMetadata;
@property (retain, nonatomic) _INPBInteger *partySize;
@property (readonly, nonatomic) char hasPartySize;
@property (retain, nonatomic) _INPBPaymentMethod *paymentMethod;
@property (readonly, nonatomic) char hasPaymentMethod;
@property (retain, nonatomic) _INPBDataString *paymentMethodName;
@property (readonly, nonatomic) char hasPaymentMethodName;
@property (retain, nonatomic) _INPBLocation *pickupLocation;
@property (readonly, nonatomic) char hasPickupLocation;
@property (retain, nonatomic) _INPBDateTimeRange *pickupTime;
@property (readonly, nonatomic) char hasPickupTime;
@property (retain, nonatomic) _INPBDataString *rideOptionName;
@property (readonly, nonatomic) char hasRideOptionName;
@property (retain, nonatomic) _INPBDateTimeRange *scheduledPickupTime;
@property (readonly, nonatomic) char hasScheduledPickupTime;
@property (nonatomic) char usesApplePayForPayment;
@property (nonatomic) char hasUsesApplePayForPayment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
