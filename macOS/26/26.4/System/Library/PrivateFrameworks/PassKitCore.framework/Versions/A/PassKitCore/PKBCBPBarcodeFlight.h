@class NSString, NSArray;

@interface PKBCBPBarcodeFlight : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *passengerName;
@property (readonly, copy, nonatomic) NSArray *legs;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)_updateWithBarcodeMessage:(id)a0;
- (id)initWithBarcodeMessage:(id)a0;
- (id)initWithPassengerName:(id)a0 legs:(id)a1;

@end
