@class PKVirtualCard;

@interface PKAutoFillVirtualCardDescriptor : PKAutoFillCardDescriptor <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKVirtualCard *virtualCard;

- (id)initWithCoder:(id)a0;
- (struct CGImage { } *)artwork;
- (BOOL)requiresAuthorization;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (struct CGImage { } *)cardArt;
- (id)_initWithVirtualCard:(id)a0 type:(unsigned long long)a1;
- (id)initWithVirtualCard:(id)a0;
- (id)urlToCardDetails;

@end
