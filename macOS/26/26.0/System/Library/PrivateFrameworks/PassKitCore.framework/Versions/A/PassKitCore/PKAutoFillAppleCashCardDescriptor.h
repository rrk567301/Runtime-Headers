@class PKCurrencyAmount;

@interface PKAutoFillAppleCashCardDescriptor : PKAutoFillVirtualCardDescriptor <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) PKCurrencyAmount *balance;

- (void)encodeWithCoder:(id)a0;
- (struct CGImage { } *)artwork;
- (id)initWithCoder:(id)a0;
- (struct CGImage { } *)cardArt;
- (id)initWithVirtualCard:(id)a0;

@end
