@class NSData;

@interface MKWalletMerchantStylingInfo : NSObject <NSSecureCoding> {
    NSData *_styleAttributesData;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)imageForSize:(unsigned long long)a0 scale:(double)a1;
- (id)description;
- (id)initWithStyleAttributes:(id)a0;
- (id)imageForSize:(unsigned long long)a0 scale:(double)a1 transparent:(BOOL)a2;
- (id)_featureStyleAttributes;
- (id)tintColorForScale:(double)a0;

@end
