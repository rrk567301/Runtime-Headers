@class NSString, NSNumber, INCurrencyAmount;

@interface INSendRideFeedbackIntent : INIntent

@property (readonly, copy) NSString *rideIdentifier;
@property (copy) NSNumber *rating;
@property (copy) INCurrencyAmount *tip;

+ (id)intentDescription;
+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithRideIdentifier:(id)a0;

@end
