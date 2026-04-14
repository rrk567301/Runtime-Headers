@class PKVirtualCard;

@interface PKAutoFillVirtualCardDescriptor : PKAutoFillCardDescriptor <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKVirtualCard *virtualCard;

- (BOOL)requiresAuthorization;
- (struct CGImage { } *)artwork;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (struct CGImage { } *)cardArt;
- (id)_initWithVirtualCard:(id)a0 type:(unsigned long long)a1;
- (id)initWithVirtualCard:(id)a0;
- (id)urlToCardDetails;

@end
