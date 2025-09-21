@class NSArray, _INPBTimestamp, NSString;

@interface _INPBListRideOptionsIntentResponse : PBCodable <_INPBListRideOptionsIntentResponse, NSSecureCoding, NSCopying> {
    struct { unsigned char supportsApplePayForPayment : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBTimestamp *expirationDate;
@property (readonly, nonatomic) char hasExpirationDate;
@property (copy, nonatomic) NSArray *paymentMethods;
@property (readonly, nonatomic) unsigned long long paymentMethodsCount;
@property (copy, nonatomic) NSArray *rideOptions;
@property (readonly, nonatomic) unsigned long long rideOptionsCount;
@property (nonatomic) char supportsApplePayForPayment;
@property (nonatomic) char hasSupportsApplePayForPayment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)rideOptionsType;
+ (Class)paymentMethodsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearPaymentMethods;
- (void)addRideOptions:(id)a0;
- (void)addPaymentMethods:(id)a0;
- (void)clearRideOptions;
- (id)paymentMethodsAtIndex:(unsigned long long)a0;
- (id)rideOptionsAtIndex:(unsigned long long)a0;

@end
