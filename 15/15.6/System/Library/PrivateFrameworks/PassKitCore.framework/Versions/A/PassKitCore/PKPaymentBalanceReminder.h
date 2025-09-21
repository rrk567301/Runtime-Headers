@class NSDecimalNumber;

@interface PKPaymentBalanceReminder : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSDecimalNumber *threshold;
@property (nonatomic, getter=isEnabled) char enabled;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithThreshold:(id)a0 isEnabled:(char)a1;

@end
