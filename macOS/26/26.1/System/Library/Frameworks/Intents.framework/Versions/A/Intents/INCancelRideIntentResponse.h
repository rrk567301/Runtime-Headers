@class INCurrencyAmount, NSDateComponents;

@interface INCancelRideIntentResponse : INIntentResponse

@property (readonly) long long code;
@property (copy) INCurrencyAmount *cancellationFee;
@property (copy) NSDateComponents *cancellationFeeThreshold;

+ (BOOL)supportsSecureCoding;

- (id)_dictionaryRepresentation;
- (long long)code;
- (id)initWithBackingStore:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_initWithCode:(long long)a0 userActivity:(id)a1;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;

@end
