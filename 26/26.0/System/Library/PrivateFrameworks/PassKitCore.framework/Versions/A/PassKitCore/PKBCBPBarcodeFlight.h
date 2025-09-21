@class NSString, NSArray;

@interface PKBCBPBarcodeFlight : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *passengerName;
@property (readonly, copy, nonatomic) NSArray *legs;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)_updateWithBarcodeMessage:(id)a0;
- (id)initWithBarcodeMessage:(id)a0;
- (id)initWithPassengerName:(id)a0 legs:(id)a1;

@end
